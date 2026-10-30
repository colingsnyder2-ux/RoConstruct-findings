// roc 2007-08 0054e120  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e120
//
// 0054e120  6aff                 push -1
// 0054e122  6861277500           push 0x752761
// 0054e127  64a100000000         mov eax, dword ptr fs:[0]
// 0054e12d  50                   push eax
// 0054e12e  64892500000000       mov dword ptr fs:[0], esp
// 0054e135  83ec20               sub esp, 0x20
// 0054e138  56                   push esi
// 0054e139  8bf1                 mov esi, ecx
// 0054e13b  68fc7a7a00           push 0x7a7afc
// 0054e140  8d4c240c             lea ecx, [esp + 0xc]
// 0054e144  89742408             mov dword ptr [esp + 8], esi
// 0054e148  ff1598e67700         call dword ptr [0x77e698]
// 0054e14e  8d442408             lea eax, [esp + 8]
// 0054e152  50                   push eax
// 0054e153  8bce                 mov ecx, esi
// 0054e155  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0054e15d  e85e4cecff           call 0x412dc0
// 0054e162  c7063c787a00         mov dword ptr [esi], 0x7a783c
// 0054e168  8d4c2408             lea ecx, [esp + 8]
// 0054e16c  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0054e171  ff15ace67700         call dword ptr [0x77e6ac]
// 0054e177  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0054e17b  c706f47a7a00         mov dword ptr [esi], 0x7a7af4
// 0054e181  c7462801000000       mov dword ptr [esi + 0x28], 1
// 0054e188  8b5128               mov edx, dword ptr [ecx + 0x28]
// 0054e18b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0054e18f  89562c               mov dword ptr [esi + 0x2c], edx
// 0054e192  8bc6                 mov eax, esi
// 0054e194  5e                   pop esi
// 0054e195  64890d00000000       mov dword ptr fs:[0], ecx
// 0054e19c  83c42c               add esp, 0x2c
// 0054e19f  c20400               ret 4
// copied from an identical function in another client (function ??0gzip_error@iostreams@boost@@QAE@ABVzlib_error@12@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp