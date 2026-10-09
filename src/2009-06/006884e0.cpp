// roc 2009-06 006884e0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006884e0
//
// 006884e0  51                   push ecx
// 006884e1  53                   push ebx
// 006884e2  56                   push esi
// 006884e3  8b742414             mov esi, dword ptr [esp + 0x14]
// 006884e7  57                   push edi
// 006884e8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006884ec  56                   push esi
// 006884ed  57                   push edi
// 006884ee  e81dfaffff           call 0x687f10
// 006884f3  56                   push esi
// 006884f4  57                   push edi
// 006884f5  8ad8                 mov bl, al
// 006884f7  e814faffff           call 0x687f10
// 006884fc  56                   push esi
// 006884fd  57                   push edi
// 006884fe  88442427             mov byte ptr [esp + 0x27], al
// 00688502  e809faffff           call 0x687f10
// 00688507  56                   push esi
// 00688508  57                   push edi
// 00688509  8844242e             mov byte ptr [esp + 0x2e], al
// 0068850d  e8fef9ffff           call 0x687f10
// 00688512  0fb64c242e           movzx ecx, byte ptr [esp + 0x2e]
// 00688517  0fb654242f           movzx edx, byte ptr [esp + 0x2f]
// 0068851c  0fb6c0               movzx eax, al
// 0068851f  c1e008               shl eax, 8
// 00688522  03c1                 add eax, ecx
// 00688524  83c420               add esp, 0x20
// 00688527  c1e008               shl eax, 8
// 0068852a  03c2                 add eax, edx
// 0068852c  0fb6cb               movzx ecx, bl
// 0068852f  5f                   pop edi
// 00688530  c1e008               shl eax, 8
// 00688533  5e                   pop esi
// 00688534  03c1                 add eax, ecx
// 00688536  5b                   pop ebx
// 00688537  59                   pop ecx
// 00688538  c3                   ret 
// copied from an identical function in another client (function ?sub_005523f0@ns_ROCX00000d@@YAIHH@Z)

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
