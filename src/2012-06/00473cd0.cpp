// from server: 65% by atomic.potato
extern "C" void __cdecl sub_471830();

struct S
{
    void f(int, int, int);
};

void S::f(int a, int b, int c)
{
    if (c != 4)
    {
        sub_471830();
        return;
    }

    *(int*)b = 0x00d6ced0;
    *((char*)b + 4) = 0;
    *((char*)b + 5) = 0;
}
