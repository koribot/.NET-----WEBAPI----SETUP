import NotFound from "./pages/NotFound.js"
import Home from "./pages/Home.js"

export const routes = () => {
 const currentLocation = window.location.pathname
 const routes = {
  "/": Home 
}
 return routes[currentLocation] || NotFound

}

export default routes