// roc 2008-06 00705db0  unit: CXTPTabClientWnd  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00705db0
//
// 00705db0  56                   push esi
// 00705db1  8bf1                 mov esi, ecx
// 00705db3  e8aa640b00           call 0x7bc262
// 00705db8  8bce                 mov ecx, esi
// 00705dba  e871b00000           call 0x710e30
// 00705dbf  8b10                 mov edx, dword ptr [eax]
// 00705dc1  8bc8                 mov ecx, eax
// 00705dc3  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00705dc6  ffd0                 call eax
// 00705dc8  6a01                 push 1
// 00705dca  8bce                 mov ecx, esi
// 00705dcc  e8cff8ffff           call 0x7056a0
// 00705dd1  5e                   pop esi
// 00705dd2  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000016@CXTPTabClientWnd@ns_ROCX000016@@QAEXXZ)

namespace ns_ROCX000016 {
struct CXTPTabClientWnd
{
    void sub_738580();
    void* sub_689740();
    void sub_68d750(int);
    void fn_ROCX000016();
};

void CXTPTabClientWnd::fn_ROCX000016()
{
    sub_738580();
    void* p = sub_689740();
    (*(void (__thiscall**)(void*))(*(int*)p + 0x6c))(p);
    sub_68d750(1);
}
}
