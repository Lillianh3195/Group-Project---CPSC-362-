<script>
  import Register from "./routes/Register.svelte";
  import CreateProject from "./CreateProject.svelte";
  import Home from "./routes/Home.svelte";
  import Login from "./routes/Login.svelte";

  let menu = 0;

</script>

<main>
  <h1>Volunteer Website</h1>
  <p>
    Hello! This is our Volunteer Website.
  </p>
  <div>
    <nav>
      <ul id="menu">
        <li><a href="/" on:click|preventDefault={() => (menu = 1)}>Home</a></li> |
        <li><a href="/login" on:click|preventDefault={() => (menu = 2)}>Login</a></li> |
        <li><a href="/register" on:click|preventDefault={() => (menu = 3)}>Register</a></li>
      </ul>
    </nav>
  </div>
  {#if menu === 1}
    <Home />
  {:else if menu === 2}
    <Login />
  {:else}
    <Register />
  {/if}
</main>

<CreateProject/>

<style>
  p {
		border-radius: 5px;
		background-color: #e9e9e9;
		padding: 10px;
		margin: 10px;
		width: 300px;
	}
  ul li {
    display : inline;
  }
</style>
