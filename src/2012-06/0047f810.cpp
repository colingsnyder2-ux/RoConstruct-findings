// from server: 62% by tester
struct S {
    char pad[8];
};

void __cdecl f(int a, int b, int c)
{
    if (c == 4) {
        char *p = (char *)b;
        *(int *)p = 0xd6da50;
        p[4] = 0;
        p[5] = 0;
    } else {
        extern void __cdecl g(int, int, int);
        g(a, b, c);
    }
}
