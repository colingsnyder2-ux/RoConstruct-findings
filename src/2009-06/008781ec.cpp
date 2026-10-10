// from server: 60% by atomic.potato
extern "C" void __cdecl sub_0071a57a(int);

struct S
{
};

int __cdecl f(int, int value)
{
    sub_0071a57a(*(int *)((char *)value - 4) ^ value);
    return 0x9b6280;
}
