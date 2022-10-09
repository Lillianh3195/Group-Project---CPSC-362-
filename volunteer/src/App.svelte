<script>
  import Register from "./Register.svelte";

  let menu = 0;
</script>

<main>
  <h1>Volunteer Website</h1>
  <p>
    Hello! This is our Volunteer Website.
  </p>
  <div>
    <ul id="menu">
      <li><a href="/" on:click|preventDefault={() => (menu = 1)}>Home</a></li> |
      <li><a href="/" on:click|preventDefault={() => (menu = 2)}>Login</a></li> |
      <li><a href="/" on:click|preventDefault={() => (menu = 3)}>Register</a></li>
    </ul>
  </div>

  {#if menu === 3}
    <Register />
  {/if}
</main>

<style>
  .p {
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
