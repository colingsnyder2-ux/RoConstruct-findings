// from server: 40% by atomic.potato
extern "C" void* __cdecl function_00606fa0(void);
extern "C" void __cdecl function_00745cd0(void*, void*, void*, void*);

struct T {
    void* f(void*, void*, void*);
};

void* T::f(void* a, void* b, void* c)
{
    void* p = function_00606fa0();
    function_00745cd0(p, a, b, c);
    return a;
}
