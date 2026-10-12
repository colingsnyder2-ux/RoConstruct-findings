// from server: 60% by king_originala
extern void __cdecl callback_0047d410();
extern void __cdecl callback_00416690();
extern bool __cdecl func_0060a2f0();

extern char manager_0083456c;
extern char manager_00834564;

__forceinline void* __cdecl operator new(unsigned int, void* p)
{
    return p;
}

struct Callback
{
    void (__cdecl *function)();
    unsigned int reserved;

    __forceinline Callback();
    __forceinline Callback(void (__cdecl *f)());
};

__forceinline Callback::Callback()
{
}

__forceinline Callback::Callback(void (__cdecl *f)())
{
    function = f;
}

struct FunctionA
{
    void* manager;
    unsigned int padding;
    Callback callback;
    unsigned char storage[16];

    __forceinline FunctionA(const Callback& source);
};

struct FunctionB
{
    void* manager;
    unsigned int padding;
    Callback callback;
    unsigned char storage[16];

    __forceinline FunctionB(const Callback& source);
};

__forceinline FunctionA::FunctionA(const Callback& source)
{
    manager = 0;
    if (!reinterpret_cast<bool (__cdecl *)(const Callback*)>(
            func_0060a2f0)(&source))
    {
        new (&callback) Callback(source);
        manager = &manager_0083456c;
    }
    else
    {
        manager = 0;
    }
}

__forceinline FunctionB::FunctionB(const Callback& source)
{
    manager = 0;
    if (!reinterpret_cast<bool (__cdecl *)(const Callback*)>(
            func_0060a2f0)(&source))
    {
        new (&callback) Callback(source);
        manager = &manager_00834564;
    }
    else
    {
        manager = 0;
    }
}

struct ScriptContext
{
    void target(unsigned int, unsigned int, unsigned int,
                FunctionB, FunctionA);
    void f(unsigned int, unsigned int, unsigned int);
};

void ScriptContext::f(unsigned int a, unsigned int b, unsigned int c)
{
    target(a, b, c,
           Callback(callback_00416690),
           Callback(callback_0047d410));
}
