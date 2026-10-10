// from server: 95% by atomic.potato
struct S
{
    unsigned char __cdecl f(int);
};

unsigned char __cdecl S::f(int p)
{
    return p != 0 && *(int*)((char*)p + 0x1c) != 0;
}
