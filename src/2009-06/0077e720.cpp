// roc 2009-06 0077e720  unit: CXTPTabClientWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077e720
//
// 0077e720  56                   push esi
// 0077e721  8bf1                 mov esi, ecx
// 0077e723  e818da0c00           call 0x84c140
// 0077e728  8bce                 mov ecx, esi
// 0077e72a  e8a15ad3ff           call 0x4b41d0
// 0077e72f  8b10                 mov edx, dword ptr [eax]
// 0077e731  8bc8                 mov ecx, eax
// 0077e733  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0077e736  ffd0                 call eax
// 0077e738  6a01                 push 1
// 0077e73a  8bce                 mov ecx, esi
// 0077e73c  e8cff8ffff           call 0x77e010
// 0077e741  5e                   pop esi
// 0077e742  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX00000f@CXTPTabClientWnd@ns_ROCX00000f@@QAEXXZ)

namespace ns_ROCX00000f {
struct CXTPTabClientWnd
{
    void sub_738580();
    void* sub_689740();
    void sub_68d750(int);
    void fn_ROCX00000f();
};

void CXTPTabClientWnd::fn_ROCX00000f()
{
    sub_738580();
    void* p = sub_689740();
    (*(void (__thiscall**)(void*))(*(int*)p + 0x6c))(p);
    sub_68d750(1);
}
}
