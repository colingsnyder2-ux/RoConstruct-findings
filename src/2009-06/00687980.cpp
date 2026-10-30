// roc 2009-06 00687980  unit: boost::iostreams::Uinput::?$filtering_stream  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00687980
//
// 00687980  6aff                 push -1
// 00687982  6875e18600           push 0x86e175
// 00687987  64a100000000         mov eax, dword ptr fs:[0]
// 0068798d  50                   push eax
// 0068798e  64892500000000       mov dword ptr fs:[0], esp
// 00687995  83ec5c               sub esp, 0x5c
// 00687998  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0068799c  56                   push esi
// 0068799d  57                   push edi
// 0068799e  8bf1                 mov esi, ecx
// 006879a0  50                   push eax
// 006879a1  8d4c2410             lea ecx, [esp + 0x10]
// 006879a5  51                   push ecx
// 006879a6  89742410             mov dword ptr [esp + 0x10], esi
// 006879aa  e8d1d6ffff           call 0x685080
// 006879af  83c408               add esp, 8
// 006879b2  8b542478             mov edx, dword ptr [esp + 0x78]
// 006879b6  50                   push eax
// 006879b7  33ff                 xor edi, edi
// 006879b9  52                   push edx
// 006879ba  8bce                 mov ecx, esi
// 006879bc  897c2474             mov dword ptr [esp + 0x74], edi
// 006879c0  e8dbeaffff           call 0x6864a0
// 006879c5  8d4c2440             lea ecx, [esp + 0x40]
// 006879c9  c644246c03           mov byte ptr [esp + 0x6c], 3
// 006879ce  ff15c4e48900         call dword ptr [0x89e4c4]
// 006879d4  8d4c2424             lea ecx, [esp + 0x24]
// 006879d8  c644246c02           mov byte ptr [esp + 0x6c], 2
// 006879dd  ff15c4e48900         call dword ptr [0x89e4c4]
// 006879e3  8d4e08               lea ecx, [esi + 8]
// 006879e6  ff15c0e48900         call dword ptr [0x89e4c0]
// 006879ec  8d4e24               lea ecx, [esi + 0x24]
// 006879ef  c644246c04           mov byte ptr [esp + 0x6c], 4
// 006879f4  ff15c0e48900         call dword ptr [0x89e4c0]
// 006879fa  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006879fe  897e48               mov dword ptr [esi + 0x48], edi
// 00687a01  897e4c               mov dword ptr [esi + 0x4c], edi
// 00687a04  897e50               mov dword ptr [esi + 0x50], edi
// 00687a07  c74640ff000000       mov dword ptr [esi + 0x40], 0xff
// 00687a0e  5f                   pop edi
// 00687a0f  8bc6                 mov eax, esi
// 00687a11  5e                   pop esi
// 00687a12  64890d00000000       mov dword ptr fs:[0], ecx
// 00687a19  83c468               add esp, 0x68
// 00687a1c  c20800               ret 8
// copied from an identical function in another client (function ??0?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAE@HH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp