// from server: 69% by atomic.potato
struct EventDesc
{
    int f(int, int, int);
};

extern "C" void *__cdecl CreateObject(int);

struct Object
{
    void Initialize(int, int, int);
};

int EventDesc::f(int a, int b, int c)
{
    void *p;
    p = CreateObject(0);
    ((Object *)p)->Initialize(a, b, c);
    return a;
}
