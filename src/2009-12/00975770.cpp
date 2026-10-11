// from server: 78% by atomic.potato
typedef unsigned int DWORD;

struct T_006d27a0 {};
struct T_009d80e8 {};
struct T_009bb19c {};

extern T_006d27a0 G_006d27a0;
extern T_009d80e8 G_009d80e8;
extern T_009bb19c G_009bb19c;

struct T_006d32e0
{
    void f(T_009d80e8 *, T_009bb19c *, void *, unsigned int);
};

extern T_006d32e0 G_006d32e0;

extern "C" void __cdecl func_007f4929(DWORD);

void func_00975770()
{
    G_006d32e0.f(&G_009d80e8, &G_009bb19c, 0, 4);
    func_007f4929(0x009861a0);
}
