// from server: 60% by atomic.potato
extern "C" int __cdecl sub_0071a57a(int);

struct seg_00870000
{
    int __cdecl f(int);
};

int __cdecl seg_00870000::f(int value)
{
    sub_0071a57a(*((int *)value - 1) ^ value);
    return 0x9bd190;
}
