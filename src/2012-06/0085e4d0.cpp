// roc 2012-06 0085e4d0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 547 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085e4d0
//
// 0085e4d0  6aff                 push -1
// 0085e4d2  68a1e5ac00           push 0xace5a1
// 0085e4d7  64a100000000         mov eax, dword ptr fs:[0]
// 0085e4dd  50                   push eax
// 0085e4de  64892500000000       mov dword ptr fs:[0], esp
// 0085e4e5  83ec64               sub esp, 0x64
// 0085e4e8  53                   push ebx
// 0085e4e9  55                   push ebp
// 0085e4ea  56                   push esi
// 0085e4eb  57                   push edi
// 0085e4ec  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 0085e4f3  83ec58               sub esp, 0x58
// 0085e4f6  8be9                 mov ebp, ecx
// 0085e4f8  8bcc                 mov ecx, esp
// 0085e4fa  8964246c             mov dword ptr [esp + 0x6c], esp
// 0085e4fe  57                   push edi
// 0085e4ff  896c2474             mov dword ptr [esp + 0x74], ebp
// 0085e503  e898acffff           call 0x8591a0
// 0085e508  8d442474             lea eax, [esp + 0x74]
// 0085e50c  50                   push eax
// 0085e50d  e81eadffff           call 0x859230
// 0085e512  83c45c               add esp, 0x5c
// 0085e515  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0085e51c  50                   push eax
// 0085e51d  51                   push ecx
// 0085e51e  33db                 xor ebx, ebx
// 0085e520  8bcd                 mov ecx, ebp
// 0085e522  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 0085e529  e822d8ffff           call 0x85bd50
// 0085e52e  8d4c2450             lea ecx, [esp + 0x50]
// 0085e532  c644247c03           mov byte ptr [esp + 0x7c], 3
// 0085e537  ff153c26b200         call dword ptr [0xb2263c]
// 0085e53d  8d4c2434             lea ecx, [esp + 0x34]
// 0085e541  c644247c02           mov byte ptr [esp + 0x7c], 2
// 0085e546  ff153c26b200         call dword ptr [0xb2263c]
// 0085e54c  8d7508               lea esi, [ebp + 8]
// 0085e54f  8bce                 mov ecx, esi
// 0085e551  ff155426b200         call dword ptr [0xb22654]
// 0085e557  8d4d24               lea ecx, [ebp + 0x24]
// 0085e55a  c644247c04           mov byte ptr [esp + 0x7c], 4
// 0085e55f  ff155426b200         call dword ptr [0xb22654]
// 0085e565  895d40               mov dword ptr [ebp + 0x40], ebx
// 0085e568  895d44               mov dword ptr [ebp + 0x44], ebx
// 0085e56b  8b472c               mov eax, dword ptr [edi + 0x2c]
// 0085e56e  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 0085e571  3bc3                 cmp eax, ebx
// 0085e573  0f95c3               setne bl
// 0085e576  85c9                 test ecx, ecx
// 0085e578  0f95c2               setne dl
// 0085e57b  c644247c05           mov byte ptr [esp + 0x7c], 5
// 0085e580  88942484000000       mov byte ptr [esp + 0x84], dl
// 0085e587  84db                 test bl, bl
// 0085e589  7407                 je 0x85e592
// 0085e58b  40                   inc eax
// 0085e58c  89442410             mov dword ptr [esp + 0x10], eax
// 0085e590  eb08                 jmp 0x85e59a
// 0085e592  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0085e59a  84d2                 test dl, dl
// 0085e59c  740a                 je 0x85e5a8
// 0085e59e  41                   inc ecx
// 0085e59f  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 0085e5a6  eb0b                 jmp 0x85e5b3
// 0085e5a8  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 0085e5b3  8b07                 mov eax, dword ptr [edi]
// 0085e5b5  33d2                 xor edx, edx
// 0085e5b7  3b05dcc5c000         cmp eax, dword ptr [0xc0c5dc]
// 0085e5bd  0f95c2               setne dl
// 0085e5c0  33c9                 xor ecx, ecx
// 0085e5c2  4a                   dec edx
// 0085e5c3  83e204               and edx, 4
// 0085e5c6  3b05e0c5c000         cmp eax, dword ptr [0xc0c5e0]
// 0085e5cc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085e5d0  0f95c1               setne cl
// 0085e5d3  49                   dec ecx
// 0085e5d4  83e102               and ecx, 2
// 0085e5d7  03d1                 add edx, ecx
// 0085e5d9  89542414             mov dword ptr [esp + 0x14], edx
// 0085e5dd  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0085e5e4  8d4c020a             lea ecx, [edx + eax + 0xa]
// 0085e5e8  51                   push ecx
// 0085e5e9  8bce                 mov ecx, esi
// 0085e5eb  ff15bc26b200         call dword ptr [0xb226bc]
// 0085e5f1  6a1f                 push 0x1f
// 0085e5f3  8bce                 mov ecx, esi
// 0085e5f5  ff15bc25b200         call dword ptr [0xb225bc]
// 0085e5fb  6a8b                 push -0x75
// 0085e5fd  8bce                 mov ecx, esi
// 0085e5ff  ff15bc25b200         call dword ptr [0xb225bc]
// 0085e605  6a08                 push 8
// 0085e607  8bce                 mov ecx, esi
// 0085e609  ff15bc25b200         call dword ptr [0xb225bc]
// 0085e60f  8a942484000000       mov dl, byte ptr [esp + 0x84]
// 0085e616  f6da                 neg dl
// 0085e618  1ad2                 sbb dl, dl
// 0085e61a  80e210               and dl, 0x10
// 0085e61d  8ac3                 mov al, bl
// 0085e61f  f6d8                 neg al
// 0085e621  1ac0                 sbb al, al
// 0085e623  2408                 and al, 8
// 0085e625  02d0                 add dl, al
// 0085e627  0fb6ca               movzx ecx, dl
// 0085e62a  51                   push ecx
// 0085e62b  8bce                 mov ecx, esi
// 0085e62d  ff15bc25b200         call dword ptr [0xb225bc]
// 0085e633  0fb65750             movzx edx, byte ptr [edi + 0x50]
// 0085e637  52                   push edx
// 0085e638  8bce                 mov ecx, esi
// 0085e63a  ff15bc25b200         call dword ptr [0xb225bc]
// 0085e640  8b4750               mov eax, dword ptr [edi + 0x50]
// 0085e643  8b5754               mov edx, dword ptr [edi + 0x54]
// 0085e646  b108                 mov cl, 8
// 0085e648  e843551200           call 0x983b90
// 0085e64d  0fb6c0               movzx eax, al
// 0085e650  50                   push eax
// 0085e651  8bce                 mov ecx, esi
// 0085e653  ff15bc25b200         call dword ptr [0xb225bc]
// 0085e659  8b4750               mov eax, dword ptr [edi + 0x50]
// 0085e65c  8b5754               mov edx, dword ptr [edi + 0x54]
// 0085e65f  b110                 mov cl, 0x10
// 0085e661  e82a551200           call 0x983b90
// 0085e666  0fb6c8               movzx ecx, al
// 0085e669  51                   push ecx
// 0085e66a  8bce                 mov ecx, esi
// 0085e66c  ff15bc25b200         call dword ptr [0xb225bc]
// 0085e672  8b4750               mov eax, dword ptr [edi + 0x50]
// 0085e675  8b5754               mov edx, dword ptr [edi + 0x54]
// 0085e678  b118                 mov cl, 0x18
// 0085e67a  e811551200           call 0x983b90
// 0085e67f  0fb6d0               movzx edx, al
// 0085e682  52                   push edx
// 0085e683  8bce                 mov ecx, esi
// 0085e685  ff15bc25b200         call dword ptr [0xb225bc]
// 0085e68b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085e68f  50                   push eax
// 0085e690  8bce                 mov ecx, esi
// 0085e692  ff15bc25b200         call dword ptr [0xb225bc]
// 0085e698  6aff                 push -1
// 0085e69a  8bce                 mov ecx, esi
// 0085e69c  ff15bc25b200         call dword ptr [0xb225bc]
// 0085e6a2  84db                 test bl, bl
// 0085e6a4  7416                 je 0x85e6bc
// 0085e6a6  8d4f18               lea ecx, [edi + 0x18]
// 0085e6a9  51                   push ecx
// 0085e6aa  8bce                 mov ecx, esi
// 0085e6ac  ff15e026b200         call dword ptr [0xb226e0]
// 0085e6b2  6a00                 push 0
// 0085e6b4  8bce                 mov ecx, esi
// 0085e6b6  ff15bc25b200         call dword ptr [0xb225bc]
// 0085e6bc  80bc248400000000     cmp byte ptr [esp + 0x84], 0
// 0085e6c4  7416                 je 0x85e6dc
// 0085e6c6  83c734               add edi, 0x34
// 0085e6c9  57                   push edi
// 0085e6ca  8bce                 mov ecx, esi
// 0085e6cc  ff15e026b200         call dword ptr [0xb226e0]
// 0085e6d2  6a00                 push 0
// 0085e6d4  8bce                 mov ecx, esi
// 0085e6d6  ff15bc25b200         call dword ptr [0xb225bc]
// 0085e6dc  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0085e6e0  5f                   pop edi
// 0085e6e1  5e                   pop esi
// 0085e6e2  8bc5                 mov eax, ebp
// 0085e6e4  5d                   pop ebp
// 0085e6e5  64890d00000000       mov dword ptr fs:[0], ecx
// 0085e6ec  5b                   pop ebx
// 0085e6ed  83c470               add esp, 0x70
// 0085e6f0  c20800               ret 8
// copied from an identical function in another client (function ??0?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABUgzip_params@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp