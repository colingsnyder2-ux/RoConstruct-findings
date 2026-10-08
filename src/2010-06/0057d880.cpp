// from server: 100% by auto
// roc 2010-06 0057d880  unit: seg_00570000  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057d880
//
// 0057d880  8b442404             mov eax, dword ptr [esp + 4]
// 0057d884  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057d88a  ba02000000           mov edx, 2
// 0057d88f  d3e2                 shl edx, cl
// 0057d891  53                   push ebx
// 0057d892  56                   push esi
// 0057d893  57                   push edi
// 0057d894  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057d89b  83f90d               cmp ecx, 0xd
// 0057d89e  be01000000           mov esi, 1
// 0057d8a3  7e4a                 jle 0x57d8ef
// 0057d8a5  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057d8ac  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057d8af  8b4808               mov ecx, dword ptr [eax + 8]
// 0057d8b2  881c11               mov byte ptr [ecx + edx], bl
// 0057d8b5  017014               add dword ptr [eax + 0x14], esi
// 0057d8b8  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057d8bf  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057d8c2  8b5008               mov edx, dword ptr [eax + 8]
// 0057d8c5  881c11               mov byte ptr [ecx + edx], bl
// 0057d8c8  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0057d8ce  017014               add dword ptr [eax + 0x14], esi
// 0057d8d1  b110                 mov cl, 0x10
// 0057d8d3  2aca                 sub cl, dl
// 0057d8d5  bf02000000           mov edi, 2
// 0057d8da  66d3ef               shr di, cl
// 0057d8dd  83c2f3               add edx, -0xd
// 0057d8e0  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0057d8e6  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 0057d8ed  eb09                 jmp 0x57d8f8
// 0057d8ef  83c103               add ecx, 3
// 0057d8f2  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057d8f8  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057d8fe  33d2                 xor edx, edx
// 0057d900  d3e2                 shl edx, cl
// 0057d902  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057d909  83f909               cmp ecx, 9
// 0057d90c  7e47                 jle 0x57d955
// 0057d90e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057d915  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057d918  8b4808               mov ecx, dword ptr [eax + 8]
// 0057d91b  881c11               mov byte ptr [ecx + edx], bl
// 0057d91e  017014               add dword ptr [eax + 0x14], esi
// 0057d921  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057d928  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057d92b  8b5008               mov edx, dword ptr [eax + 8]
// 0057d92e  881c11               mov byte ptr [ecx + edx], bl
// 0057d931  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0057d937  017014               add dword ptr [eax + 0x14], esi
// 0057d93a  b110                 mov cl, 0x10
// 0057d93c  2aca                 sub cl, dl
// 0057d93e  33ff                 xor edi, edi
// 0057d940  66d3ef               shr di, cl
// 0057d943  83c2f7               add edx, -9
// 0057d946  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0057d94c  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 0057d953  eb09                 jmp 0x57d95e
// 0057d955  83c107               add ecx, 7
// 0057d958  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057d95e  e84df9ffff           call 0x57d2b0
// 0057d963  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057d969  8b90b4160000         mov edx, dword ptr [eax + 0x16b4]
// 0057d96f  2bd1                 sub edx, ecx
// 0057d971  83c20b               add edx, 0xb
// 0057d974  83fa09               cmp edx, 9
// 0057d977  0f8de2000000         jge 0x57da5f
// 0057d97d  ba02000000           mov edx, 2
// 0057d982  d3e2                 shl edx, cl
// 0057d984  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057d98b  83f90d               cmp ecx, 0xd
// 0057d98e  7e4a                 jle 0x57d9da
// 0057d990  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057d997  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057d99a  8b4808               mov ecx, dword ptr [eax + 8]
// 0057d99d  881c11               mov byte ptr [ecx + edx], bl
// 0057d9a0  017014               add dword ptr [eax + 0x14], esi
// 0057d9a3  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057d9aa  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057d9ad  8b5008               mov edx, dword ptr [eax + 8]
// 0057d9b0  881c11               mov byte ptr [ecx + edx], bl
// 0057d9b3  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0057d9b9  017014               add dword ptr [eax + 0x14], esi
// 0057d9bc  b110                 mov cl, 0x10
// 0057d9be  2aca                 sub cl, dl
// 0057d9c0  bf02000000           mov edi, 2
// 0057d9c5  66d3ef               shr di, cl
// 0057d9c8  83c2f3               add edx, -0xd
// 0057d9cb  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0057d9d1  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 0057d9d8  eb09                 jmp 0x57d9e3
// 0057d9da  83c103               add ecx, 3
// 0057d9dd  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057d9e3  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 0057d9e9  33d2                 xor edx, edx
// 0057d9eb  d3e2                 shl edx, cl
// 0057d9ed  660990b8160000       or word ptr [eax + 0x16b8], dx
// 0057d9f4  83f909               cmp ecx, 9
// 0057d9f7  7e58                 jle 0x57da51
// 0057d9f9  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 0057da00  8b5014               mov edx, dword ptr [eax + 0x14]
// 0057da03  8b4808               mov ecx, dword ptr [eax + 8]
// 0057da06  881c11               mov byte ptr [ecx + edx], bl
// 0057da09  017014               add dword ptr [eax + 0x14], esi
// 0057da0c  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 0057da13  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057da16  8b5008               mov edx, dword ptr [eax + 8]
// 0057da19  881c11               mov byte ptr [ecx + edx], bl
// 0057da1c  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 0057da22  017014               add dword ptr [eax + 0x14], esi
// 0057da25  b110                 mov cl, 0x10
// 0057da27  2aca                 sub cl, dl
// 0057da29  33f6                 xor esi, esi
// 0057da2b  66d3ee               shr si, cl
// 0057da2e  83c2f7               add edx, -9
// 0057da31  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 0057da37  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 0057da3e  e86df8ffff           call 0x57d2b0
// 0057da43  5f                   pop edi
// 0057da44  5e                   pop esi
// 0057da45  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 0057da4f  5b                   pop ebx
// 0057da50  c3                   ret 
// 0057da51  83c107               add ecx, 7
// 0057da54  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 0057da5a  e851f8ffff           call 0x57d2b0
// 0057da5f  5f                   pop edi
// 0057da60  5e                   pop esi
// 0057da61  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 0057da6b  5b                   pop ebx
// 0057da6c  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_align)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
