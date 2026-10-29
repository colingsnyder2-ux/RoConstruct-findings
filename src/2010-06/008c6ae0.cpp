// roc 2010-06 008c6ae0  unit: RBX::ManualObjectMeshGenAdapter  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008c6ae0
//
// 008c6ae0  56                   push esi
// 008c6ae1  8bf1                 mov esi, ecx
// 008c6ae3  8b5608               mov edx, dword ptr [esi + 8]
// 008c6ae6  8b4e04               mov ecx, dword ptr [esi + 4]
// 008c6ae9  03542408             add edx, dword ptr [esp + 8]
// 008c6aed  8b01                 mov eax, dword ptr [ecx]
// 008c6aef  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 008c6af5  52                   push edx
// 008c6af6  ffd0                 call eax
// 008c6af8  8b4608               mov eax, dword ptr [esi + 8]
// 008c6afb  5e                   pop esi
// 008c6afc  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000015@@QAEHH@Z)

namespace ns_ROCX000015 {
struct S
{
    int pad0;
    int object;
    int value;
    int f(int amount);
};

int S::f(int amount)
{
    int* p = *(int**)(object);
    ((void (__thiscall *)(int, int))p[0x3b])(object, value + amount);
    return value;
}
}
