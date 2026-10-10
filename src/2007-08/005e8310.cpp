// from server: 87% by colin
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" int __cdecl func_005f20f0(int, int, int);

struct S {
    int f(int a, int b);
};

int S::f(int a, int b)
{
    if (b == 2) {
        int r = a;
        bool eq = ((const type_info*)0x8aea28)->operator==(*(const type_info*)a);
        return eq ? r : 0;
    }
    char local = 0;
    return func_005f20f0(a, b, *(int*)&local);
}
