// from server: 85% by atomic.potato
typedef int (__cdecl *Fn)(int);

extern "C" int call_6a1de2(int);
extern "C" int call_802878(int, int);

struct S {
    int f();
    int pad0[3];
};

int S::f()
{
    int a = *(int *)((char *)this + 12);
    int b = *(int *)((char *)a + 516);
    int c = *(int *)((char *)b + 944);
    if (c) {
        int d = call_6a1de2(c);
        return call_802878(0x9505d0, d);
    }
    return 0;
}
