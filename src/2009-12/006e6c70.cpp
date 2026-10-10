// from server: 82% by atomic.potato
extern "C" void __cdecl sub_6e6ac0(int);

void f(int a, int b, int c)
{
    if (c != 4)
    {
        sub_6e6ac0(c);
        return;
    }

    *(int*)b = 0xB43890;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
