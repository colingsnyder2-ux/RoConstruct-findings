// from server: 100% by colin
// roc 2007-08 005523f0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005523f0
//
// 005523f0  51                   push ecx
// 005523f1  53                   push ebx
// 005523f2  56                   push esi
// 005523f3  8b742414             mov esi, dword ptr [esp + 0x14]
// 005523f7  57                   push edi
// 005523f8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005523fc  56                   push esi
// 005523fd  57                   push edi
// 005523fe  e81dfdffff           call 0x552120
// 00552403  56                   push esi
// 00552404  57                   push edi
// 00552405  8ad8                 mov bl, al
// 00552407  e814fdffff           call 0x552120
// 0055240c  56                   push esi
// 0055240d  57                   push edi
// 0055240e  88442427             mov byte ptr [esp + 0x27], al
// 00552412  e809fdffff           call 0x552120
// 00552417  56                   push esi
// 00552418  57                   push edi
// 00552419  8844242e             mov byte ptr [esp + 0x2e], al
// 0055241d  e8fefcffff           call 0x552120
// 00552422  0fb64c242e           movzx ecx, byte ptr [esp + 0x2e]
// 00552427  0fb654242f           movzx edx, byte ptr [esp + 0x2f]
// 0055242c  0fb6c0               movzx eax, al
// 0055242f  c1e008               shl eax, 8
// 00552432  03c1                 add eax, ecx
// 00552434  83c420               add esp, 0x20
// 00552437  c1e008               shl eax, 8
// 0055243a  03c2                 add eax, edx
// 0055243c  0fb6cb               movzx ecx, bl
// 0055243f  5f                   pop edi
// 00552440  c1e008               shl eax, 8
// 00552443  5e                   pop esi
// 00552444  03c1                 add eax, ecx
// 00552446  5b                   pop ebx
// 00552447  59                   pop ecx
// 00552448  c3                   ret 

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
