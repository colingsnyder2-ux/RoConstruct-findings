// roc 2010-06 00821110  unit: CXTCaptionButton  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00821110
//
// 00821110  56                   push esi
// 00821111  57                   push edi
// 00821112  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00821116  8bf1                 mov esi, ecx
// 00821118  83ff1a               cmp edi, 0x1a
// 0082111b  7405                 je 0x821122
// 0082111d  83ff15               cmp edi, 0x15
// 00821120  751c                 jne 0x82113e
// 00821122  e839fdffff           call 0x820e60
// 00821127  8b10                 mov edx, dword ptr [eax]
// 00821129  8bc8                 mov ecx, eax
// 0082112b  8b4204               mov eax, dword ptr [edx + 4]
// 0082112e  ffd0                 call eax
// 00821130  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00821133  6a00                 push 0
// 00821135  6a00                 push 0
// 00821137  51                   push ecx
// 00821138  ff1578ba9e00         call dword ptr [0x9eba78]
// 0082113e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00821142  8b442414             mov eax, dword ptr [esp + 0x14]
// 00821146  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082114a  52                   push edx
// 0082114b  50                   push eax
// 0082114c  51                   push ecx
// 0082114d  57                   push edi
// 0082114e  8bce                 mov ecx, esi
// 00821150  e8eb890700           call 0x899b40
// 00821155  5f                   pop edi
// 00821156  5e                   pop esi
// 00821157  c21000               ret 0x10
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
