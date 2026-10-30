// roc 2012-06 0085d4c0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085d4c0
//
// 0085d4c0  6aff                 push -1
// 0085d4c2  6891e4ac00           push 0xace491
// 0085d4c7  64a100000000         mov eax, dword ptr fs:[0]
// 0085d4cd  50                   push eax
// 0085d4ce  64892500000000       mov dword ptr fs:[0], esp
// 0085d4d5  83ec20               sub esp, 0x20
// 0085d4d8  56                   push esi
// 0085d4d9  8bf1                 mov esi, ecx
// 0085d4db  681447bd00           push 0xbd4714
// 0085d4e0  8d4c240c             lea ecx, [esp + 0xc]
// 0085d4e4  89742408             mov dword ptr [esp + 8], esi
// 0085d4e8  ff154826b200         call dword ptr [0xb22648]
// 0085d4ee  8d442408             lea eax, [esp + 8]
// 0085d4f2  50                   push eax
// 0085d4f3  8bce                 mov ecx, esi
// 0085d4f5  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0085d4fd  e89eebbaff           call 0x40c0a0
// 0085d502  c7065444bd00         mov dword ptr [esi], 0xbd4454
// 0085d508  8d4c2408             lea ecx, [esp + 8]
// 0085d50c  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0085d511  ff153c26b200         call dword ptr [0xb2263c]
// 0085d517  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0085d51b  894e28               mov dword ptr [esi + 0x28], ecx
// 0085d51e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0085d522  c7060c47bd00         mov dword ptr [esi], 0xbd470c
// 0085d528  8b15f8c5c000         mov edx, dword ptr [0xc0c5f8]
// 0085d52e  89562c               mov dword ptr [esi + 0x2c], edx
// 0085d531  8bc6                 mov eax, esi
// 0085d533  5e                   pop esi
// 0085d534  64890d00000000       mov dword ptr fs:[0], ecx
// 0085d53b  83c42c               add esp, 0x2c
// 0085d53e  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp