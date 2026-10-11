// from server: 90% by atomic.potato
struct T_009b9060
{
    T_009b9060();
};

extern T_009b9060 G_00b90620;
extern int G_00665410;
extern int G_009cf2cc;
extern int G_009cf2e0;
extern int G_00984ab0;

extern "C" void __stdcall F_0066e580(T_009b9060 *, int *, int *, int *, int);
extern "C" void __cdecl F_007f4929(int *);

void func_009727f0()
{
    F_0066e580(&G_00b90620, &G_00665410, &G_009cf2cc, &G_009cf2e0, 1);
    F_007f4929(&G_00984ab0);
}
