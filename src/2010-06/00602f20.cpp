// from server: 61% by atomic.potato
extern "C" void __cdecl sub_6019c0();

void f(int, int, int);

void f(int a, int b, int c)
{
    if (c != 4)
    {
        sub_6019c0();
        return;
    }

    *(int*)b = 0x00bae910;
    *((unsigned char*)b + 4) = 0;
    *((unsigned char*)b + 5) = 0;
}
