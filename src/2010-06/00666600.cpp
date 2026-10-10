// from server: 42% by atomic.potato
struct EventDesc
{
    EventDesc();
    int a;
    int b;
    int pad[4];
    int c;
    int d;
    int e;
};

extern "C" void __cdecl sub_599c50(EventDesc *);

EventDesc::EventDesc()
{
    a = 0xA3AC2C;
    b = 0xA3AC20;
    c = 0xA3AC14;
    d = 0xA3AC08;
    sub_599c50(this);
}
