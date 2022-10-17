<script>
    import Home from "./Home.svelte";
    import Login from "./Login.svelte";
    import Register from "./Register.svelte";

    var menu = 1;
</script>

<nav id="menu">
    <a href='/homepage' class="nav__item" on:click|preventDefault={() => (menu = 1)}>
        Home
    </a>
    <a href='/login' class="nav__item" on:click|preventDefault={() => (menu = 2)}>
        Login
    </a>
    <a href='/register' class="nav__item" on:click|preventDefault={() => (menu = 3)}>
        Register
    </a>
</nav>

{#if menu === 1}
<Home />
{:else if menu === 2}
<Login />
{:else if menu === 3}
<Register />
{:else}
<p>
    page not found
</p>
{/if}
<style>
  nav {
    display: flex;
    justify-content: center;
    align-items: center;
    flex-direction: row;
  }
  .nav__item {
    color: rgb(35, 23, 23);
    font-weight: 600;
    font-size: 2rem;
    margin: 0 2rem;
    transition: all 400ms;
  }
  .nav__item:hover {
    color: rgb(0, 157, 255);
  }
</style>