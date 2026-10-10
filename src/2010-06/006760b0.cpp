// from server: 55% by atomic.potato
struct Target
{
    void f();
};

struct EventDesc
{
    void f();
};

void EventDesc::f()
{
    ((Target*)(((char*)this) + 0x3c))->f();
}
