// from server: 80% by tester
struct S {
    int __cdecl f(int, int, int, int, int, int);
};

extern "C" int __cdecl helper(int, int, int, int, int, int);

int S::f(int a, int b, int c, int d, int e, int f) {
    char flag = 0;
    helper(a, b, c, d, e, f);
    int diff = e - a;
    int q = diff / 24;
    return d - q * 24;
}
