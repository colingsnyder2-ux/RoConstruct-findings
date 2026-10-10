// from server: 27% by colin
struct ThreadLogManager {
    ThreadLogManager();
};

struct LogManager {
    LogManager(const char* name);
};

struct MainLogManager {
    void setLog(void* log);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl operator_delete(void* p);

void* __cdecl RBX_get_thread_name();

ThreadLogManager::ThreadLogManager()
{
    char* mem = (char*)operator_new(0xc);
    if (mem) {
        *(void**)(mem + 0) = (void*)0x427ed0;
        *(void**)(mem + 4) = 0;
        *(void**)(mem + 8) = (void*)0x570ef0;
        void* p = (void*)0x4a5bc0;
        if (p) {
            void* r = ((void* (__cdecl*)(void*, void*))0x427ed0)(p, 0);
            *(void**)(mem + 4) = r;
        }
        ((void (__thiscall*)(void*))0x42a210)(mem);
    }
    ((void (__thiscall*)(ThreadLogManager*, void*))0x428c90)(this, mem);
}
