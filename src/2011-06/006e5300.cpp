// roc 2011-06 006e5300  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e5300
//
// 006e5300  6aff                 push -1
// 006e5302  68a11f9e00           push 0x9e1fa1
// 006e5307  64a100000000         mov eax, dword ptr fs:[0]
// 006e530d  50                   push eax
// 006e530e  64892500000000       mov dword ptr fs:[0], esp
// 006e5315  83ec20               sub esp, 0x20
// 006e5318  56                   push esi
// 006e5319  8bf1                 mov esi, ecx
// 006e531b  680485aa00           push 0xaa8504
// 006e5320  8d4c240c             lea ecx, [esp + 0xc]
// 006e5324  89742408             mov dword ptr [esp + 8], esi
// 006e5328  ff15c404a400         call dword ptr [0xa404c4]
// 006e532e  8d442408             lea eax, [esp + 8]
// 006e5332  50                   push eax
// 006e5333  8bce                 mov ecx, esi
// 006e5335  c744243000000000     mov dword ptr [esp + 0x30], 0
// 006e533d  e80e56d2ff           call 0x40a950
// 006e5342  c7064882aa00         mov dword ptr [esi], 0xaa8248
// 006e5348  8d4c2408             lea ecx, [esp + 8]
// 006e534c  c644242c02           mov byte ptr [esp + 0x2c], 2
// 006e5351  ff15d004a400         call dword ptr [0xa404d0]
// 006e5357  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006e535b  894e28               mov dword ptr [esi + 0x28], ecx
// 006e535e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006e5362  c706fc84aa00         mov dword ptr [esi], 0xaa84fc
// 006e5368  8b15e802ac00         mov edx, dword ptr [0xac02e8]
// 006e536e  89562c               mov dword ptr [esi + 0x2c], edx
// 006e5371  8bc6                 mov eax, esi
// 006e5373  5e                   pop esi
// 006e5374  64890d00000000       mov dword ptr fs:[0], ecx
// 006e537b  83c42c               add esp, 0x2c
// 006e537e  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp