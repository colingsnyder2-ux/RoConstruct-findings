// from server: 70% by atomic.potato
extern "C" void __cdecl sub_7A5710(int, int, int);

struct Effect
{
    void __cdecl f(int, int);
};

void Effect::f(int a, int b)
{
    if (b != 4)
    {
        sub_7A5710(0, a, b);
        return;
    }

    *(int*)a = 0x00B62FE8;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
