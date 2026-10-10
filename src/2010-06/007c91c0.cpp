// from server: 59% by atomic.potato
struct S;

extern "C" void f007e14b0(void*, int);

struct S
{
    int f(void*);
};

int S::f(void* p)
{
    f007e14b0((char*)this + 0x24, *(int*)((char*)this + 0x2c));
    *(int*)((char*)p + 0x214) = 1;
    return (int)p;
}
