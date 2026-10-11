// from server: 62% by atomic.potato
extern "C" int __stdcall GetSystemMetrics(int);

struct Inner
{
    char pad[0x14];
    Inner();
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
    f0 = 0x20;
    f18 = 0;
    int a = GetSystemMetrics(1);
    f20 = a;
    int b = GetSystemMetrics(0);
    f1c = b;
}
