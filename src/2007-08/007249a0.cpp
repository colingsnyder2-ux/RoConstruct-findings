// from server: 100% by auto
// roc 2007-08 007249a0  unit: CXTIconHandle  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007249a0
//
// 007249a0  8b442404             mov eax, dword ptr [esp + 4]
// 007249a4  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 007249aa  ba02000000           mov edx, 2
// 007249af  d3e2                 shl edx, cl
// 007249b1  53                   push ebx
// 007249b2  56                   push esi
// 007249b3  57                   push edi
// 007249b4  660990b8160000       or word ptr [eax + 0x16b8], dx
// 007249bb  83f90d               cmp ecx, 0xd
// 007249be  be01000000           mov esi, 1
// 007249c3  7e4a                 jle 0x724a0f
// 007249c5  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 007249cc  8b5014               mov edx, dword ptr [eax + 0x14]
// 007249cf  8b4808               mov ecx, dword ptr [eax + 8]
// 007249d2  881c11               mov byte ptr [ecx + edx], bl
// 007249d5  017014               add dword ptr [eax + 0x14], esi
// 007249d8  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 007249df  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007249e2  8b5008               mov edx, dword ptr [eax + 8]
// 007249e5  881c11               mov byte ptr [ecx + edx], bl
// 007249e8  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 007249ee  017014               add dword ptr [eax + 0x14], esi
// 007249f1  b110                 mov cl, 0x10
// 007249f3  2aca                 sub cl, dl
// 007249f5  bf02000000           mov edi, 2
// 007249fa  66d3ef               shr di, cl
// 007249fd  83c2f3               add edx, -0xd
// 00724a00  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00724a06  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 00724a0d  eb09                 jmp 0x724a18
// 00724a0f  83c103               add ecx, 3
// 00724a12  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724a18  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00724a1e  33d2                 xor edx, edx
// 00724a20  d3e2                 shl edx, cl
// 00724a22  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00724a29  83f909               cmp ecx, 9
// 00724a2c  7e47                 jle 0x724a75
// 00724a2e  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724a35  8b5014               mov edx, dword ptr [eax + 0x14]
// 00724a38  8b4808               mov ecx, dword ptr [eax + 8]
// 00724a3b  881c11               mov byte ptr [ecx + edx], bl
// 00724a3e  017014               add dword ptr [eax + 0x14], esi
// 00724a41  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724a48  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00724a4b  8b5008               mov edx, dword ptr [eax + 8]
// 00724a4e  881c11               mov byte ptr [ecx + edx], bl
// 00724a51  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00724a57  017014               add dword ptr [eax + 0x14], esi
// 00724a5a  b110                 mov cl, 0x10
// 00724a5c  2aca                 sub cl, dl
// 00724a5e  33ff                 xor edi, edi
// 00724a60  66d3ef               shr di, cl
// 00724a63  83c2f7               add edx, -9
// 00724a66  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00724a6c  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 00724a73  eb09                 jmp 0x724a7e
// 00724a75  83c107               add ecx, 7
// 00724a78  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724a7e  e82df9ffff           call 0x7243b0
// 00724a83  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00724a89  8b90b4160000         mov edx, dword ptr [eax + 0x16b4]
// 00724a8f  2bd1                 sub edx, ecx
// 00724a91  83c20b               add edx, 0xb
// 00724a94  83fa09               cmp edx, 9
// 00724a97  0f8de2000000         jge 0x724b7f
// 00724a9d  ba02000000           mov edx, 2
// 00724aa2  d3e2                 shl edx, cl
// 00724aa4  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00724aab  83f90d               cmp ecx, 0xd
// 00724aae  7e4a                 jle 0x724afa
// 00724ab0  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724ab7  8b5014               mov edx, dword ptr [eax + 0x14]
// 00724aba  8b4808               mov ecx, dword ptr [eax + 8]
// 00724abd  881c11               mov byte ptr [ecx + edx], bl
// 00724ac0  017014               add dword ptr [eax + 0x14], esi
// 00724ac3  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724aca  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00724acd  8b5008               mov edx, dword ptr [eax + 8]
// 00724ad0  881c11               mov byte ptr [ecx + edx], bl
// 00724ad3  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00724ad9  017014               add dword ptr [eax + 0x14], esi
// 00724adc  b110                 mov cl, 0x10
// 00724ade  2aca                 sub cl, dl
// 00724ae0  bf02000000           mov edi, 2
// 00724ae5  66d3ef               shr di, cl
// 00724ae8  83c2f3               add edx, -0xd
// 00724aeb  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00724af1  6689b8b8160000       mov word ptr [eax + 0x16b8], di
// 00724af8  eb09                 jmp 0x724b03
// 00724afa  83c103               add ecx, 3
// 00724afd  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724b03  8b88bc160000         mov ecx, dword ptr [eax + 0x16bc]
// 00724b09  33d2                 xor edx, edx
// 00724b0b  d3e2                 shl edx, cl
// 00724b0d  660990b8160000       or word ptr [eax + 0x16b8], dx
// 00724b14  83f909               cmp ecx, 9
// 00724b17  7e58                 jle 0x724b71
// 00724b19  0fb698b8160000       movzx ebx, byte ptr [eax + 0x16b8]
// 00724b20  8b5014               mov edx, dword ptr [eax + 0x14]
// 00724b23  8b4808               mov ecx, dword ptr [eax + 8]
// 00724b26  881c11               mov byte ptr [ecx + edx], bl
// 00724b29  017014               add dword ptr [eax + 0x14], esi
// 00724b2c  0fb698b9160000       movzx ebx, byte ptr [eax + 0x16b9]
// 00724b33  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00724b36  8b5008               mov edx, dword ptr [eax + 8]
// 00724b39  881c11               mov byte ptr [ecx + edx], bl
// 00724b3c  8b90bc160000         mov edx, dword ptr [eax + 0x16bc]
// 00724b42  017014               add dword ptr [eax + 0x14], esi
// 00724b45  b110                 mov cl, 0x10
// 00724b47  2aca                 sub cl, dl
// 00724b49  33f6                 xor esi, esi
// 00724b4b  66d3ee               shr si, cl
// 00724b4e  83c2f7               add edx, -9
// 00724b51  8990bc160000         mov dword ptr [eax + 0x16bc], edx
// 00724b57  6689b0b8160000       mov word ptr [eax + 0x16b8], si
// 00724b5e  e84df8ffff           call 0x7243b0
// 00724b63  5f                   pop edi
// 00724b64  5e                   pop esi
// 00724b65  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 00724b6f  5b                   pop ebx
// 00724b70  c3                   ret 
// 00724b71  83c107               add ecx, 7
// 00724b74  8988bc160000         mov dword ptr [eax + 0x16bc], ecx
// 00724b7a  e831f8ffff           call 0x7243b0
// 00724b7f  5f                   pop edi
// 00724b80  5e                   pop esi
// 00724b81  c780b416000007000000 mov dword ptr [eax + 0x16b4], 7
// 00724b8b  5b                   pop ebx
// 00724b8c  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_align)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
