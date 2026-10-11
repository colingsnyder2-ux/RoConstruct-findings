// from server: 60% by atomic.potato
extern "C" void* sub_749380(int);

extern "C" void sub_748870(void*, int, int, int);

struct EventDesc
{
    void* f(int, int, int);
};

void* EventDesc::f(int a, int b, int c)
{
    void* p = sub_749380(0);
    sub_748870(p, a, b, c);
    return (void*)a;
}
