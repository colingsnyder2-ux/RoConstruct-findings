// from server: 77% by atomic.potato
struct BoundPropGetSet
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    void init();
};

extern "C" void __cdecl sub_5980d0(BoundPropGetSet *);

void BoundPropGetSet::init()
{
    a = 0xA9B41C;
    b = 0xA9B414;
    e = 0xA9B408;
    f = 0xA9B3FC;
    sub_5980d0(this);
}
