// roc 2009-12 008597e0  unit: CXTPTabClientWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008597e0
//
// 008597e0  56                   push esi
// 008597e1  8bf1                 mov esi, ecx
// 008597e3  e8c4ce0c00           call 0x9266ac
// 008597e8  8bce                 mov ecx, esi
// 008597ea  e8d1b9ffff           call 0x8551c0
// 008597ef  8b10                 mov edx, dword ptr [eax]
// 008597f1  8bc8                 mov ecx, eax
// 008597f3  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008597f6  ffd0                 call eax
// 008597f8  6a01                 push 1
// 008597fa  8bce                 mov ecx, esi
// 008597fc  e8cff8ffff           call 0x8590d0
// 00859801  5e                   pop esi
// 00859802  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00001d@CXTPTabClientWnd@ns_ROCX00001d@@QAEXXZ)

namespace ns_ROCX00001d {
struct CXTPTabClientWnd
{
    void sub_738580();
    void* sub_689740();
    void sub_68d750(int);
    void fn_ROCX00001d();
};

void CXTPTabClientWnd::fn_ROCX00001d()
{
    sub_738580();
    void* p = sub_689740();
    (*(void (__thiscall**)(void*))(*(int*)p + 0x6c))(p);
    sub_68d750(1);
}
}
