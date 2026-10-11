// from server: 77% by atomic.potato
typedef void (__thiscall *CallType1)(int, int, int, int, int);
typedef void (__cdecl *CallType2)(int);

extern int G_00710780;
extern int G_009CECF8;
extern int G_009DE2E4;
extern int G_00B95268;
extern int G_009878D0;
extern CallType1 G_0070BBB0;
extern CallType2 G_007F4929;

void Function_00978270()
{
    G_0070BBB0(
        G_00B95268,
        G_00710780,
        0,
        G_009DE2E4,
        G_009CECF8);
    G_007F4929(G_009878D0);
}
