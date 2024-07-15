using Microsoft.AspNetCore.Mvc;

namespace src.Controllers;

[ApiController]
[Route("[controller]")]
public class HelloWorldController : ControllerBase
{

    private readonly ILogger<HelloWorldController> _logger;

    public HelloWorldController(ILogger<HelloWorldController> logger)
    {
        _logger = logger;
    }

    [HttpGet()]
    public HelloWorld Get()
    {
        var b = new HelloWorld{Message = "hello world"};
          
        return b;
    }
}
