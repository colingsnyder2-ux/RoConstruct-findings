// from server: 100% by auto
// roc 2009-06 005a1df0  unit: seg_005a0000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a1df0
//
// 005a1df0  51                   push ecx
// 005a1df1  53                   push ebx
// 005a1df2  55                   push ebp
// 005a1df3  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 005a1df6  8bd8                 mov ebx, eax
// 005a1df8  57                   push edi
// 005a1df9  85db                 test ebx, ebx
// 005a1dfb  7519                 jne 0x5a1e16
// 005a1dfd  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a1e00  8b08                 mov ecx, dword ptr [eax]
// 005a1e02  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 005a1e09  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a1e0c  8b10                 mov edx, dword ptr [eax]
// 005a1e0e  50                   push eax
// 005a1e0f  8b02                 mov eax, dword ptr [edx]
// 005a1e11  ffd0                 call eax
// 005a1e13  83c404               add esp, 4
// 005a1e16  8bcb                 mov ecx, ebx
// 005a1e18  bf01000000           mov edi, 1
// 005a1e1d  d3e7                 shl edi, cl
// 005a1e1f  03eb                 add ebp, ebx
// 005a1e21  b918000000           mov ecx, 0x18
// 005a1e26  2bcd                 sub ecx, ebp
// 005a1e28  4f                   dec edi
// 005a1e29  237c2414             and edi, dword ptr [esp + 0x14]
// 005a1e2d  896c240c             mov dword ptr [esp + 0xc], ebp
// 005a1e31  d3e7                 shl edi, cl
// 005a1e33  0b7e08               or edi, dword ptr [esi + 8]
// 005a1e36  83fd08               cmp ebp, 8
// 005a1e39  7c7f                 jl 0x5a1eba
// 005a1e3b  eb03                 jmp 0x5a1e40
// 005a1e3d  8d4900               lea ecx, [ecx]
// 005a1e40  8b0e                 mov ecx, dword ptr [esi]
// 005a1e42  8bdf                 mov ebx, edi
// 005a1e44  c1fb10               sar ebx, 0x10
// 005a1e47  81e3ff000000         and ebx, 0xff
// 005a1e4d  8819                 mov byte ptr [ecx], bl
// 005a1e4f  ff06                 inc dword ptr [esi]
// 005a1e51  834604ff             add dword ptr [esi + 4], -1
// 005a1e55  7522                 jne 0x5a1e79
// 005a1e57  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a1e5a  8b6818               mov ebp, dword ptr [eax + 0x18]
// 005a1e5d  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005a1e60  50                   push eax
// 005a1e61  ffd2                 call edx
// 005a1e63  83c404               add esp, 4
// 005a1e66  84c0                 test al, al
// 005a1e68  745d                 je 0x5a1ec7
// 005a1e6a  8b4500               mov eax, dword ptr [ebp]
// 005a1e6d  8906                 mov dword ptr [esi], eax
// 005a1e6f  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005a1e72  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005a1e76  894e04               mov dword ptr [esi + 4], ecx
// 005a1e79  81fbff000000         cmp ebx, 0xff
// 005a1e7f  752a                 jne 0x5a1eab
// 005a1e81  8b16                 mov edx, dword ptr [esi]
// 005a1e83  c60200               mov byte ptr [edx], 0
// 005a1e86  ff06                 inc dword ptr [esi]
// 005a1e88  834604ff             add dword ptr [esi + 4], -1
// 005a1e8c  751d                 jne 0x5a1eab
// 005a1e8e  8b4620               mov eax, dword ptr [esi + 0x20]
// 005a1e91  8b5818               mov ebx, dword ptr [eax + 0x18]
// 005a1e94  50                   push eax
// 005a1e95  8b430c               mov eax, dword ptr [ebx + 0xc]
// 005a1e98  ffd0                 call eax
// 005a1e9a  83c404               add esp, 4
// 005a1e9d  84c0                 test al, al
// 005a1e9f  7426                 je 0x5a1ec7
// 005a1ea1  8b0b                 mov ecx, dword ptr [ebx]
// 005a1ea3  890e                 mov dword ptr [esi], ecx
// 005a1ea5  8b5304               mov edx, dword ptr [ebx + 4]
// 005a1ea8  895604               mov dword ptr [esi + 4], edx
// 005a1eab  83ed08               sub ebp, 8
// 005a1eae  c1e708               shl edi, 8
// 005a1eb1  83fd08               cmp ebp, 8
// 005a1eb4  896c240c             mov dword ptr [esp + 0xc], ebp
// 005a1eb8  7d86                 jge 0x5a1e40
// 005a1eba  897e08               mov dword ptr [esi + 8], edi
// 005a1ebd  5f                   pop edi
// 005a1ebe  896e0c               mov dword ptr [esi + 0xc], ebp
// 005a1ec1  5d                   pop ebp
// 005a1ec2  b001                 mov al, 1
// 005a1ec4  5b                   pop ebx
// 005a1ec5  59                   pop ecx
// 005a1ec6  c3                   ret 
// 005a1ec7  5f                   pop edi
// 005a1ec8  5d                   pop ebp
// 005a1ec9  32c0                 xor al, al
// 005a1ecb  5b                   pop ebx
// 005a1ecc  59                   pop ecx
// 005a1ecd  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
