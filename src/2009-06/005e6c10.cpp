// from server: 61% by atomic.potato
struct Inner {
    void* vt;
    char pad[0x14];
    int field18;
};

struct Mid {
    void* vt;
    char pad[0x14];
    int field18;
};

struct Outer {
    char pad[0x18];
    Mid* m;
};

struct Target {
    char pad[0x10];
    int field10;
    int field14;
    float field18;
};

extern "C" void __stdcall sub_609ad0(void*);

struct S {
    char pad[0x18];
    void* p;
    void f(int a, int b);
};

void S::f(int a, int b)
{
    void* q = p;
    void** vt = *(void***)q;
    float (__stdcall *fn)(int) = (float (__stdcall *)(int))vt[2];
    float r = fn(a);
    Target* t = (Target*)((char*)b + 0x10);
    sub_609ad0(t);
    *(float*)((char*)t + 8) = r;
    *(int*)((char*)t + 4) = 7;
}
