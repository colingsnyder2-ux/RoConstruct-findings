// from server: 80% by atomic.potato
typedef void *PVOID;

struct T_740830
{
    void f(PVOID, PVOID, PVOID, PVOID, int);
};

extern T_740830 G_0xB96A50;
extern PVOID G_0x740340;
extern PVOID G_0x9DE1D8;
extern PVOID G_0x9E2828;
extern "C" void __cdecl F_0x7F4929(PVOID);

void F_0x979F90()
{
    G_0xB96A50.f(G_0x740340, 0, G_0x9E2828, G_0x9DE1D8, 1);
    F_0x7F4929((PVOID)0x988CC0);
}
