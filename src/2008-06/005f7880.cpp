// roc 2008-06 005f7880  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f7880
//
// 005f7880  51                   push ecx
// 005f7881  53                   push ebx
// 005f7882  56                   push esi
// 005f7883  8b742414             mov esi, dword ptr [esp + 0x14]
// 005f7887  57                   push edi
// 005f7888  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005f788c  56                   push esi
// 005f788d  57                   push edi
// 005f788e  e83df9ffff           call 0x5f71d0
// 005f7893  56                   push esi
// 005f7894  57                   push edi
// 005f7895  8ad8                 mov bl, al
// 005f7897  e834f9ffff           call 0x5f71d0
// 005f789c  56                   push esi
// 005f789d  57                   push edi
// 005f789e  88442427             mov byte ptr [esp + 0x27], al
// 005f78a2  e829f9ffff           call 0x5f71d0
// 005f78a7  56                   push esi
// 005f78a8  57                   push edi
// 005f78a9  8844242e             mov byte ptr [esp + 0x2e], al
// 005f78ad  e81ef9ffff           call 0x5f71d0
// 005f78b2  0fb64c242e           movzx ecx, byte ptr [esp + 0x2e]
// 005f78b7  0fb654242f           movzx edx, byte ptr [esp + 0x2f]
// 005f78bc  0fb6c0               movzx eax, al
// 005f78bf  c1e008               shl eax, 8
// 005f78c2  03c1                 add eax, ecx
// 005f78c4  83c420               add esp, 0x20
// 005f78c7  c1e008               shl eax, 8
// 005f78ca  03c2                 add eax, edx
// 005f78cc  0fb6cb               movzx ecx, bl
// 005f78cf  5f                   pop edi
// 005f78d0  c1e008               shl eax, 8
// 005f78d3  5e                   pop esi
// 005f78d4  03c1                 add eax, ecx
// 005f78d6  5b                   pop ebx
// 005f78d7  59                   pop ecx
// 005f78d8  c3                   ret 
// copied from an identical function in another client (function ?sub_005523f0@ns_ROCX00002f@@YAIHH@Z)

namespace ns_ROCX00002f {
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
