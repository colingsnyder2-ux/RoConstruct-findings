// roc 2010-06 00899b40  unit: CXTColorSelectorCtrl  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899b40
//
// 00899b40  56                   push esi
// 00899b41  57                   push edi
// 00899b42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00899b46  8bf1                 mov esi, ecx
// 00899b48  83ff1a               cmp edi, 0x1a
// 00899b4b  7405                 je 0x899b52
// 00899b4d  83ff15               cmp edi, 0x15
// 00899b50  751c                 jne 0x899b6e
// 00899b52  e80973f8ff           call 0x820e60
// 00899b57  8b10                 mov edx, dword ptr [eax]
// 00899b59  8bc8                 mov ecx, eax
// 00899b5b  8b4204               mov eax, dword ptr [edx + 4]
// 00899b5e  ffd0                 call eax
// 00899b60  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00899b63  6a00                 push 0
// 00899b65  6a00                 push 0
// 00899b67  51                   push ecx
// 00899b68  ff1578ba9e00         call dword ptr [0x9eba78]
// 00899b6e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00899b72  8b442414             mov eax, dword ptr [esp + 0x14]
// 00899b76  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00899b7a  52                   push edx
// 00899b7b  50                   push eax
// 00899b7c  51                   push ecx
// 00899b7d  57                   push edi
// 00899b7e  8bce                 mov ecx, esi
// 00899b80  e895dff0ff           call 0x7a7b1a
// 00899b85  5f                   pop edi
// 00899b86  5e                   pop esi
// 00899b87  c21000               ret 0x10
// copied from an identical function in another client (function ?sub_69F420@CXTCaptionButton@ns_ROCX000001@ns_ROCX0000df@@QAEXHHHH@Z)

namespace ns_ROCX000001 {
struct P_func_00743a30 { void g(); };
struct S_func_00743a30 {
    char pad[256];
    P_func_00743a30* m_p;
    void f();
};
void S_func_00743a30::f()
{
    m_p->g();
}
}
