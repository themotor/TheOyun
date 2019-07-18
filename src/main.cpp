#include "gflags/gflags.h"
#include "glog/logging.h"
#include "motor/engine.h"

int main(int argc, char** argv)
{
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  LOG(INFO) << "Starting the game";

  motor::Engine engine;

  motor::WindowOptions opts;
  opts.height_ = 600;
  opts.width_ = 800;
  opts.title_ = "NABER!";
  engine.InitializeWindow(std::move(opts));

  engine.MainLoop();
  return 0;
}
