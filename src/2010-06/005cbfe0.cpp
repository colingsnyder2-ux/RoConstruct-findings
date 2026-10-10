// from server: 91% by atomic.potato
extern "C" long __stdcall InterlockedDecrement(long volatile*);

struct EventDesc
{
    void f();
};

void EventDesc::f()
{
    *(long*)this = 0xa2cd08;
    InterlockedDecrement((long volatile*)0xc23840);
}
