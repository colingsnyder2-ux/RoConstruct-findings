// from server: 68% by atomic.potato
struct EventDesc
{
    int f(int, int, int);
};

extern "C" void* __cdecl Function4Bafd0(int*);
extern "C" void Function6F9820(void*, int, int, int);

int EventDesc::f(int a, int b, int c)
{
    int v = 0;
    void* p = Function4Bafd0(&v);
    Function6F9820(p, a, b, c);
    return a;
}
