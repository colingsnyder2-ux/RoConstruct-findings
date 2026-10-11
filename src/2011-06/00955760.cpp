// from server: 48% by atomic.potato
struct S {
    char pad[8];
    void f(int, int, int);
};

extern "C" void __stdcall helper(int, int, int, int, int, int);

void S::f(int a, int b, int c)
{
    char zero = 0;
    helper((int)zero, a, b, c, (int)(long)&zero, (int)(long)&zero);
}
