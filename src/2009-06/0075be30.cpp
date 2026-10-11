// from server: 66% by atomic.potato
extern "C" int __stdcall GetSystemMetrics(int);

struct Inner
{
    char pad[0x14];
    void ctor();
};

struct S
{
    int f0;
    Inner inner;
    int f18;
    int f1c;
    int f20;
    S();
};

S::S()
{
    inner.ctor();
    f0 = 0x20;
    f18 = 0;
    f1c = GetSystemMetrics(1);
    f20 = GetSystemMetrics(0);
}
