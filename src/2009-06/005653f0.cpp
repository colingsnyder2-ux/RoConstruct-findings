// from server: 56% by atomic.potato
extern "C" int __stdcall sub_5652F0(int, int, int, int);

struct S {
    int __cdecl f(int, int);
};

int S::f(int a, int b) {
    int local = 0;
    int *p = (int *)a;
    int v = *p;
    sub_5652F0(a, v, (int)&local, 0x14);
    return a;
}
