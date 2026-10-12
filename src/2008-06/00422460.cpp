// from server: 90% by king_originala
struct ModuleState {
    char padding[0x9c];
    void* context;
};

extern "C" ModuleState* __stdcall getState(unsigned long* cookie);
extern "C" int __stdcall activateContext(void* context);
extern "C" void __cdecl missingProcedure();
extern "C" void __stdcall cleanupContext(unsigned long cookie);

struct CSettingsExplorer {
    char padding[0x7c];
    void* procedure;

    void** getProcedure(void** result);
    int dragShowNolock(int show);
};

int CSettingsExplorer::dragShowNolock(int show)
{
    unsigned long cookie = 0;
    int active = activateContext(getState(&cookie)->context);
    int result = 0;

    if (!active)
        return 0;

    __try {
        void* resolved;
        getProcedure(&resolved);

        int (__stdcall *callback)(int) =
            reinterpret_cast<int (__stdcall *)(int)>(procedure);

        int present = callback != 0;
        if (!present)
            missingProcedure();

        result = callback(show);
    }
    __finally {
        if (active)
            cleanupContext(cookie);
    }

    return result;
}
