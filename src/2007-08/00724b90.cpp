// roc 2007-08 00724b90  unit: CXTIconHandle  size: 526 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00724b90
//
// 00724b90  51                   push ecx
// 00724b91  53                   push ebx
// 00724b92  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00724b96  56                   push esi
// 00724b97  8b742410             mov esi, dword ptr [esp + 0x10]
// 00724b9b  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 00724ba2  57                   push edi
// 00724ba3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00724bab  7e57                 jle 0x724c04
// 00724bad  85db                 test ebx, ebx
// 00724baf  760f                 jbe 0x724bc0
// 00724bb1  8b06                 mov eax, dword ptr [esi]
// 00724bb3  83782c02             cmp dword ptr [eax + 0x2c], 2
// 00724bb7  7507                 jne 0x724bc0
// 00724bb9  8bd6                 mov edx, esi
// 00724bbb  e800f7ffff           call 0x7242c0
// 00724bc0  8d8e180b0000         lea ecx, [esi + 0xb18]
// 00724bc6  51                   push ecx
// 00724bc7  e864faffff           call 0x724630
// 00724bcc  8d96240b0000         lea edx, [esi + 0xb24]
// 00724bd2  52                   push edx
// 00724bd3  e858faffff           call 0x724630
// 00724bd8  83c408               add esp, 8
// 00724bdb  8bc6                 mov eax, esi
// 00724bdd  e84efcffff           call 0x724830
// 00724be2  8b96a8160000         mov edx, dword ptr [esi + 0x16a8]
// 00724be8  8b8eac160000         mov ecx, dword ptr [esi + 0x16ac]
// 00724bee  83c20a               add edx, 0xa
// 00724bf1  83c10a               add ecx, 0xa
// 00724bf4  c1ea03               shr edx, 3
// 00724bf7  c1e903               shr ecx, 3
// 00724bfa  3bca                 cmp ecx, edx
// 00724bfc  8944240c             mov dword ptr [esp + 0xc], eax
// 00724c00  7707                 ja 0x724c09
// 00724c02  eb03                 jmp 0x724c07
// 00724c04  8d4b05               lea ecx, [ebx + 5]
// 00724c07  8bd1                 mov edx, ecx
// 00724c09  8d4304               lea eax, [ebx + 4]
// 00724c0c  3bc2                 cmp eax, edx
// 00724c0e  771d                 ja 0x724c2d
// 00724c10  8b442418             mov eax, dword ptr [esp + 0x18]
// 00724c14  85c0                 test eax, eax
// 00724c16  7415                 je 0x724c2d
// 00724c18  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00724c1c  57                   push edi
// 00724c1d  53                   push ebx
// 00724c1e  50                   push eax
// 00724c1f  56                   push esi
// 00724c20  e8dbfcffff           call 0x724900
// 00724c25  83c410               add esp, 0x10
// 00724c28  e955010000           jmp 0x724d82
// 00724c2d  83be8800000004       cmp dword ptr [esi + 0x88], 4
// 00724c34  0f84be000000         je 0x724cf8
// 00724c3a  3bca                 cmp ecx, edx
// 00724c3c  0f84b6000000         je 0x724cf8
// 00724c42  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 00724c48  83f90d               cmp ecx, 0xd
// 00724c4b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00724c4f  8d5704               lea edx, [edi + 4]
// 00724c52  7e52                 jle 0x724ca6
// 00724c54  8bc2                 mov eax, edx
// 00724c56  d3e0                 shl eax, cl
// 00724c58  8b4e08               mov ecx, dword ptr [esi + 8]
// 00724c5b  660986b8160000       or word ptr [esi + 0x16b8], ax
// 00724c62  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 00724c69  8b4614               mov eax, dword ptr [esi + 0x14]
// 00724c6c  881c01               mov byte ptr [ecx + eax], bl
// 00724c6f  83461401             add dword ptr [esi + 0x14], 1
// 00724c73  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 00724c7a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00724c7d  8b4608               mov eax, dword ptr [esi + 8]
// 00724c80  881c01               mov byte ptr [ecx + eax], bl
// 00724c83  8b9ebc160000         mov ebx, dword ptr [esi + 0x16bc]
// 00724c89  83461401             add dword ptr [esi + 0x14], 1
// 00724c8d  b110                 mov cl, 0x10
// 00724c8f  2acb                 sub cl, bl
// 00724c91  66d3ea               shr dx, cl
// 00724c94  83c3f3               add ebx, -0xd
// 00724c97  899ebc160000         mov dword ptr [esi + 0x16bc], ebx
// 00724c9d  668996b8160000       mov word ptr [esi + 0x16b8], dx
// 00724ca4  eb12                 jmp 0x724cb8
// 00724ca6  d3e2                 shl edx, cl
// 00724ca8  660996b8160000       or word ptr [esi + 0x16b8], dx
// 00724caf  83c103               add ecx, 3
// 00724cb2  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 00724cb8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00724cbc  8b8e280b0000         mov ecx, dword ptr [esi + 0xb28]
// 00724cc2  8b961c0b0000         mov edx, dword ptr [esi + 0xb1c]
// 00724cc8  83c001               add eax, 1
// 00724ccb  50                   push eax
// 00724ccc  83c101               add ecx, 1
// 00724ccf  51                   push ecx
// 00724cd0  83c201               add edx, 1
// 00724cd3  52                   push edx
// 00724cd4  8bc6                 mov eax, esi
// 00724cd6  e875efffff           call 0x723c50
// 00724cdb  8d8688090000         lea eax, [esi + 0x988]
// 00724ce1  50                   push eax
// 00724ce2  8d8e94000000         lea ecx, [esi + 0x94]
// 00724ce8  51                   push ecx
// 00724ce9  8bc6                 mov eax, esi
// 00724ceb  e8c0f1ffff           call 0x723eb0
// 00724cf0  83c414               add esp, 0x14
// 00724cf3  e98a000000           jmp 0x724d82
// 00724cf8  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 00724cfe  83f90d               cmp ecx, 0xd
// 00724d01  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00724d05  8d4702               lea eax, [edi + 2]
// 00724d08  7e52                 jle 0x724d5c
// 00724d0a  8bd0                 mov edx, eax
// 00724d0c  d3e2                 shl edx, cl
// 00724d0e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00724d11  660996b8160000       or word ptr [esi + 0x16b8], dx
// 00724d18  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 00724d1f  8b5614               mov edx, dword ptr [esi + 0x14]
// 00724d22  881c11               mov byte ptr [ecx + edx], bl
// 00724d25  83461401             add dword ptr [esi + 0x14], 1
// 00724d29  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 00724d30  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00724d33  8b5608               mov edx, dword ptr [esi + 8]
// 00724d36  881c11               mov byte ptr [ecx + edx], bl
// 00724d39  8b96bc160000         mov edx, dword ptr [esi + 0x16bc]
// 00724d3f  83461401             add dword ptr [esi + 0x14], 1
// 00724d43  b110                 mov cl, 0x10
// 00724d45  2aca                 sub cl, dl
// 00724d47  66d3e8               shr ax, cl
// 00724d4a  83c2f3               add edx, -0xd
// 00724d4d  8996bc160000         mov dword ptr [esi + 0x16bc], edx
// 00724d53  668986b8160000       mov word ptr [esi + 0x16b8], ax
// 00724d5a  eb12                 jmp 0x724d6e
// 00724d5c  d3e0                 shl eax, cl
// 00724d5e  660986b8160000       or word ptr [esi + 0x16b8], ax
// 00724d65  83c103               add ecx, 3
// 00724d68  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 00724d6e  68484c7e00           push 0x7e4c48
// 00724d73  68c8477e00           push 0x7e47c8
// 00724d78  8bc6                 mov eax, esi
// 00724d7a  e831f1ffff           call 0x723eb0
// 00724d7f  83c408               add esp, 8
// 00724d82  8bd6                 mov edx, esi
// 00724d84  e867e5ffff           call 0x7232f0
// 00724d89  85ff                 test edi, edi
// 00724d8b  5f                   pop edi
// 00724d8c  740c                 je 0x724d9a
// 00724d8e  8bc6                 mov eax, esi
// 00724d90  5e                   pop esi
// 00724d91  5b                   pop ebx
// 00724d92  83c404               add esp, 4
// 00724d95  e996f6ffff           jmp 0x724430
// 00724d9a  5e                   pop esi
// 00724d9b  5b                   pop ebx
// 00724d9c  59                   pop ecx
// 00724d9d  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_flush_block)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
