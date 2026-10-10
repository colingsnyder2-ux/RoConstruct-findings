// from server: 15% by colin
struct LogManager {
    void construct(const char* name);
};

struct ThreadLogManager : LogManager {
    ThreadLogManager(const char* name);
};

extern "C" const char* __cdecl get_thread_name();

ThreadLogManager::ThreadLogManager(const char* name)
{
    LogManager::construct(get_thread_name());
}
