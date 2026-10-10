// from server: 62% by atomic.potato
extern "C" void __stdcall sub_0070e320(void*, int);

struct S
{
    int f(void*);
};

int S::f(void* p)
{
    sub_0070e320((char*)this + 0x24, *(int*)((char*)this + 0x2c));
    *(int*)((char*)p + 0x214) = 1;
    return (int)p;
}
