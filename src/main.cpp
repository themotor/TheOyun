#include "motor/engine.h"

int main()
{
  motor::Engine engine;

  motor::WindowOptions opts;
  opts.height_ = 600;
  opts.width_ = 800;
  opts.title_ = "NABER!";
  engine.InitializeWindow(std::move(opts));

  engine.MainLoop();
  return 0;
}
