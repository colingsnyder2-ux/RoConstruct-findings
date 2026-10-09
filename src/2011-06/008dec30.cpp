// roc 2011-06 008dec30  unit: VCEdit::?$CXTMaskEditT  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dec30
//
// 008dec30  56                   push esi
// 008dec31  8bf1                 mov esi, ecx
// 008dec33  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008dec39  85c0                 test eax, eax
// 008dec3b  743b                 je 0x8dec78
// 008dec3d  8b4020               mov eax, dword ptr [eax + 0x20]
// 008dec40  6a00                 push 0
// 008dec42  6a00                 push 0
// 008dec44  50                   push eax
// 008dec45  ff15ec19a400         call dword ptr [0xa419ec]
// 008dec4b  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008dec51  85c9                 test ecx, ecx
// 008dec53  7419                 je 0x8dec6e
// 008dec55  8b11                 mov edx, dword ptr [ecx]
// 008dec57  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 008dec5d  ffd0                 call eax
// 008dec5f  85c0                 test eax, eax
// 008dec61  750b                 jne 0x8dec6e
// 008dec63  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008dec69  e892b7f2ff           call 0x80a400
// 008dec6e  c786ac00000001000000 mov dword ptr [esi + 0xac], 1
// 008dec78  5e                   pop esi
// 008dec79  c3                   ret 
// copied from an identical function in another client (function ?Invalidate@CXTMaskEditT@ns_ROCX000030@ns_ROCX00002d@@QAEXXZ)

namespace ns_ROCX000030 {
extern char G;

char* fn_ROCX000030()
{
    return &G;
}
}
