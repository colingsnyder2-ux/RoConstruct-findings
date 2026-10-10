// from server: 83% by atomic.potato
struct EventDesc {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;

    void set();
};

void EventDesc::set()
{
    a = 0xA1AAFC;
    b = 0xA1AAF4;
    e = 0xA1AAE8;
    f = 0xA1AADC;
}
