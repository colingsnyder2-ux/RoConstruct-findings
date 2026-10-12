// from server: 90% by king_originala
struct ModuleState {
    char padding[0x9c];
    void* activationContext;
};

extern "C" ModuleState* __stdcall getModuleState();
extern "C" int __stdcall activateContext(void*, unsigned long*);
extern "C" void __stdcall deactivateContext(unsigned long);
extern "C" void __stdcall reportMissingProcedure();

struct CSettingsExplorer {
    char padding[0x70];
    void* procedure;

    void** getProcedure(void** result);
    int dragLeave(void* window);
};

int CSettingsExplorer::dragLeave(void* window)
{
    unsigned long cookie = 0;
    int activated = activateContext(getModuleState()->activationContext, &cookie);
    int result = 0;

    if (!activated)
        return 0;

    __try {
        void* resolved;
        getProcedure(&resolved);

        typedef int (__stdcall *Procedure)(void*);
        Procedure function = reinterpret_cast<Procedure>(procedure);
        int available = function != 0;
        if (!available)
            reportMissingProcedure();

        result = function(window);
    }
    __finally {
        if (activated)
            deactivateContext(cookie);
    }

    return result;
}
