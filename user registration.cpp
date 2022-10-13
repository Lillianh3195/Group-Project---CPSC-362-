<script>

  let email, password;
  let errors = [], submitting, success;

  async function handleSubmit() {
    submitting = true;
    errors = [];
    const { response, json } = await api.post(
      'http://http URL,
      'users',
      { user: { email, password } }
    );
    if (response.status === 200) {
      success = json.message;
      email = undefined;
      password = undefined;
    }
    else if (response.status === 401) {
      success = undefined;
      if (json.email) {
        errors = [...errors, `Email ${json.email[0]}`];
      }
      if (json.password) {
        errors = [...errors, `Password ${json.password[0]}`];
      }
    }
    else if (response.status === 404) {
      errors = ['Registration cannot be found, try again.'];
    }
    else if (response.status === 500) {
      errors = ['Error, something went wrong! try again.'];
    }
    submitting = false;
  }
</script>

<svelte:head>
  <title> Register Users Svelte r</title>
</svelte:head>

<form
  on:submit|preventDefault={handleSubmit}
  method="POST"
>
  <div>
    <div>
      <input
        aria-label="Email address"
        name="user[email]"
        type="email"
        required
        placeholder="Email address"
        bind:value={email}
      />
    </div>
    <div>
      <input
        aria-label="Password"
        name="user[password]"
        type="password"
        required
        placeholder="Password (6 characters minimum)"
        bind:value={password}
      />
    </div>
  </div>

  <div>
    <button
      type="submit"
      disabled={submitting}
    >
      {#if submitting}
        Submitting
      {:else}
        Submit
      {/if}
    </button>
  </div>
</form>
