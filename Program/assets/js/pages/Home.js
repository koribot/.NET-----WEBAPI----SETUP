import { router, setScript } from "../Kori/Kori.js"


setScript("Home",{

})

export const Home = (count) => {
  return `
  <div id='awe' cName='aw' class='aw'>
    <p>Welcome to koribotjs</p>
    <a href="prevReload-Home-navigate">Go to Hello Page</button>
  </div>
`
}

export default Home