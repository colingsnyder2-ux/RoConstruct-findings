// roc 2011-06 008f26a0  unit: CXTColorSelectorCtrl  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f26a0
//
// 008f26a0  56                   push esi
// 008f26a1  57                   push edi
// 008f26a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008f26a6  8bf1                 mov esi, ecx
// 008f26a8  83ff1a               cmp edi, 0x1a
// 008f26ab  7405                 je 0x8f26b2
// 008f26ad  83ff15               cmp edi, 0x15
// 008f26b0  751c                 jne 0x8f26ce
// 008f26b2  e859fbffff           call 0x8f2210
// 008f26b7  8b10                 mov edx, dword ptr [eax]
// 008f26b9  8bc8                 mov ecx, eax
// 008f26bb  8b4204               mov eax, dword ptr [edx + 4]
// 008f26be  ffd0                 call eax
// 008f26c0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008f26c3  6a00                 push 0
// 008f26c5  6a00                 push 0
// 008f26c7  51                   push ecx
// 008f26c8  ff15ec19a400         call dword ptr [0xa419ec]
// 008f26ce  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f26d2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008f26d6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f26da  52                   push edx
// 008f26db  50                   push eax
// 008f26dc  51                   push ecx
// 008f26dd  57                   push edi
// 008f26de  8bce                 mov ecx, esi
// 008f26e0  e8f37af1ff           call 0x80a1d8
// 008f26e5  5f                   pop edi
// 008f26e6  5e                   pop esi
// 008f26e7  c21000               ret 0x10
// copied from an identical function in another client (function ?sub_69F420@CXTCaptionButton@ns_ROCX00000f@ns_ROCX0000f5@@QAEXHHHH@Z)

namespace ns_ROCX00000f {
extern char G;

char* fn_ROCX00000f()
{
    return &G;
}
}
