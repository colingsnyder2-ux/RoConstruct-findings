// roc 2009-12 00756c10  unit: RBX::ScreenGui  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00756c10
//
// 00756c10  8b542408             mov edx, dword ptr [esp + 8]
// 00756c14  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00756c17  8b00                 mov eax, dword ptr [eax]
// 00756c19  56                   push esi
// 00756c1a  8b742408             mov esi, dword ptr [esp + 8]
// 00756c1e  83c130               add ecx, 0x30
// 00756c21  52                   push edx
// 00756c22  56                   push esi
// 00756c23  ffd0                 call eax
// 00756c25  8bc6                 mov eax, esi
// 00756c27  5e                   pop esi
// 00756c28  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000006@@QAEHHH@Z)

namespace ns_ROCX000006 {
// from server: 100% by atomic.potato
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
}
