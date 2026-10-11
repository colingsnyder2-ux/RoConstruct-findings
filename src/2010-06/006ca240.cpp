// from server: 60% by atomic.potato
extern "C" void* __cdecl sub_6c8fe0(int);
extern "C" void sub_6c86f0(void*, int, int, int);

struct EventDesc
{
    void* f(int, int, int);
};

void* EventDesc::f(int a, int b, int c)
{
    void* p = sub_6c8fe0(0);
    sub_6c86f0(p, a, b, c);
    return (void*)a;
}
