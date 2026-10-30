// roc 2009-06 00685200  unit: RBX::Sky  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00685200
//
// 00685200  6aff                 push -1
// 00685202  6808df8600           push 0x86df08
// 00685207  64a100000000         mov eax, dword ptr fs:[0]
// 0068520d  50                   push eax
// 0068520e  64892500000000       mov dword ptr fs:[0], esp
// 00685215  83ec08               sub esp, 8
// 00685218  56                   push esi
// 00685219  8bf1                 mov esi, ecx
// 0068521b  89742408             mov dword ptr [esp + 8], esi
// 0068521f  8b4614               mov eax, dword ptr [esi + 0x14]
// 00685222  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0068522a  85c0                 test eax, eax
// 0068522c  740f                 je 0x68523d
// 0068522e  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00685231  51                   push ecx
// 00685232  50                   push eax
// 00685233  8d4c240f             lea ecx, [esp + 0xf]
// 00685237  ff15bce38900         call dword ptr [0x89e3bc]
// 0068523d  8bce                 mov ecx, esi
// 0068523f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00685247  e8d4feffff           call 0x685120
// 0068524c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00685250  5e                   pop esi
// 00685251  64890d00000000       mov dword ptr fs:[0], ecx
// 00685258  83c414               add esp, 0x14
// 0068525b  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp