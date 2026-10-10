// from server: 61% by atomic.potato
extern "C" void __cdecl sub_7477e0();

struct Handles
{
    void __cdecl f(int, int);
};

void Handles::f(int a, int b)
{
    if (b != 4)
    {
        sub_7477e0();
        return;
    }

    *(int*)a = 0xb56fa8;
    *((unsigned char*)a + 4) = 0;
    *((unsigned char*)a + 5) = 0;
}
