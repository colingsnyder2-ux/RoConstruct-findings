// roc 2009-12 0061bd20  unit: seg_00610000  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061bd20
//
// 0061bd20  8b442404             mov eax, dword ptr [esp + 4]
// 0061bd24  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061bd2a  ba02000000           mov edx, 2
// 0061bd2f  d3e2                 shl edx, cl
// 0061bd31  53                   push ebx
// 0061bd32  56                   push esi
// 0061bd33  57                   push edi
// 0061bd34  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061bd3b  83f90d               cmp ecx, 0xd
// 0061bd3e  be01000000           mov esi, 1
// 0061bd43  7e4a                 jle 0x61bd8f
// 0061bd45  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061bd4c  8b5014               mov edx, dword ptr [eax + 0x14]
// 0061bd4f  8b4808               mov ecx, dword ptr [eax + 8]
// 0061bd52  881c11               mov byte ptr [ecx + edx], bl
// 0061bd55  017014               add dword ptr [eax + 0x14], esi
// 0061bd58  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061bd5f  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061bd62  8b5008               mov edx, dword ptr [eax + 8]
// 0061bd65  881c11               mov byte ptr [ecx + edx], bl
// 0061bd68  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0061bd6e  017014               add dword ptr [eax + 0x14], esi
// 0061bd71  b110                 mov cl, 0x10
// 0061bd73  2aca                 sub cl, dl
// 0061bd75  bf02000000           mov edi, 2
// 0061bd7a  66d3ef               shr di, cl
// 0061bd7d  83c2f3               add edx, -0xd
// 0061bd80  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0061bd86  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 0061bd8d  eb09                 jmp 0x61bd98
// 0061bd8f  83c103               add ecx, 3
// 0061bd92  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061bd98  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061bd9e  33d2                 xor edx, edx
// 0061bda0  d3e2                 shl edx, cl
// 0061bda2  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061bda9  83f909               cmp ecx, 9
// 0061bdac  7e47                 jle 0x61bdf5
// 0061bdae  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061bdb5  8b5014               mov edx, dword ptr [eax + 0x14]
// 0061bdb8  8b4808               mov ecx, dword ptr [eax + 8]
// 0061bdbb  881c11               mov byte ptr [ecx + edx], bl
// 0061bdbe  017014               add dword ptr [eax + 0x14], esi
// 0061bdc1  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061bdc8  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061bdcb  8b5008               mov edx, dword ptr [eax + 8]
// 0061bdce  881c11               mov byte ptr [ecx + edx], bl
// 0061bdd1  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0061bdd7  017014               add dword ptr [eax + 0x14], esi
// 0061bdda  b110                 mov cl, 0x10
// 0061bddc  2aca                 sub cl, dl
// 0061bdde  33ff                 xor edi, edi
// 0061bde0  66d3ef               shr di, cl
// 0061bde3  83c2f7               add edx, -9
// 0061bde6  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0061bdec  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 0061bdf3  eb09                 jmp 0x61bdfe
// 0061bdf5  83c107               add ecx, 7
// 0061bdf8  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061bdfe  e84df9ffff           call 0x61b750
// 0061be03  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061be09  8b90b4160000         mov edx, dword ptr [eax + 0x16b4]
// 0061be0f  2bd1                 sub edx, ecx
// 0061be11  83c20b               add edx, 0xb
// 0061be14  83fa09               cmp edx, 9
// 0061be17  0f8de2000000         jge 0x61beff
// 0061be1d  ba02000000           mov edx, 2
// 0061be22  d3e2                 shl edx, cl
// 0061be24  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061be2b  83f90d               cmp ecx, 0xd
// 0061be2e  7e4a                 jle 0x61be7a
// 0061be30  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061be37  8b5014               mov edx, dword ptr [eax + 0x14]
// 0061be3a  8b4808               mov ecx, dword ptr [eax + 8]
// 0061be3d  881c11               mov byte ptr [ecx + edx], bl
// 0061be40  017014               add dword ptr [eax + 0x14], esi
// 0061be43  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061be4a  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061be4d  8b5008               mov edx, dword ptr [eax + 8]
// 0061be50  881c11               mov byte ptr [ecx + edx], bl
// 0061be53  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0061be59  017014               add dword ptr [eax + 0x14], esi
// 0061be5c  b110                 mov cl, 0x10
// 0061be5e  2aca                 sub cl, dl
// 0061be60  bf02000000           mov edi, 2
// 0061be65  66d3ef               shr di, cl
// 0061be68  83c2f3               add edx, -0xd
// 0061be6b  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0061be71  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 0061be78  eb09                 jmp 0x61be83
// 0061be7a  83c103               add ecx, 3
// 0061be7d  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061be83  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0061be89  33d2                 xor edx, edx
// 0061be8b  d3e2                 shl edx, cl
// 0061be8d  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0061be94  83f909               cmp ecx, 9
// 0061be97  7e58                 jle 0x61bef1
// 0061be99  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0061bea0  8b5014               mov edx, dword ptr [eax + 0x14]
// 0061bea3  8b4808               mov ecx, dword ptr [eax + 8]
// 0061bea6  881c11               mov byte ptr [ecx + edx], bl
// 0061bea9  017014               add dword ptr [eax + 0x14], esi
// 0061beac  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0061beb3  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061beb6  8b5008               mov edx, dword ptr [eax + 8]
// 0061beb9  881c11               mov byte ptr [ecx + edx], bl
// 0061bebc  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0061bec2  017014               add dword ptr [eax + 0x14], esi
// 0061bec5  b110                 mov cl, 0x10
// 0061bec7  2aca                 sub cl, dl
// 0061bec9  33f6                 xor esi, esi
// 0061becb  66d3ee               shr si, cl
// 0061bece  83c2f7               add edx, -9
// 0061bed1  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0061bed7  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0061bede  e86df8ffff           call 0x61b750
// 0061bee3  5f                   pop edi
// 0061bee4  5e                   pop esi
// 0061bee5  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 0061beef  5b                   pop ebx
// 0061bef0  c3                   ret 
// 0061bef1  83c107               add ecx, 7
// 0061bef4  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0061befa  e851f8ffff           call 0x61b750
// 0061beff  5f                   pop edi
// 0061bf00  5e                   pop esi
// 0061bf01  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 0061bf0b  5b                   pop ebx
// 0061bf0c  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_align)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
