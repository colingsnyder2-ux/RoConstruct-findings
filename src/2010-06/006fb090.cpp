// from server: 55% by atomic.potato
extern "C" void* __cdecl CreateEventDesc(int, int, int, int);

struct EventDesc
{
    int f(int, int, int);
};

struct Invoker
{
    int Invoke(void*, int, int, int);
};

int EventDesc::f(int a, int b, int c)
{
    void* p = CreateEventDesc(0, 0, 0, 0);
    return ((Invoker*)p)->Invoke(p, a, b, c);
}
