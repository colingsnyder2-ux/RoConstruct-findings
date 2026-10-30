// roc 2011-06 006e5390  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e5390
//
// 006e5390  6aff                 push -1
// 006e5392  68a11f9e00           push 0x9e1fa1
// 006e5397  64a100000000         mov eax, dword ptr fs:[0]
// 006e539d  50                   push eax
// 006e539e  64892500000000       mov dword ptr fs:[0], esp
// 006e53a5  83ec20               sub esp, 0x20
// 006e53a8  56                   push esi
// 006e53a9  8bf1                 mov esi, ecx
// 006e53ab  680485aa00           push 0xaa8504
// 006e53b0  8d4c240c             lea ecx, [esp + 0xc]
// 006e53b4  89742408             mov dword ptr [esp + 8], esi
// 006e53b8  ff15c404a400         call dword ptr [0xa404c4]
// 006e53be  8d442408             lea eax, [esp + 8]
// 006e53c2  50                   push eax
// 006e53c3  8bce                 mov ecx, esi
// 006e53c5  c744243000000000     mov dword ptr [esp + 0x30], 0
// 006e53cd  e87e55d2ff           call 0x40a950
// 006e53d2  c7064882aa00         mov dword ptr [esi], 0xaa8248
// 006e53d8  8d4c2408             lea ecx, [esp + 8]
// 006e53dc  c644242c02           mov byte ptr [esp + 0x2c], 2
// 006e53e1  ff15d004a400         call dword ptr [0xa404d0]
// 006e53e7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006e53eb  c706fc84aa00         mov dword ptr [esi], 0xaa84fc
// 006e53f1  c7462801000000       mov dword ptr [esi + 0x28], 1
// 006e53f8  8b5128               mov edx, dword ptr [ecx + 0x28]
// 006e53fb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e53ff  89562c               mov dword ptr [esi + 0x2c], edx
// 006e5402  8bc6                 mov eax, esi
// 006e5404  5e                   pop esi
// 006e5405  64890d00000000       mov dword ptr fs:[0], ecx
// 006e540c  83c42c               add esp, 0x2c
// 006e540f  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@ABVzlib_error@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp