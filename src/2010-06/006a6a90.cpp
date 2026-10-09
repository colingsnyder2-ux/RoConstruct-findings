// roc 2010-06 006a6a90  unit: boost::iostreams::Uinput::?$filtering_stream  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a6a90
//
// 006a6a90  51                   push ecx
// 006a6a91  53                   push ebx
// 006a6a92  56                   push esi
// 006a6a93  8b742414             mov esi, dword ptr [esp + 0x14]
// 006a6a97  57                   push edi
// 006a6a98  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006a6a9c  56                   push esi
// 006a6a9d  57                   push edi
// 006a6a9e  e81df7ffff           call 0x6a61c0
// 006a6aa3  56                   push esi
// 006a6aa4  57                   push edi
// 006a6aa5  8ad8                 mov bl, al
// 006a6aa7  e814f7ffff           call 0x6a61c0
// 006a6aac  56                   push esi
// 006a6aad  57                   push edi
// 006a6aae  88442427             mov byte ptr [esp + 0x27], al
// 006a6ab2  e809f7ffff           call 0x6a61c0
// 006a6ab7  56                   push esi
// 006a6ab8  57                   push edi
// 006a6ab9  8844242e             mov byte ptr [esp + 0x2e], al
// 006a6abd  e8fef6ffff           call 0x6a61c0
// 006a6ac2  0fb64c242e           movzx ecx, byte ptr [esp + 0x2e]
// 006a6ac7  0fb654242f           movzx edx, byte ptr [esp + 0x2f]
// 006a6acc  0fb6c0               movzx eax, al
// 006a6acf  c1e008               shl eax, 8
// 006a6ad2  03c1                 add eax, ecx
// 006a6ad4  83c420               add esp, 0x20
// 006a6ad7  c1e008               shl eax, 8
// 006a6ada  03c2                 add eax, edx
// 006a6adc  0fb6cb               movzx ecx, bl
// 006a6adf  5f                   pop edi
// 006a6ae0  c1e008               shl eax, 8
// 006a6ae3  5e                   pop esi
// 006a6ae4  03c1                 add eax, ecx
// 006a6ae6  5b                   pop ebx
// 006a6ae7  59                   pop ecx
// 006a6ae8  c3                   ret 
// copied from an identical function in another client (function ?sub_005523f0@ns_ROCX00000d@1@YAIHH@Z)

namespace ns_ROCX00000d {
namespace ns_ROCX00000d {
extern "C" unsigned char __cdecl sub_00552120(int, int);

unsigned int __cdecl sub_005523f0(int a, int b)
{
    unsigned char b0 = sub_00552120(a, b);
    unsigned char b1 = sub_00552120(a, b);
    unsigned char b2 = sub_00552120(a, b);
    unsigned char b3 = sub_00552120(a, b);

    unsigned int v = b3;
    v = (v << 8) + b2;
    v = (v << 8) + b1;
    v = (v << 8) + b0;
    return v;
}
}
}
