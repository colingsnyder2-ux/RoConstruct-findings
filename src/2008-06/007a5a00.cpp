// roc 2008-06 007a5a00  unit: CXTIconHandle  size: 516 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a5a00
//
// 007a5a00  51                   push ecx
// 007a5a01  53                   push ebx
// 007a5a02  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007a5a06  56                   push esi
// 007a5a07  8b742410             mov esi, dword ptr [esp + 0x10]
// 007a5a0b  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 007a5a12  57                   push edi
// 007a5a13  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007a5a1b  7e57                 jle 0x7a5a74
// 007a5a1d  85db                 test ebx, ebx
// 007a5a1f  760f                 jbe 0x7a5a30
// 007a5a21  8b06                 mov eax, dword ptr [esi]
// 007a5a23  83782c02             cmp dword ptr [eax + 0x2c], 2
// 007a5a27  7507                 jne 0x7a5a30
// 007a5a29  8bd6                 mov edx, esi
// 007a5a2b  e820f7ffff           call 0x7a5150
// 007a5a30  8d8e180b0000         lea ecx, [esi + 0xb18]
// 007a5a36  51                   push ecx
// 007a5a37  e864faffff           call 0x7a54a0
// 007a5a3c  8d96240b0000         lea edx, [esi + 0xb24]
// 007a5a42  52                   push edx
// 007a5a43  e858faffff           call 0x7a54a0
// 007a5a48  83c408               add esp, 8
// 007a5a4b  8bc6                 mov eax, esi
// 007a5a4d  e84efcffff           call 0x7a56a0
// 007a5a52  8b96a8160000         mov edx, dword ptr [esi + 0x16a8]
// 007a5a58  8b8eac160000         mov ecx, dword ptr [esi + 0x16ac]
// 007a5a5e  83c20a               add edx, 0xa
// 007a5a61  83c10a               add ecx, 0xa
// 007a5a64  c1ea03               shr edx, 3
// 007a5a67  c1e903               shr ecx, 3
// 007a5a6a  8944240c             mov dword ptr [esp + 0xc], eax
// 007a5a6e  3bca                 cmp ecx, edx
// 007a5a70  7707                 ja 0x7a5a79
// 007a5a72  eb03                 jmp 0x7a5a77
// 007a5a74  8d4b05               lea ecx, [ebx + 5]
// 007a5a77  8bd1                 mov edx, ecx
// 007a5a79  8d4304               lea eax, [ebx + 4]
// 007a5a7c  3bc2                 cmp eax, edx
// 007a5a7e  771d                 ja 0x7a5a9d
// 007a5a80  8b442418             mov eax, dword ptr [esp + 0x18]
// 007a5a84  85c0                 test eax, eax
// 007a5a86  7415                 je 0x7a5a9d
// 007a5a88  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007a5a8c  57                   push edi
// 007a5a8d  53                   push ebx
// 007a5a8e  50                   push eax
// 007a5a8f  56                   push esi
// 007a5a90  e8dbfcffff           call 0x7a5770
// 007a5a95  83c410               add esp, 0x10
// 007a5a98  e94b010000           jmp 0x7a5be8
// 007a5a9d  83be8800000004       cmp dword ptr [esi + 0x88], 4
// 007a5aa4  0f84b6000000         je 0x7a5b60
// 007a5aaa  3bca                 cmp ecx, edx
// 007a5aac  0f84ae000000         je 0x7a5b60
// 007a5ab2  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 007a5ab8  83f90d               cmp ecx, 0xd
// 007a5abb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007a5abf  8d5704               lea edx, [edi + 4]
// 007a5ac2  7e50                 jle 0x7a5b14
// 007a5ac4  8bc2                 mov eax, edx
// 007a5ac6  d3e0                 shl eax, cl
// 007a5ac8  8b4e08               mov ecx, dword ptr [esi + 8]
// 007a5acb  660986b8160000       or word ptr [esi + 0x16b8], ax
// 007a5ad2  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 007a5ad9  8b4614               mov eax, dword ptr [esi + 0x14]
// 007a5adc  881c01               mov byte ptr [ecx + eax], bl
// 007a5adf  ff4614               inc dword ptr [esi + 0x14]
// 007a5ae2  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 007a5ae9  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 007a5aec  8b4608               mov eax, dword ptr [esi + 8]
// 007a5aef  881c01               mov byte ptr [ecx + eax], bl
// 007a5af2  8b9ebc160000         mov ebx, dword ptr [esi + 0x16bc]
// 007a5af8  ff4614               inc dword ptr [esi + 0x14]
// 007a5afb  b110                 mov cl, 0x10
// 007a5afd  2acb                 sub cl, bl
// 007a5aff  66d3ea               shr dx, cl
// 007a5b02  83c3f3               add ebx, -0xd
// 007a5b05  899ebc160000         mov dword ptr [esi + 0x16bc], ebx
// 007a5b0b  668996b8160000       mov word ptr [esi + 0x16b8], dx
// 007a5b12  eb12                 jmp 0x7a5b26
// 007a5b14  d3e2                 shl edx, cl
// 007a5b16  660996b8160000       or word ptr [esi + 0x16b8], dx
// 007a5b1d  83c103               add ecx, 3
// 007a5b20  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 007a5b26  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007a5b2a  8b8e280b0000         mov ecx, dword ptr [esi + 0xb28]
// 007a5b30  8b961c0b0000         mov edx, dword ptr [esi + 0xb1c]
// 007a5b36  40                   inc eax
// 007a5b37  50                   push eax
// 007a5b38  41                   inc ecx
// 007a5b39  51                   push ecx
// 007a5b3a  42                   inc edx
// 007a5b3b  52                   push edx
// 007a5b3c  8bc6                 mov eax, esi
// 007a5b3e  e8adefffff           call 0x7a4af0
// 007a5b43  8d8688090000         lea eax, [esi + 0x988]
// 007a5b49  50                   push eax
// 007a5b4a  8d8e94000000         lea ecx, [esi + 0x94]
// 007a5b50  51                   push ecx
// 007a5b51  8bc6                 mov eax, esi
// 007a5b53  e8f8f1ffff           call 0x7a4d50
// 007a5b58  83c414               add esp, 0x14
// 007a5b5b  e988000000           jmp 0x7a5be8
// 007a5b60  8b8ebc160000         mov ecx, dword ptr [esi + 0x16bc]
// 007a5b66  83f90d               cmp ecx, 0xd
// 007a5b69  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007a5b6d  8d4702               lea eax, [edi + 2]
// 007a5b70  7e50                 jle 0x7a5bc2
// 007a5b72  8bd0                 mov edx, eax
// 007a5b74  d3e2                 shl edx, cl
// 007a5b76  8b4e08               mov ecx, dword ptr [esi + 8]
// 007a5b79  660996b8160000       or word ptr [esi + 0x16b8], dx
// 007a5b80  0fb69eb8160000       movzx ebx, byte ptr [esi + 0x16b8]
// 007a5b87  8b5614               mov edx, dword ptr [esi + 0x14]
// 007a5b8a  881c11               mov byte ptr [ecx + edx], bl
// 007a5b8d  ff4614               inc dword ptr [esi + 0x14]
// 007a5b90  0fb69eb9160000       movzx ebx, byte ptr [esi + 0x16b9]
// 007a5b97  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 007a5b9a  8b5608               mov edx, dword ptr [esi + 8]
// 007a5b9d  881c11               mov byte ptr [ecx + edx], bl
// 007a5ba0  8b96bc160000         mov edx, dword ptr [esi + 0x16bc]
// 007a5ba6  ff4614               inc dword ptr [esi + 0x14]
// 007a5ba9  b110                 mov cl, 0x10
// 007a5bab  2aca                 sub cl, dl
// 007a5bad  66d3e8               shr ax, cl
// 007a5bb0  83c2f3               add edx, -0xd
// 007a5bb3  8996bc160000         mov dword ptr [esi + 0x16bc], edx
// 007a5bb9  668986b8160000       mov word ptr [esi + 0x16b8], ax
// 007a5bc0  eb12                 jmp 0x7a5bd4
// 007a5bc2  d3e0                 shl eax, cl
// 007a5bc4  660986b8160000       or word ptr [esi + 0x16b8], ax
// 007a5bcb  83c103               add ecx, 3
// 007a5bce  898ebc160000         mov dword ptr [esi + 0x16bc], ecx
// 007a5bd4  68d01a8700           push 0x871ad0
// 007a5bd9  6850168700           push 0x871650
// 007a5bde  8bc6                 mov eax, esi
// 007a5be0  e86bf1ffff           call 0x7a4d50
// 007a5be5  83c408               add esp, 8
// 007a5be8  8bd6                 mov edx, esi
// 007a5bea  e8a1e5ffff           call 0x7a4190
// 007a5bef  85ff                 test edi, edi
// 007a5bf1  5f                   pop edi
// 007a5bf2  740c                 je 0x7a5c00
// 007a5bf4  8bc6                 mov eax, esi
// 007a5bf6  5e                   pop esi
// 007a5bf7  5b                   pop ebx
// 007a5bf8  83c404               add esp, 4
// 007a5bfb  e9c0f6ffff           jmp 0x7a52c0
// 007a5c00  5e                   pop esi
// 007a5c01  5b                   pop ebx
// 007a5c02  59                   pop ecx
// 007a5c03  c3                   ret 
// library zlib-1.2.3/trees.c (function __tr_flush_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
