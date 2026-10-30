// roc 2012-06 0085d550  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085d550
//
// 0085d550  6aff                 push -1
// 0085d552  6891e4ac00           push 0xace491
// 0085d557  64a100000000         mov eax, dword ptr fs:[0]
// 0085d55d  50                   push eax
// 0085d55e  64892500000000       mov dword ptr fs:[0], esp
// 0085d565  83ec20               sub esp, 0x20
// 0085d568  56                   push esi
// 0085d569  8bf1                 mov esi, ecx
// 0085d56b  681447bd00           push 0xbd4714
// 0085d570  8d4c240c             lea ecx, [esp + 0xc]
// 0085d574  89742408             mov dword ptr [esp + 8], esi
// 0085d578  ff154826b200         call dword ptr [0xb22648]
// 0085d57e  8d442408             lea eax, [esp + 8]
// 0085d582  50                   push eax
// 0085d583  8bce                 mov ecx, esi
// 0085d585  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0085d58d  e80eebbaff           call 0x40c0a0
// 0085d592  c7065444bd00         mov dword ptr [esi], 0xbd4454
// 0085d598  8d4c2408             lea ecx, [esp + 8]
// 0085d59c  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0085d5a1  ff153c26b200         call dword ptr [0xb2263c]
// 0085d5a7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0085d5ab  c7060c47bd00         mov dword ptr [esi], 0xbd470c
// 0085d5b1  c7462801000000       mov dword ptr [esi + 0x28], 1
// 0085d5b8  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0085d5bb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085d5bf  89562c               mov dword ptr [esi + 0x2c], edx
// 0085d5c2  8bc6                 mov eax, esi
// 0085d5c4  5e                   pop esi
// 0085d5c5  64890d00000000       mov dword ptr fs:[0], ecx
// 0085d5cc  83c42c               add esp, 0x2c
// 0085d5cf  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@ABVzlib_error@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp