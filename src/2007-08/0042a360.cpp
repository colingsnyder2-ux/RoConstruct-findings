// from server: 37% by colin
struct ThreadLogManager {
    ThreadLogManager();
};

extern "C" void __stdcall sub_42A2B0();
extern "C" void __stdcall sub_630D23(void*);

struct LogManager {
    static bool logsEnabled;
    static void* mainLogManager;
};

bool LogManager::logsEnabled;
void* LogManager::mainLogManager;

ThreadLogManager::ThreadLogManager()
{
    if (!(LogManager::logsEnabled & 1)) {
        LogManager::logsEnabled |= 1;
        sub_42A2B0();
        sub_630D23((void*)0x7778c0);
    }
    LogManager::mainLogManager = (void*)0x8bb8f8;
}
