// roc 2009-06 006133c0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006133c0
//
// 006133c0  6aff                 push -1
// 006133c2  68287d8600           push 0x867d28
// 006133c7  64a100000000         mov eax, dword ptr fs:[0]
// 006133cd  50                   push eax
// 006133ce  64892500000000       mov dword ptr fs:[0], esp
// 006133d5  83ec08               sub esp, 8
// 006133d8  56                   push esi
// 006133d9  8bf1                 mov esi, ecx
// 006133db  89742408             mov dword ptr [esp + 8], esi
// 006133df  8b4614               mov eax, dword ptr [esi + 0x14]
// 006133e2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006133ea  85c0                 test eax, eax
// 006133ec  740f                 je 0x6133fd
// 006133ee  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006133f1  51                   push ecx
// 006133f2  50                   push eax
// 006133f3  8d4c240f             lea ecx, [esp + 0xf]
// 006133f7  ff15bce38900         call dword ptr [0x89e3bc]
// 006133fd  8bce                 mov ecx, esi
// 006133ff  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00613407  e854ffffff           call 0x613360
// 0061340c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00613410  5e                   pop esi
// 00613411  64890d00000000       mov dword ptr fs:[0], ecx
// 00613418  83c414               add esp, 0x14
// 0061341b  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp