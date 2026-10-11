// from server: 69% by atomic.potato
struct EventDesc
{
    int f(int, int, int);
};

extern "C" EventDesc * __cdecl create_event(int);

int EventDesc::f(int a, int b, int c)
{
    EventDesc *p = create_event(0);
    p->f(a, b, c);
    return a;
}
