// from server: 60% by atomic.potato
struct EventDesc
{
    int f(int, int, int);
};

extern "C" EventDesc* create_event(int);
extern "C" void initialize_event(EventDesc*, int, int, int);

int EventDesc::f(int a, int b, int c)
{
    EventDesc* p = create_event(0);
    initialize_event(p, a, b, c);
    return a;
}
