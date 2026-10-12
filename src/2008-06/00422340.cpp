// from server: 90% by king_originala
struct ModuleState
{
    char padding[0x9c];
    void* activationContext;
};

extern ModuleState* __cdecl getModuleState();
extern "C" int __stdcall activateContext(void*, unsigned long*);
extern "C" int __stdcall deactivateContext(unsigned long, unsigned long);
extern void __cdecl invalidCallback();

struct CSettingsExplorer
{
    char padding[0x74];
    int (__stdcall *callback)(unsigned long, unsigned long);

    void prepare(unsigned long*);
    int invoke(unsigned long, unsigned long);
};

int CSettingsExplorer::invoke(unsigned long a, unsigned long b)
{
    unsigned long cookie = 0;
    int active = activateContext(getModuleState()->activationContext, &cookie);
    int result = 0;

    if (!active)
        return 0;

    __try
    {
        unsigned long state;
        prepare(&state);

        int (__stdcall *fn)(unsigned long, unsigned long) = callback;
        int valid = fn != 0;
        if (!valid)
            invalidCallback();

        result = fn(a, b);
    }
    __finally
    {
        if (active)
            deactivateContext(0, cookie);
    }

    return result;
}
