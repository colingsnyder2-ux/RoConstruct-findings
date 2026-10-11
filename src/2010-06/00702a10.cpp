// from server: 39% by atomic.potato
struct Inner {
    char pad[0x10];
};

struct Outer {
    char pad0[0x10];
    Inner* p;
    char pad1[0x10];
    int f(int, int, int, int, int);
};

extern "C" void __stdcall sub_702770();
extern "C" void __stdcall sub_700ca0(Inner*, int, int, int, int);

int Outer::f(int a, int b, int c, int d, int e) {
    int local = 0;
    sub_702770();
    Inner* q = p;
    sub_700ca0(q, a, b, c, d);
    return a;
}
