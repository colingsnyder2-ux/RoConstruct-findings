// roc 2007-03 0054a770  unit: seg_00540000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a770
//
// 0054a770  6aff                 push -1
// 0054a772  6868317500           push 0x753168
// 0054a777  64a100000000         mov eax, dword ptr fs:[0]
// 0054a77d  50                   push eax
// 0054a77e  64892500000000       mov dword ptr fs:[0], esp
// 0054a785  51                   push ecx
// 0054a786  56                   push esi
// 0054a787  8bf1                 mov esi, ecx
// 0054a789  89742404             mov dword ptr [esp + 4], esi
// 0054a78d  e8cecf0700           call 0x5c7760
// 0054a792  85f6                 test esi, esi
// 0054a794  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0054a79c  7405                 je 0x54a7a3
// 0054a79e  8d4614               lea eax, [esi + 0x14]
// 0054a7a1  eb02                 jmp 0x54a7a5
// 0054a7a3  33c0                 xor eax, eax
// 0054a7a5  50                   push eax
// 0054a7a6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054a7aa  6a00                 push 0
// 0054a7ac  6a00                 push 0
// 0054a7ae  6a01                 push 1
// 0054a7b0  50                   push eax
// 0054a7b1  8bce                 mov ecx, esi
// 0054a7b3  e8b8d00700           call 0x5c7870
// 0054a7b8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054a7bc  8bc6                 mov eax, esi
// 0054a7be  5e                   pop esi
// 0054a7bf  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a7c6  83c410               add esp, 0x10
// 0054a7c9  c20400               ret 4
// copied from an identical function in another client (function ??0?$zlib_compressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@QAE@ABUzlib_params@23@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp