// roc 2009-12 00722040  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722040
//
// 00722040  6aff                 push -1
// 00722042  6898eb9400           push 0x94eb98
// 00722047  64a100000000         mov eax, dword ptr fs:[0]
// 0072204d  50                   push eax
// 0072204e  64892500000000       mov dword ptr fs:[0], esp
// 00722055  83ec08               sub esp, 8
// 00722058  56                   push esi
// 00722059  8bf1                 mov esi, ecx
// 0072205b  89742408             mov dword ptr [esp + 8], esi
// 0072205f  8b4614               mov eax, dword ptr [esi + 0x14]
// 00722062  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0072206a  85c0                 test eax, eax
// 0072206c  740f                 je 0x72207d
// 0072206e  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00722071  51                   push ecx
// 00722072  50                   push eax
// 00722073  8d4c240f             lea ecx, [esp + 0xf]
// 00722077  ff15fcb59800         call dword ptr [0x98b5fc]
// 0072207d  8bce                 mov ecx, esi
// 0072207f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00722087  e884feffff           call 0x721f10
// 0072208c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00722090  5e                   pop esi
// 00722091  64890d00000000       mov dword ptr fs:[0], ecx
// 00722098  83c414               add esp, 0x14
// 0072209b  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp