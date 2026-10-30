// roc 2009-12 00727360  unit: boost::iostreams::Uinput::?$filtering_stream  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00727360
//
// 00727360  6aff                 push -1
// 00727362  68e5ef9400           push 0x94efe5
// 00727367  64a100000000         mov eax, dword ptr fs:[0]
// 0072736d  50                   push eax
// 0072736e  64892500000000       mov dword ptr fs:[0], esp
// 00727375  83ec5c               sub esp, 0x5c
// 00727378  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0072737c  56                   push esi
// 0072737d  57                   push edi
// 0072737e  8bf1                 mov esi, ecx
// 00727380  50                   push eax
// 00727381  8d4c2410             lea ecx, [esp + 0x10]
// 00727385  51                   push ecx
// 00727386  89742410             mov dword ptr [esp + 0x10], esi
// 0072738a  e821aaffff           call 0x721db0
// 0072738f  83c408               add esp, 8
// 00727392  8b542478             mov edx, dword ptr [esp + 0x78]
// 00727396  50                   push eax
// 00727397  33ff                 xor edi, edi
// 00727399  52                   push edx
// 0072739a  8bce                 mov ecx, esi
// 0072739c  897c2474             mov dword ptr [esp + 0x74], edi
// 007273a0  e87bd4ffff           call 0x724820
// 007273a5  8d4c2440             lea ecx, [esp + 0x40]
// 007273a9  c644246c03           mov byte ptr [esp + 0x6c], 3
// 007273ae  ff15e4b69800         call dword ptr [0x98b6e4]
// 007273b4  8d4c2424             lea ecx, [esp + 0x24]
// 007273b8  c644246c02           mov byte ptr [esp + 0x6c], 2
// 007273bd  ff15e4b69800         call dword ptr [0x98b6e4]
// 007273c3  8d4e08               lea ecx, [esi + 8]
// 007273c6  ff15e8b69800         call dword ptr [0x98b6e8]
// 007273cc  8d4e24               lea ecx, [esi + 0x24]
// 007273cf  c644246c04           mov byte ptr [esp + 0x6c], 4
// 007273d4  ff15e8b69800         call dword ptr [0x98b6e8]
// 007273da  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007273de  897e48               mov dword ptr [esi + 0x48], edi
// 007273e1  897e4c               mov dword ptr [esi + 0x4c], edi
// 007273e4  897e50               mov dword ptr [esi + 0x50], edi
// 007273e7  c74640ff000000       mov dword ptr [esi + 0x40], 0xff
// 007273ee  5f                   pop edi
// 007273ef  8bc6                 mov eax, esi
// 007273f1  5e                   pop esi
// 007273f2  64890d00000000       mov dword ptr fs:[0], ecx
// 007273f9  83c468               add esp, 0x68
// 007273fc  c20800               ret 8
// copied from an identical function in another client (function ??0?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAE@HH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp