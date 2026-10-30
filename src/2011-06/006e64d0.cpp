// roc 2011-06 006e64d0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e64d0
//
// 006e64d0  6aff                 push -1
// 006e64d2  6815429f00           push 0x9f4215
// 006e64d7  64a100000000         mov eax, dword ptr fs:[0]
// 006e64dd  50                   push eax
// 006e64de  64892500000000       mov dword ptr fs:[0], esp
// 006e64e5  83ec5c               sub esp, 0x5c
// 006e64e8  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 006e64ec  56                   push esi
// 006e64ed  57                   push edi
// 006e64ee  8bf1                 mov esi, ecx
// 006e64f0  50                   push eax
// 006e64f1  8d4c2410             lea ecx, [esp + 0x10]
// 006e64f5  51                   push ecx
// 006e64f6  89742410             mov dword ptr [esp + 0x10], esi
// 006e64fa  e851acffff           call 0x6e1150
// 006e64ff  83c408               add esp, 8
// 006e6502  8b542478             mov edx, dword ptr [esp + 0x78]
// 006e6506  50                   push eax
// 006e6507  33ff                 xor edi, edi
// 006e6509  52                   push edx
// 006e650a  8bce                 mov ecx, esi
// 006e650c  897c2474             mov dword ptr [esp + 0x74], edi
// 006e6510  e85bd6ffff           call 0x6e3b70
// 006e6515  8d4c2440             lea ecx, [esp + 0x40]
// 006e6519  c644246c03           mov byte ptr [esp + 0x6c], 3
// 006e651e  ff15d004a400         call dword ptr [0xa404d0]
// 006e6524  8d4c2424             lea ecx, [esp + 0x24]
// 006e6528  c644246c02           mov byte ptr [esp + 0x6c], 2
// 006e652d  ff15d004a400         call dword ptr [0xa404d0]
// 006e6533  8d4e08               lea ecx, [esi + 8]
// 006e6536  ff15bc04a400         call dword ptr [0xa404bc]
// 006e653c  8d4e24               lea ecx, [esi + 0x24]
// 006e653f  c644246c04           mov byte ptr [esp + 0x6c], 4
// 006e6544  ff15bc04a400         call dword ptr [0xa404bc]
// 006e654a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 006e654e  897e48               mov dword ptr [esi + 0x48], edi
// 006e6551  897e4c               mov dword ptr [esi + 0x4c], edi
// 006e6554  897e50               mov dword ptr [esi + 0x50], edi
// 006e6557  c74640ff000000       mov dword ptr [esi + 0x40], 0xff
// 006e655e  5f                   pop edi
// 006e655f  8bc6                 mov eax, esi
// 006e6561  5e                   pop esi
// 006e6562  64890d00000000       mov dword ptr fs:[0], ecx
// 006e6569  83c468               add esp, 0x68
// 006e656c  c20800               ret 8
// copied from an identical function in another client (function ??0?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAE@HH@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp