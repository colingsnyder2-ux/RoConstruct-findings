// from server: 100% by tester
// roc 2011-06 00719a70  unit: RBX::VGuiMain::?$FactoryProduct  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00719a70
//
// 00719a70  8b542408             mov edx, dword ptr [esp + 8]
// 00719a74  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00719a77  8b00                 mov eax, dword ptr [eax]
// 00719a79  56                   push esi
// 00719a7a  8b742408             mov esi, dword ptr [esp + 8]
// 00719a7e  83c130               add ecx, 0x30
// 00719a81  52                   push edx
// 00719a82  56                   push esi
// 00719a83  ffd0                 call eax
// 00719a85  8bc6                 mov eax, esi
// 00719a87  5e                   pop esi
// 00719a88  c20800               ret 8

struct S
{
    int f(int, int);
};

int S::f(int a, int b)
{
    int *p = *(int **)((char *)this + 0x30);
    ((void (__thiscall *)(int *, int, int))p[0])((int *)((char *)this + 0x30), a, b);
    return a;
}
