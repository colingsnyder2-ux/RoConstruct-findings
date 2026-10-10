// from server: 66% by atomic.potato
struct S {
    void f(int, int, int);
};

void S::f(int, int a, int b)
{
    if (b != 4)
        *(int*)b = b;

    if (b == 4) {
        *(int*)a = 0x00b50ab0;
        *((unsigned char*)a + 4) = 0;
        *((unsigned char*)a + 5) = 0;
    }
}
