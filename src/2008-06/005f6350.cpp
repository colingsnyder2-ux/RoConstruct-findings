// from server: 52% by atomic.potato
extern "C" void __cdecl function_005f6080(int, int, int, int);

struct S
{
};

void __cdecl f(int a, int b, int c)
{
    function_005f6080(c, b, b >> 31, b);
}
