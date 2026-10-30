// roc 2012-06 0085e700  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085e700
//
// 0085e700  6aff                 push -1
// 0085e702  68d5e5ac00           push 0xace5d5
// 0085e707  64a100000000         mov eax, dword ptr fs:[0]
// 0085e70d  50                   push eax
// 0085e70e  64892500000000       mov dword ptr fs:[0], esp
// 0085e715  83ec5c               sub esp, 0x5c
// 0085e718  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0085e71c  56                   push esi
// 0085e71d  57                   push edi
// 0085e71e  8bf1                 mov esi, ecx
// 0085e720  50                   push eax
// 0085e721  8d4c2410             lea ecx, [esp + 0x10]
// 0085e725  51                   push ecx
// 0085e726  89742410             mov dword ptr [esp + 0x10], esi
// 0085e72a  e881abffff           call 0x8592b0
// 0085e72f  83c408               add esp, 8
// 0085e732  8b542478             mov edx, dword ptr [esp + 0x78]
// 0085e736  50                   push eax
// 0085e737  33ff                 xor edi, edi
// 0085e739  52                   push edx
// 0085e73a  8bce                 mov ecx, esi
// 0085e73c  897c2474             mov dword ptr [esp + 0x74], edi
// 0085e740  e88bd6ffff           call 0x85bdd0
// 0085e745  8d4c2440             lea ecx, [esp + 0x40]
// 0085e749  c644246c03           mov byte ptr [esp + 0x6c], 3
// 0085e74e  ff153c26b200         call dword ptr [0xb2263c]
// 0085e754  8d4c2424             lea ecx, [esp + 0x24]
// 0085e758  c644246c02           mov byte ptr [esp + 0x6c], 2
// 0085e75d  ff153c26b200         call dword ptr [0xb2263c]
// 0085e763  8d4e08               lea ecx, [esi + 8]
// 0085e766  ff155426b200         call dword ptr [0xb22654]
// 0085e76c  8d4e24               lea ecx, [esi + 0x24]
// 0085e76f  c644246c04           mov byte ptr [esp + 0x6c], 4
// 0085e774  ff155426b200         call dword ptr [0xb22654]
// 0085e77a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0085e77e  897e48               mov dword ptr [esi + 0x48], edi
// 0085e781  897e4c               mov dword ptr [esi + 0x4c], edi
// 0085e784  897e50               mov dword ptr [esi + 0x50], edi
// 0085e787  c74640ff000000       mov dword ptr [esi + 0x40], 0xff
// 0085e78e  5f                   pop edi
// 0085e78f  8bc6                 mov eax, esi
// 0085e791  5e                   pop esi
// 0085e792  64890d00000000       mov dword ptr fs:[0], ecx
// 0085e799  83c468               add esp, 0x68
// 0085e79c  c20800               ret 8
// copied from an identical function in another client (function ??0?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAE@HH@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp