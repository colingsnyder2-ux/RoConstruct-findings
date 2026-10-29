// from server: 63% by Yeetserama
struct S {
    void __cdecl f(int, int, int);
};

extern void __stdcall g(int, int, int, int);

void S::f(int a, int b, int c)
{
    char flag = 0;
    g(*(int*)&flag, a, b, c);
}
