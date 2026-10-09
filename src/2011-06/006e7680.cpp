// roc 2011-06 006e7680  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e7680
//
// 006e7680  51                   push ecx
// 006e7681  53                   push ebx
// 006e7682  56                   push esi
// 006e7683  8b742414             mov esi, dword ptr [esp + 0x14]
// 006e7687  57                   push edi
// 006e7688  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006e768c  56                   push esi
// 006e768d  57                   push edi
// 006e768e  e83df7ffff           call 0x6e6dd0
// 006e7693  56                   push esi
// 006e7694  57                   push edi
// 006e7695  8ad8                 mov bl, al
// 006e7697  e834f7ffff           call 0x6e6dd0
// 006e769c  56                   push esi
// 006e769d  57                   push edi
// 006e769e  88442427             mov byte ptr [esp + 0x27], al
// 006e76a2  e829f7ffff           call 0x6e6dd0
// 006e76a7  56                   push esi
// 006e76a8  57                   push edi
// 006e76a9  8844242e             mov byte ptr [esp + 0x2e], al
// 006e76ad  e81ef7ffff           call 0x6e6dd0
// 006e76b2  0fb64c242e           movzx ecx, byte ptr [esp + 0x2e]
// 006e76b7  0fb654242f           movzx edx, byte ptr [esp + 0x2f]
// 006e76bc  0fb6c0               movzx eax, al
// 006e76bf  c1e008               shl eax, 8
// 006e76c2  03c1                 add eax, ecx
// 006e76c4  83c420               add esp, 0x20
// 006e76c7  c1e008               shl eax, 8
// 006e76ca  03c2                 add eax, edx
// 006e76cc  0fb6cb               movzx ecx, bl
// 006e76cf  5f                   pop edi
// 006e76d0  c1e008               shl eax, 8
// 006e76d3  5e                   pop esi
// 006e76d4  03c1                 add eax, ecx
// 006e76d6  5b                   pop ebx
// 006e76d7  59                   pop ecx
// 006e76d8  c3                   ret 
// copied from an identical function in another client (function ?sub_005523f0@ns_ROCX000011@@YAIHH@Z)

namespace ns_ROCX000011 {
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
