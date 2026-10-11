// from server: 60% by atomic.potato
extern "C" void* __cdecl sub_4664d0(int);
extern "C" void sub_6c8330(void*, int, int, int);

struct EventDesc
{
    void* f(int, int, int);
};

void* EventDesc::f(int a, int b, int c)
{
    void* p = sub_4664d0(0);
    sub_6c8330(p, a, b, c);
    return (void*)a;
}
