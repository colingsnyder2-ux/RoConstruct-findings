// from server: 37% by atomic.potato
extern "C" void function_71c120(int, int, int, const void *, const void *);
extern "C" void __cdecl function_7f4929(const void *);

struct S
{
    void f();
};

void S::f()
{
    function_71c120(0, 15, 244, (const void *)0x9d1fdc, (const void *)0x9df8ec);
    function_7f4929((const void *)0x987e60);
}
