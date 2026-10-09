// roc 2010-06 0080d760  unit: CXTPTabClientWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080d760
//
// 0080d760  56                   push esi
// 0080d761  8bf1                 mov esi, ecx
// 0080d763  e880f81600           call 0x97cfe8
// 0080d768  8bce                 mov ecx, esi
// 0080d76a  e8d1baffff           call 0x809240
// 0080d76f  8b10                 mov edx, dword ptr [eax]
// 0080d771  8bc8                 mov ecx, eax
// 0080d773  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0080d776  ffd0                 call eax
// 0080d778  6a01                 push 1
// 0080d77a  8bce                 mov ecx, esi
// 0080d77c  e8cff8ffff           call 0x80d050
// 0080d781  5e                   pop esi
// 0080d782  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000019@CXTPTabClientWnd@ns_ROCX000019@@QAEXXZ)

namespace ns_ROCX000019 {
struct CXTPTabClientWnd
{
    void sub_738580();
    void* sub_689740();
    void sub_68d750(int);
    void fn_ROCX000019();
};

void CXTPTabClientWnd::fn_ROCX000019()
{
    sub_738580();
    void* p = sub_689740();
    (*(void (__thiscall**)(void*))(*(int*)p + 0x6c))(p);
    sub_68d750(1);
}
}
