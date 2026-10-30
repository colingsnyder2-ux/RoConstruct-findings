// roc 2007-08 00550130  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00550130
//
// 00550130  6aff                 push -1
// 00550132  6835297500           push 0x752935
// 00550137  64a100000000         mov eax, dword ptr fs:[0]
// 0055013d  50                   push eax
// 0055013e  64892500000000       mov dword ptr fs:[0], esp
// 00550145  83ec5c               sub esp, 0x5c
// 00550148  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0055014c  56                   push esi
// 0055014d  57                   push edi
// 0055014e  8bf1                 mov esi, ecx
// 00550150  50                   push eax
// 00550151  8d4c2410             lea ecx, [esp + 0x10]
// 00550155  51                   push ecx
// 00550156  89742410             mov dword ptr [esp + 0x10], esi
// 0055015a  e8d1aaffff           call 0x54ac30
// 0055015f  83c408               add esp, 8
// 00550162  8b542478             mov edx, dword ptr [esp + 0x78]
// 00550166  50                   push eax
// 00550167  33ff                 xor edi, edi
// 00550169  52                   push edx
// 0055016a  8bce                 mov ecx, esi
// 0055016c  897c2474             mov dword ptr [esp + 0x74], edi
// 00550170  e81bebffff           call 0x54ec90
// 00550175  8d4c2440             lea ecx, [esp + 0x40]
// 00550179  c644246c03           mov byte ptr [esp + 0x6c], 3
// 0055017e  ff15ace67700         call dword ptr [0x77e6ac]
// 00550184  8d4c2424             lea ecx, [esp + 0x24]
// 00550188  c644246c02           mov byte ptr [esp + 0x6c], 2
// 0055018d  ff15ace67700         call dword ptr [0x77e6ac]
// 00550193  8d4e08               lea ecx, [esi + 8]
// 00550196  ff15a4e67700         call dword ptr [0x77e6a4]
// 0055019c  8d4e24               lea ecx, [esi + 0x24]
// 0055019f  c644246c04           mov byte ptr [esp + 0x6c], 4
// 005501a4  ff15a4e67700         call dword ptr [0x77e6a4]
// 005501aa  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005501ae  897e48               mov dword ptr [esi + 0x48], edi
// 005501b1  897e4c               mov dword ptr [esi + 0x4c], edi
// 005501b4  897e50               mov dword ptr [esi + 0x50], edi
// 005501b7  c74640ff000000       mov dword ptr [esi + 0x40], 0xff
// 005501be  5f                   pop edi
// 005501bf  8bc6                 mov eax, esi
// 005501c1  5e                   pop esi
// 005501c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005501c9  83c468               add esp, 0x68
// 005501cc  c20800               ret 8
// copied from an identical function in another client (function ??0?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAE@HH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp