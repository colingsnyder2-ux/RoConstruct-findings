// roc 2011-06 0087e830  unit: CXTCaptionButton  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087e830
//
// 0087e830  56                   push esi
// 0087e831  57                   push edi
// 0087e832  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0087e836  8bf1                 mov esi, ecx
// 0087e838  83ff1a               cmp edi, 0x1a
// 0087e83b  7405                 je 0x87e842
// 0087e83d  83ff15               cmp edi, 0x15
// 0087e840  751c                 jne 0x87e85e
// 0087e842  e8c9390700           call 0x8f2210
// 0087e847  8b10                 mov edx, dword ptr [eax]
// 0087e849  8bc8                 mov ecx, eax
// 0087e84b  8b4204               mov eax, dword ptr [edx + 4]
// 0087e84e  ffd0                 call eax
// 0087e850  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0087e853  6a00                 push 0
// 0087e855  6a00                 push 0
// 0087e857  51                   push ecx
// 0087e858  ff15ec19a400         call dword ptr [0xa419ec]
// 0087e85e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0087e862  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087e866  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0087e86a  52                   push edx
// 0087e86b  50                   push eax
// 0087e86c  51                   push ecx
// 0087e86d  57                   push edi
// 0087e86e  8bce                 mov ecx, esi
// 0087e870  e82b3e0700           call 0x8f26a0
// 0087e875  5f                   pop edi
// 0087e876  5e                   pop esi
// 0087e877  c21000               ret 0x10
// copied from an identical function in another client (function ?sub_69F420@CXTCaptionButton@ns_ROCX00000f@ns_ROCX0000f5@@QAEXHHHH@Z)

namespace ns_ROCX00000f {
extern char G;

char* fn_ROCX00000f()
{
    return &G;
}
}
