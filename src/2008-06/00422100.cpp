// from server: 94% by king_originala
struct ModuleState {
    char padding[0x9c];
    void* context;
};

extern "C" ModuleState* __stdcall acquireState(unsigned long*);
extern "C" void* __stdcall acquireContext(void*);
extern "C" void __cdecl reportMissingProcedure();
extern "C" void __stdcall finishContext(void*);

struct CSettingsExplorer {
    char padding[0x6c];
    void* procedure;
    void** getProcedure(void** result);
    int dragEnter(void* window, int x, int y);
};

int CSettingsExplorer::dragEnter(void* window, int x, int y) {
    unsigned long cookie = 0;
    void* context = acquireContext(acquireState(&cookie)->context);
    int result = 0;
    if (!context)
        return 0;

    __try {
        void* resolved;
        getProcedure(&resolved);
        typedef int (__stdcall *Procedure)(void*, int, int);
        Procedure function = reinterpret_cast<Procedure>(procedure);
        int available = function != 0;
        if (available == 0)
            reportMissingProcedure();
        result = function(window, x, y);
    }
    __finally {
        finishContext(context);
    }
    return result;
}
