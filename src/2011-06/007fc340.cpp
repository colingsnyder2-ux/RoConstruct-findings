// from server: 55% by atomic.potato
extern "C" void __cdecl Target_007fb880(void*, int);

struct S_func_007fc340 {
};

void __cdecl f(int value, void* p)
{
    if (value == 4) {
        *(int*)p = 0x00c95248;
        ((char*)p)[4] = 0;
        ((char*)p)[5] = 0;
    } else {
        Target_007fb880(p, value);
    }
}
