// from server: 55% by atomic.potato
struct EventDesc
{
    int f(int, int, int);
};

extern "C" EventDesc* __stdcall sub_7492e0(int);

extern "C" void __stdcall sub_748730(EventDesc*, int, int, int);

int EventDesc::f(int a, int b, int c)
{
    EventDesc* p = sub_7492e0(0);
    sub_748730(p, c, b, a);
    return a;
}
