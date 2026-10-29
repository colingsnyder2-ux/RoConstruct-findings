#include "force_verified.h"
// Boost 1.34.1 rebuild test: once, mutex, thread join, signals, regex, filesystem, date_time.
#include <boost/thread/once.hpp>
#include <boost/thread/mutex.hpp>
#include <boost/thread/thread.hpp>
#include <boost/thread/tss.hpp>
#include <boost/program_options.hpp>
#include <sstream>
#include <boost/signals.hpp>
#include <boost/regex.hpp>
#include <boost/filesystem/path.hpp>
#include <boost/date_time/gregorian/gregorian.hpp>
#include <cstdio>

// Keep this exact member in the verified library instead of emitting a harness COMDAT.
extern template void std::list<boost::signals::connection>::clear();

static int onces = 0, counter = 0, fired = 0;
static boost::once_flag flag = BOOST_ONCE_INIT;
static boost::mutex lock;
static void init() { ++onces; }
static int cleaned = 0, isolated = 0;
static void cleanup(int* value) { boost::mutex::scoped_lock l(lock); ++cleaned; delete value; }
static boost::thread_specific_ptr<int> local(&cleanup);
static void work() {
    if (!local.get()) { boost::mutex::scoped_lock l(lock); ++isolated; }
    local.reset(new int(1));
    for (int i = 0; i < 1000; ++i) { boost::mutex::scoped_lock l(lock); ++counter; }
}
static void slot(int v) { fired += v; }

int main()
{
    int failures = 0;
    boost::call_once(&init, flag); boost::call_once(&init, flag);
    if (onces != 1) { std::printf("once %d\n", onces); ++failures; }
    local.reset(new int(7));
    boost::thread a(&work), b(&work); a.join(); b.join();
    if (!local.get() || *local != 7 || isolated != 2) { std::printf("tss isolation\n"); ++failures; }
    local.reset();
    if (cleaned != 3) { std::printf("tss cleanup %d\n", cleaned); ++failures; }
    if (counter != 2000) { std::printf("mutex %d\n", counter); ++failures; }
    boost::signal<void (int)> sig; boost::signals::connection c = sig.connect(&slot); sig(3); c.disconnect(); sig(5);
    if (fired != 3) { std::printf("signals %d\n", fired); ++failures; }
    boost::smatch m; std::string s = "rbxasset://textures/sky.png";
    if (!boost::regex_match(s, m, boost::regex("([a-z]+)://(.*)")) || m[1] != "rbxasset") { std::printf("regex\n"); ++failures; }
    if (boost::filesystem::path("a/b/c.txt").leaf() != "c.txt") { std::printf("filesystem\n"); ++failures; }
    if (boost::gregorian::date(2008, 6, 1).day_of_week() != 0) { std::printf("date_time\n"); ++failures; }
    namespace po = boost::program_options;
    po::options_description options("native");
    options.add_options()("count", po::value<int>()->default_value(2))("name", po::value<std::string>())("input", po::value<std::string>());
    po::positional_options_description positional; positional.add("input", 1);
    std::vector<std::string> args;
    args.push_back("--count=3"); args.push_back("--name=Ogre"); args.push_back("input.rbxl");
    po::variables_map values;
    po::store(po::command_line_parser(args).options(options).positional(positional).run(), values); po::notify(values);
    if (values["count"].as<int>() != 3 || values["name"].as<std::string>() != "Ogre" || values["input"].as<std::string>() != "input.rbxl") ++failures;
    std::istringstream config("count=8\nname=Rbx\n"); po::variables_map configured;
    po::store(po::parse_config_file(config, options), configured); po::notify(configured);
    if (configured["count"].as<int>() != 8 || configured["name"].as<std::string>() != "Rbx") ++failures;
    bool rejected = false;
    try {
        std::vector<std::string> bad(1, "--count=oops"); po::variables_map invalid;
        po::store(po::command_line_parser(bad).options(options).run(), invalid); po::notify(invalid);
    } catch (const po::error&) { rejected = true; }
    if (!rejected) ++failures;
    std::printf("tss cleanup=%d isolated=%d program_options_checked=1\n", cleaned, isolated);
    std::printf("failures=%d\n", failures);
    return failures;
}
