// roc 2009-12 007220a0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007220a0
//
// 007220a0  6aff                 push -1
// 007220a2  68b8eb9400           push 0x94ebb8
// 007220a7  64a100000000         mov eax, dword ptr fs:[0]
// 007220ad  50                   push eax
// 007220ae  64892500000000       mov dword ptr fs:[0], esp
// 007220b5  83ec08               sub esp, 8
// 007220b8  56                   push esi
// 007220b9  8bf1                 mov esi, ecx
// 007220bb  89742408             mov dword ptr [esp + 8], esi
// 007220bf  8b4614               mov eax, dword ptr [esi + 0x14]
// 007220c2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007220ca  85c0                 test eax, eax
// 007220cc  740f                 je 0x7220dd
// 007220ce  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 007220d1  51                   push ecx
// 007220d2  50                   push eax
// 007220d3  8d4c240f             lea ecx, [esp + 0xf]
// 007220d7  ff15fcb59800         call dword ptr [0x98b5fc]
// 007220dd  8bce                 mov ecx, esi
// 007220df  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007220e7  e874feffff           call 0x721f60
// 007220ec  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007220f0  5e                   pop esi
// 007220f1  64890d00000000       mov dword ptr fs:[0], ecx
// 007220f8  83c414               add esp, 0x14
// 007220fb  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp