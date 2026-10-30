// roc 2007-03 0054a6b0  unit: seg_00540000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a6b0
//
// 0054a6b0  6aff                 push -1
// 0054a6b2  6848317500           push 0x753148
// 0054a6b7  64a100000000         mov eax, dword ptr fs:[0]
// 0054a6bd  50                   push eax
// 0054a6be  64892500000000       mov dword ptr fs:[0], esp
// 0054a6c5  83ec08               sub esp, 8
// 0054a6c8  56                   push esi
// 0054a6c9  8bf1                 mov esi, ecx
// 0054a6cb  89742408             mov dword ptr [esp + 8], esi
// 0054a6cf  8b4614               mov eax, dword ptr [esi + 0x14]
// 0054a6d2  85c0                 test eax, eax
// 0054a6d4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0054a6dc  740f                 je 0x54a6ed
// 0054a6de  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0054a6e1  51                   push ecx
// 0054a6e2  50                   push eax
// 0054a6e3  8d4c240f             lea ecx, [esp + 0xf]
// 0054a6e7  ff1560e77700         call dword ptr [0x77e760]
// 0054a6ed  8bce                 mov ecx, esi
// 0054a6ef  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0054a6f7  e8e4fdffff           call 0x54a4e0
// 0054a6fc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054a700  5e                   pop esi
// 0054a701  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a708  83c414               add esp, 0x14
// 0054a70b  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp