// from server: 96% by king_originala
struct ModuleState {
    char padding[0x9c];
    void* context;
};

extern "C" ModuleState* __stdcall getState(int*);
extern "C" unsigned long __stdcall activateContext(void*);
extern "C" void __stdcall deactivateContext(unsigned long);
extern "C" void __cdecl reportMissingProcedure();

struct CSettingsExplorer {
    char padding[0x68];
    void* procedure;
    void** getProcedure(void** result);
    void endDrag();
};

void CSettingsExplorer::endDrag() {
    int state = 0;
    unsigned long cookie = activateContext(getState(&state)->context);
    if (cookie) {
        __try {
            void* result;
            getProcedure(&result);
            void (__stdcall *function)() =
                reinterpret_cast<void (__stdcall *)()>(procedure);
            int valid = function != 0;
            if (!valid)
                reportMissingProcedure();
            function();
        }
        __finally {
            deactivateContext(cookie);
        }
    }
}
