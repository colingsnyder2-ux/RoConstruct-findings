// from server: 60% by colin
struct CMarshalWindow {
    char pad[0x20];
    int field20;
    void func(int, int, int, int, int, int, int);
};

extern "C" int __cdecl sub_416240(int, int, int, int, int);
extern "C" void __cdecl sub_416160(int, int, int, int, int, int, int);

int g_886f90;
int g_886f60;
int g_8c9824;
int g_8c9860;

void CMarshalWindow::func(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    if (g_886f90 == 0)
        g_886f90 = 0;

    int v = sub_416240(g_8c9824, g_8c9860, g_886f60, (int)&field20, a1);

    int ecx = a2;
    unsigned short dx = (unsigned short)v;
    if (ecx == 0)
        ecx = 0x56000000;

    int eax = a3;
    if (eax == 0)
        ;

    int edi = a4;
    int edx = a5;
    int edx2 = a6;
    int eax2 = a7;

    sub_416160(eax2, eax, ecx, edx2, edx, dx, edi);
}
