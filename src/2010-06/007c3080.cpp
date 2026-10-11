// from server: 30% by atomic.potato




struct Inner {
    char pad[0x24];
};

struct Outer {
    char pad0[0x18];
    Inner inner;
};

extern void G1_func_007c0e80();
void func_007c0e80();

extern "C" void __stdcall func_007c2fc0(int);
extern "C" void __stdcall func_007be990(void*, void*);
extern "C" void __stdcall func_007c1d90(void*);

struct CXTPImageManagerIcon {
    void func_007c3080(int, int, int, int, int, int, int, int, int, int);
};

void CXTPImageManagerIcon::func_007c3080(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    func_007c2fc0(a1);
    Inner local;
    func_007be990(&local, &local);
    func_007c1d90(&local);
    func_007c0e80();
}
