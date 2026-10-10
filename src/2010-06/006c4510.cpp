// from server: 82% by atomic.potato
extern "C" void __cdecl sub_6c4200(int);

struct S {
    void __cdecl f(int, int);
};

void S::f(int a, int b)
{
    if (b != 4) {
        sub_6c4200(b);
        return;
    }

    *(int *)a = 0xbd0518;
    *((char *)a + 4) = 0;
    *((char *)a + 5) = 0;
}
