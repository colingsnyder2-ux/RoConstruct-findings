// roc 2011-06 00868980  unit: CXTPTabClientWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00868980
//
// 00868980  56                   push esi
// 00868981  8bf1                 mov esi, ecx
// 00868983  e8703e1600           call 0x9cc7f8
// 00868988  8bce                 mov ecx, esi
// 0086898a  e8a1bdffff           call 0x864730
// 0086898f  8b10                 mov edx, dword ptr [eax]
// 00868991  8bc8                 mov ecx, eax
// 00868993  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00868996  ffd0                 call eax
// 00868998  6a01                 push 1
// 0086899a  8bce                 mov ecx, esi
// 0086899c  e8cff8ffff           call 0x868270
// 008689a1  5e                   pop esi
// 008689a2  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000008@CXTPTabClientWnd@ns_ROCX000008@@QAEXXZ)

namespace ns_ROCX000008 {
struct CXTPTabClientWnd
{
    void sub_738580();
    void* sub_689740();
    void sub_68d750(int);
    void fn_ROCX000008();
};

void CXTPTabClientWnd::fn_ROCX000008()
{
    sub_738580();
    void* p = sub_689740();
    (*(void (__thiscall**)(void*))(*(int*)p + 0x6c))(p);
    sub_68d750(1);
}
}
