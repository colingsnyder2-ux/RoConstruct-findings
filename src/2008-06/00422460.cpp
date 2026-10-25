// roc 2008-06 00422460  unit: CSettingsExplorer  size: 232 bytes
// Reconstructed finally funclet (vs prior 83%): __finally carries a state != 2 guard,
// GetLastError/SetLastError preservation keyed on (result == 0), and a 2-arg cleanup(0, cookie).
// Remaining residue (90%): live-in register home — target keeps result in ebx (funclet restore
// 'mov ebx,[ebp-0x1c]'), our builds keep it in esi/edi; main body otherwise byte-identical.
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct ModuleState {
    char padding[0x9c];
    void* context;
};

extern "C" ModuleState* __stdcall getState(unsigned long* cookie);
extern "C" int __stdcall activateContext(void* context);
extern "C" void __cdecl missingProcedure();
extern "C" void __stdcall cleanupContext(int, unsigned long cookie);
extern "C" unsigned long (__stdcall *GetLastError)();
extern "C" void (__stdcall *SetLastError)(unsigned long);

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
        if (active != 2)
        {
            unsigned long error;
            if (result == 0)
                error = GetLastError();
            else
                error = 0;

            cleanupContext(0, cookie);

            if (result == 0)
                SetLastError(error);
        }
    }

    return result;
}
