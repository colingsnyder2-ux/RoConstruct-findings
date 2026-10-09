// roc 2011-06 0086f980  unit: CXTSplitterWnd  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f980
//
// 0086f980  56                   push esi
// 0086f981  57                   push edi
// 0086f982  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0086f986  8bf1                 mov esi, ecx
// 0086f988  83ff1a               cmp edi, 0x1a
// 0086f98b  7405                 je 0x86f992
// 0086f98d  83ff15               cmp edi, 0x15
// 0086f990  751c                 jne 0x86f9ae
// 0086f992  e859f6ffff           call 0x86eff0
// 0086f997  8b10                 mov edx, dword ptr [eax]
// 0086f999  8bc8                 mov ecx, eax
// 0086f99b  8b4204               mov eax, dword ptr [edx + 4]
// 0086f99e  ffd0                 call eax
// 0086f9a0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086f9a3  6a00                 push 0
// 0086f9a5  6a00                 push 0
// 0086f9a7  51                   push ecx
// 0086f9a8  ff15ec19a400         call dword ptr [0xa419ec]
// 0086f9ae  8b542418             mov edx, dword ptr [esp + 0x18]
// 0086f9b2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086f9b6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086f9ba  52                   push edx
// 0086f9bb  50                   push eax
// 0086f9bc  51                   push ecx
// 0086f9bd  57                   push edi
// 0086f9be  8bce                 mov ecx, esi
// 0086f9c0  e813a8f9ff           call 0x80a1d8
// 0086f9c5  5f                   pop edi
// 0086f9c6  5e                   pop esi
// 0086f9c7  c21000               ret 0x10
// copied from an identical function in another client (function ?sub_69F420@CXTCaptionButton@ns_ROCX00000f@ns_ROCX0000f5@@QAEXHHHH@Z)

namespace ns_ROCX00000f {
extern char G;

char* fn_ROCX00000f()
{
    return &G;
}
}
