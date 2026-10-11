// from server: 70% by atomic.potato
struct EventDesc
{
    int f(int, int, int);
};

extern "C" int __fastcall sub_006faf60(EventDesc *, int);
extern "C" int __stdcall sub_006f9960(int *, int, int, int);

int EventDesc::f(int a, int b, int c)
{
    int value = 0;
    sub_006faf60(this, 0);
    sub_006f9960(&value, a, b, c);
    return a;
}
