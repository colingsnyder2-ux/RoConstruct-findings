// roc 2010-06 00812130  unit: CXTSplitterWnd  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812130
//
// 00812130  56                   push esi
// 00812131  57                   push edi
// 00812132  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00812136  8bf1                 mov esi, ecx
// 00812138  83ff1a               cmp edi, 0x1a
// 0081213b  7405                 je 0x812142
// 0081213d  83ff15               cmp edi, 0x15
// 00812140  751c                 jne 0x81215e
// 00812142  e849f6ffff           call 0x811790
// 00812147  8b10                 mov edx, dword ptr [eax]
// 00812149  8bc8                 mov ecx, eax
// 0081214b  8b4204               mov eax, dword ptr [edx + 4]
// 0081214e  ffd0                 call eax
// 00812150  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00812153  6a00                 push 0
// 00812155  6a00                 push 0
// 00812157  51                   push ecx
// 00812158  ff1578ba9e00         call dword ptr [0x9eba78]
// 0081215e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00812162  8b442414             mov eax, dword ptr [esp + 0x14]
// 00812166  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0081216a  52                   push edx
// 0081216b  50                   push eax
// 0081216c  51                   push ecx
// 0081216d  57                   push edi
// 0081216e  8bce                 mov ecx, esi
// 00812170  e8a559f9ff           call 0x7a7b1a
// 00812175  5f                   pop edi
// 00812176  5e                   pop esi
// 00812177  c21000               ret 0x10
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
