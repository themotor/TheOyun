#include "gflags/gflags.h"
#include "glog/logging.h"
#include "motor/engine.h"

int main(int argc, char** argv)
{
  FLAGS_alsologtostderr = true;
  gflags::ParseCommandLineFlags(&argc, &argv, true);
  google::InitGoogleLogging(argv[0]);
  LOG(INFO) << "Starting the game";

  motor::Engine engine;
  LOG(INFO) << "Engine creation";

  motor::WindowOptions opts;
  opts.width_ = 800;
  opts.height_ = 600;
  opts.title_ = "NABER!";
  engine.InitializeWindow(std::move(opts));
  LOG(INFO) << "Window creation";

  engine.MainLoop();
  return 0;
}
