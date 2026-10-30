// from server: 100% by auto
// roc 2008-06 0051a340  unit: G3D::_internal::DialogTemplate  size: 758 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051a340
//
// 0051a340  81ec28010000         sub esp, 0x128
// 0051a346  53                   push ebx
// 0051a347  55                   push ebp
// 0051a348  8bac2434010000       mov ebp, dword ptr [esp + 0x134]
// 0051a34f  56                   push esi
// 0051a350  57                   push edi
// 0051a351  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 0051a354  8b7704               mov esi, dword ptr [edi + 4]
// 0051a357  8b1f                 mov ebx, dword ptr [edi]
// 0051a359  897c2430             mov dword ptr [esp + 0x30], edi
// 0051a35d  85f6                 test esi, esi
// 0051a35f  7521                 jne 0x51a382
// 0051a361  8b470c               mov eax, dword ptr [edi + 0xc]
// 0051a364  55                   push ebp
// 0051a365  ffd0                 call eax
// 0051a367  83c404               add esp, 4
// 0051a36a  84c0                 test al, al
// 0051a36c  750d                 jne 0x51a37b
// 0051a36e  5f                   pop edi
// 0051a36f  5e                   pop esi
// 0051a370  5d                   pop ebp
// 0051a371  32c0                 xor al, al
// 0051a373  5b                   pop ebx
// 0051a374  81c428010000         add esp, 0x128
// 0051a37a  c3                   ret 
// 0051a37b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0051a37e  8b1f                 mov ebx, dword ptr [edi]
// 0051a380  8bf1                 mov esi, ecx
// 0051a382  0fb603               movzx eax, byte ptr [ebx]
// 0051a385  4e                   dec esi
// 0051a386  c1e008               shl eax, 8
// 0051a389  43                   inc ebx
// 0051a38a  89442414             mov dword ptr [esp + 0x14], eax
// 0051a38e  85f6                 test esi, esi
// 0051a390  7518                 jne 0x51a3aa
// 0051a392  8b570c               mov edx, dword ptr [edi + 0xc]
// 0051a395  55                   push ebp
// 0051a396  ffd2                 call edx
// 0051a398  83c404               add esp, 4
// 0051a39b  84c0                 test al, al
// 0051a39d  74cf                 je 0x51a36e
// 0051a39f  8b4704               mov eax, dword ptr [edi + 4]
// 0051a3a2  8b1f                 mov ebx, dword ptr [edi]
// 0051a3a4  8bf0                 mov esi, eax
// 0051a3a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051a3aa  0fb60b               movzx ecx, byte ptr [ebx]
// 0051a3ad  03c1                 add eax, ecx
// 0051a3af  83e802               sub eax, 2
// 0051a3b2  4e                   dec esi
// 0051a3b3  43                   inc ebx
// 0051a3b4  83f810               cmp eax, 0x10
// 0051a3b7  89442414             mov dword ptr [esp + 0x14], eax
// 0051a3bb  0f8e4a020000         jle 0x51a60b
// 0051a3c1  85f6                 test esi, esi
// 0051a3c3  7518                 jne 0x51a3dd
// 0051a3c5  8b570c               mov edx, dword ptr [edi + 0xc]
// 0051a3c8  55                   push ebp
// 0051a3c9  ffd2                 call edx
// 0051a3cb  83c404               add esp, 4
// 0051a3ce  84c0                 test al, al
// 0051a3d0  749c                 je 0x51a36e
// 0051a3d2  8b4704               mov eax, dword ptr [edi + 4]
// 0051a3d5  8b1f                 mov ebx, dword ptr [edi]
// 0051a3d7  89442410             mov dword ptr [esp + 0x10], eax
// 0051a3db  8bf0                 mov esi, eax
// 0051a3dd  0fb603               movzx eax, byte ptr [ebx]
// 0051a3e0  8b4d00               mov ecx, dword ptr [ebp]
// 0051a3e3  c7411450000000       mov dword ptr [ecx + 0x14], 0x50
// 0051a3ea  8b5500               mov edx, dword ptr [ebp]
// 0051a3ed  894218               mov dword ptr [edx + 0x18], eax
// 0051a3f0  89442434             mov dword ptr [esp + 0x34], eax
// 0051a3f4  8b4500               mov eax, dword ptr [ebp]
// 0051a3f7  8b4804               mov ecx, dword ptr [eax + 4]
// 0051a3fa  6a01                 push 1
// 0051a3fc  55                   push ebp
// 0051a3fd  4e                   dec esi
// 0051a3fe  43                   inc ebx
// 0051a3ff  ffd1                 call ecx
// 0051a401  83c408               add esp, 8
// 0051a404  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0051a409  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0051a411  bf01000000           mov edi, 1
// 0051a416  85f6                 test esi, esi
// 0051a418  751c                 jne 0x51a436
// 0051a41a  8b742430             mov esi, dword ptr [esp + 0x30]
// 0051a41e  8b560c               mov edx, dword ptr [esi + 0xc]
// 0051a421  55                   push ebp
// 0051a422  ffd2                 call edx
// 0051a424  83c404               add esp, 4
// 0051a427  84c0                 test al, al
// 0051a429  0f843fffffff         je 0x51a36e
// 0051a42f  8b4604               mov eax, dword ptr [esi + 4]
// 0051a432  8b1e                 mov ebx, dword ptr [esi]
// 0051a434  8bf0                 mov esi, eax
// 0051a436  8a0b                 mov cl, byte ptr [ebx]
// 0051a438  0fb6d1               movzx edx, cl
// 0051a43b  01542418             add dword ptr [esp + 0x18], edx
// 0051a43f  884c3c1c             mov byte ptr [esp + edi + 0x1c], cl
// 0051a443  4e                   dec esi
// 0051a444  47                   inc edi
// 0051a445  43                   inc ebx
// 0051a446  83ff10               cmp edi, 0x10
// 0051a449  89742410             mov dword ptr [esp + 0x10], esi
// 0051a44d  7ec7                 jle 0x51a416
// 0051a44f  8b4500               mov eax, dword ptr [ebp]
// 0051a452  0fb64c241d           movzx ecx, byte ptr [esp + 0x1d]
// 0051a457  0fb654241e           movzx edx, byte ptr [esp + 0x1e]
// 0051a45c  83c018               add eax, 0x18
// 0051a45f  836c241411           sub dword ptr [esp + 0x14], 0x11
// 0051a464  8908                 mov dword ptr [eax], ecx
// 0051a466  0fb64c241f           movzx ecx, byte ptr [esp + 0x1f]
// 0051a46b  895004               mov dword ptr [eax + 4], edx
// 0051a46e  0fb6542420           movzx edx, byte ptr [esp + 0x20]
// 0051a473  894808               mov dword ptr [eax + 8], ecx
// 0051a476  0fb64c2421           movzx ecx, byte ptr [esp + 0x21]
// 0051a47b  89500c               mov dword ptr [eax + 0xc], edx
// 0051a47e  0fb6542422           movzx edx, byte ptr [esp + 0x22]
// 0051a483  894810               mov dword ptr [eax + 0x10], ecx
// 0051a486  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 0051a48b  895014               mov dword ptr [eax + 0x14], edx
// 0051a48e  0fb6542424           movzx edx, byte ptr [esp + 0x24]
// 0051a493  894818               mov dword ptr [eax + 0x18], ecx
// 0051a496  89501c               mov dword ptr [eax + 0x1c], edx
// 0051a499  8b4500               mov eax, dword ptr [ebp]
// 0051a49c  bf56000000           mov edi, 0x56
// 0051a4a1  897814               mov dword ptr [eax + 0x14], edi
// 0051a4a4  8b4d00               mov ecx, dword ptr [ebp]
// 0051a4a7  8b5104               mov edx, dword ptr [ecx + 4]
// 0051a4aa  6a02                 push 2
// 0051a4ac  55                   push ebp
// 0051a4ad  ffd2                 call edx
// 0051a4af  8b4500               mov eax, dword ptr [ebp]
// 0051a4b2  0fb64c242d           movzx ecx, byte ptr [esp + 0x2d]
// 0051a4b7  0fb654242e           movzx edx, byte ptr [esp + 0x2e]
// 0051a4bc  83c018               add eax, 0x18
// 0051a4bf  8908                 mov dword ptr [eax], ecx
// 0051a4c1  0fb64c242f           movzx ecx, byte ptr [esp + 0x2f]
// 0051a4c6  895004               mov dword ptr [eax + 4], edx
// 0051a4c9  0fb6542430           movzx edx, byte ptr [esp + 0x30]
// 0051a4ce  894808               mov dword ptr [eax + 8], ecx
// 0051a4d1  0fb64c2431           movzx ecx, byte ptr [esp + 0x31]
// 0051a4d6  89500c               mov dword ptr [eax + 0xc], edx
// 0051a4d9  0fb6542432           movzx edx, byte ptr [esp + 0x32]
// 0051a4de  894810               mov dword ptr [eax + 0x10], ecx
// 0051a4e1  0fb64c2433           movzx ecx, byte ptr [esp + 0x33]
// 0051a4e6  895014               mov dword ptr [eax + 0x14], edx
// 0051a4e9  0fb6542434           movzx edx, byte ptr [esp + 0x34]
// 0051a4ee  894818               mov dword ptr [eax + 0x18], ecx
// 0051a4f1  89501c               mov dword ptr [eax + 0x1c], edx
// 0051a4f4  8b4500               mov eax, dword ptr [ebp]
// 0051a4f7  897814               mov dword ptr [eax + 0x14], edi
// 0051a4fa  8b4d00               mov ecx, dword ptr [ebp]
// 0051a4fd  8b5104               mov edx, dword ptr [ecx + 4]
// 0051a500  6a02                 push 2
// 0051a502  55                   push ebp
// 0051a503  ffd2                 call edx
// 0051a505  8b442428             mov eax, dword ptr [esp + 0x28]
// 0051a509  83c410               add esp, 0x10
// 0051a50c  3d00010000           cmp eax, 0x100
// 0051a511  7f06                 jg 0x51a519
// 0051a513  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0051a517  7e15                 jle 0x51a52e
// 0051a519  8b4500               mov eax, dword ptr [ebp]
// 0051a51c  c7401408000000       mov dword ptr [eax + 0x14], 8
// 0051a523  8b4d00               mov ecx, dword ptr [ebp]
// 0051a526  8b11                 mov edx, dword ptr [ecx]
// 0051a528  55                   push ebp
// 0051a529  ffd2                 call edx
// 0051a52b  83c404               add esp, 4
// 0051a52e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051a532  33ff                 xor edi, edi
// 0051a534  85c0                 test eax, eax
// 0051a536  7e35                 jle 0x51a56d
// 0051a538  85f6                 test esi, esi
// 0051a53a  7520                 jne 0x51a55c
// 0051a53c  8b742430             mov esi, dword ptr [esp + 0x30]
// 0051a540  8b460c               mov eax, dword ptr [esi + 0xc]
// 0051a543  55                   push ebp
// 0051a544  ffd0                 call eax
// 0051a546  83c404               add esp, 4
// 0051a549  84c0                 test al, al
// 0051a54b  0f841dfeffff         je 0x51a36e
// 0051a551  8b4e04               mov ecx, dword ptr [esi + 4]
// 0051a554  8b1e                 mov ebx, dword ptr [esi]
// 0051a556  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051a55a  8bf1                 mov esi, ecx
// 0051a55c  8a13                 mov dl, byte ptr [ebx]
// 0051a55e  88543c38             mov byte ptr [esp + edi + 0x38], dl
// 0051a562  4e                   dec esi
// 0051a563  47                   inc edi
// 0051a564  43                   inc ebx
// 0051a565  3bf8                 cmp edi, eax
// 0051a567  89742410             mov dword ptr [esp + 0x10], esi
// 0051a56b  7ccb                 jl 0x51a538
// 0051a56d  29442414             sub dword ptr [esp + 0x14], eax
// 0051a571  8b442434             mov eax, dword ptr [esp + 0x34]
// 0051a575  a810                 test al, 0x10
// 0051a577  740c                 je 0x51a585
// 0051a579  83e810               sub eax, 0x10
// 0051a57c  8db485b0000000       lea esi, [ebp + eax*4 + 0xb0]
// 0051a583  eb07                 jmp 0x51a58c
// 0051a585  8db485a0000000       lea esi, [ebp + eax*4 + 0xa0]
// 0051a58c  85c0                 test eax, eax
// 0051a58e  7c05                 jl 0x51a595
// 0051a590  83f804               cmp eax, 4
// 0051a593  7c1b                 jl 0x51a5b0
// 0051a595  8b4d00               mov ecx, dword ptr [ebp]
// 0051a598  c741141e000000       mov dword ptr [ecx + 0x14], 0x1e
// 0051a59f  8b5500               mov edx, dword ptr [ebp]
// 0051a5a2  894218               mov dword ptr [edx + 0x18], eax
// 0051a5a5  8b4500               mov eax, dword ptr [ebp]
// 0051a5a8  8b08                 mov ecx, dword ptr [eax]
// 0051a5aa  55                   push ebp
// 0051a5ab  ffd1                 call ecx
// 0051a5ad  83c404               add esp, 4
// 0051a5b0  833e00               cmp dword ptr [esi], 0
// 0051a5b3  750b                 jne 0x51a5c0
// 0051a5b5  55                   push ebp
// 0051a5b6  e845110000           call 0x51b700
// 0051a5bb  83c404               add esp, 4
// 0051a5be  8906                 mov dword ptr [esi], eax
// 0051a5c0  8b06                 mov eax, dword ptr [esi]
// 0051a5c2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0051a5c6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051a5ca  8910                 mov dword ptr [eax], edx
// 0051a5cc  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051a5d0  894804               mov dword ptr [eax + 4], ecx
// 0051a5d3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0051a5d7  895008               mov dword ptr [eax + 8], edx
// 0051a5da  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 0051a5de  89480c               mov dword ptr [eax + 0xc], ecx
// 0051a5e1  885010               mov byte ptr [eax + 0x10], dl
// 0051a5e4  8b3e                 mov edi, dword ptr [esi]
// 0051a5e6  83c711               add edi, 0x11
// 0051a5e9  837c241410           cmp dword ptr [esp + 0x14], 0x10
// 0051a5ee  b940000000           mov ecx, 0x40
// 0051a5f3  8d742438             lea esi, [esp + 0x38]
// 0051a5f7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0051a5f9  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051a5fd  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0051a601  0f8fbafdffff         jg 0x51a3c1
// 0051a607  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051a60b  85c0                 test eax, eax
// 0051a60d  7415                 je 0x51a624
// 0051a60f  8b4500               mov eax, dword ptr [ebp]
// 0051a612  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 0051a619  8b4d00               mov ecx, dword ptr [ebp]
// 0051a61c  8b11                 mov edx, dword ptr [ecx]
// 0051a61e  55                   push ebp
// 0051a61f  ffd2                 call edx
// 0051a621  83c404               add esp, 4
// 0051a624  891f                 mov dword ptr [edi], ebx
// 0051a626  897704               mov dword ptr [edi + 4], esi
// 0051a629  5f                   pop edi
// 0051a62a  5e                   pop esi
// 0051a62b  5d                   pop ebp
// 0051a62c  b001                 mov al, 1
// 0051a62e  5b                   pop ebx
// 0051a62f  81c428010000         add esp, 0x128
// 0051a635  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dht)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
