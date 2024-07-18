using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Extensions.Hosting;

namespace src.Controllers;

[ApiController]
[Route("")]
public class HelloWorldController : ControllerBase
{
    private readonly ILogger<HelloWorldController> _logger;
    private readonly IWebHostEnvironment _env;

    public HelloWorldController(ILogger<HelloWorldController> logger, IWebHostEnvironment env)
    {
        _logger = logger;
        _env = env;
    }

    [HttpGet]
    public IActionResult Get()
    {
        var filePath = Path.Combine(_env.ContentRootPath, "../Program/assets/html/index.html");
        var content = System.IO.File.ReadAllText(filePath);
        return Content(content, "text/html");
    }
}
