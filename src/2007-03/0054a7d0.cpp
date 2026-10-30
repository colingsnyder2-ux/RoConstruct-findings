// roc 2007-03 0054a7d0  unit: seg_00540000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a7d0
//
// 0054a7d0  6aff                 push -1
// 0054a7d2  6868317500           push 0x753168
// 0054a7d7  64a100000000         mov eax, dword ptr fs:[0]
// 0054a7dd  50                   push eax
// 0054a7de  64892500000000       mov dword ptr fs:[0], esp
// 0054a7e5  51                   push ecx
// 0054a7e6  56                   push esi
// 0054a7e7  8bf1                 mov esi, ecx
// 0054a7e9  89742404             mov dword ptr [esp + 4], esi
// 0054a7ed  e86ecf0700           call 0x5c7760
// 0054a7f2  85f6                 test esi, esi
// 0054a7f4  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054a7fc  7405                 je 0x54a803
// 0054a7fe  8d4614               lea eax, [esi + 0x14]
// 0054a801  eb02                 jmp 0x54a805
// 0054a803  33c0                 xor eax, eax
// 0054a805  50                   push eax
// 0054a806  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054a80a  6a00                 push 0
// 0054a80c  6a00                 push 0
// 0054a80e  6a00                 push 0
// 0054a810  50                   push eax
// 0054a811  8bce                 mov ecx, esi
// 0054a813  e858d00700           call 0x5c7870
// 0054a818  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054a81c  8bc6                 mov eax, esi
// 0054a81e  5e                   pop esi
// 0054a81f  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a826  83c410               add esp, 0x10
// 0054a829  c20400               ret 4
// copied from an identical function in another client (function ??0?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@ABUzlib_params@23@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp