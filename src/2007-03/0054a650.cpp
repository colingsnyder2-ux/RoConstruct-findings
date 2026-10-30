// roc 2007-03 0054a650  unit: seg_00540000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a650
//
// 0054a650  6aff                 push -1
// 0054a652  68b8317500           push 0x7531b8
// 0054a657  64a100000000         mov eax, dword ptr fs:[0]
// 0054a65d  50                   push eax
// 0054a65e  64892500000000       mov dword ptr fs:[0], esp
// 0054a665  83ec08               sub esp, 8
// 0054a668  56                   push esi
// 0054a669  8bf1                 mov esi, ecx
// 0054a66b  89742408             mov dword ptr [esp + 8], esi
// 0054a66f  8b4614               mov eax, dword ptr [esi + 0x14]
// 0054a672  85c0                 test eax, eax
// 0054a674  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0054a67c  740f                 je 0x54a68d
// 0054a67e  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0054a681  51                   push ecx
// 0054a682  50                   push eax
// 0054a683  8d4c240f             lea ecx, [esp + 0xf]
// 0054a687  ff1560e77700         call dword ptr [0x77e760]
// 0054a68d  8bce                 mov ecx, esi
// 0054a68f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0054a697  e8f4fdffff           call 0x54a490
// 0054a69c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054a6a0  5e                   pop esi
// 0054a6a1  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a6a8  83c414               add esp, 0x14
// 0054a6ab  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp