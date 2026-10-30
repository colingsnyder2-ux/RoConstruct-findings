// roc 2012-06 00859530  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00859530
//
// 00859530  6aff                 push -1
// 00859532  6818e1ac00           push 0xace118
// 00859537  64a100000000         mov eax, dword ptr fs:[0]
// 0085953d  50                   push eax
// 0085953e  64892500000000       mov dword ptr fs:[0], esp
// 00859545  83ec08               sub esp, 8
// 00859548  56                   push esi
// 00859549  8bf1                 mov esi, ecx
// 0085954b  89742408             mov dword ptr [esp + 8], esi
// 0085954f  8b4614               mov eax, dword ptr [esi + 0x14]
// 00859552  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0085955a  85c0                 test eax, eax
// 0085955c  740f                 je 0x85956d
// 0085955e  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00859561  51                   push ecx
// 00859562  50                   push eax
// 00859563  8d4c240f             lea ecx, [esp + 0xf]
// 00859567  ff15f825b200         call dword ptr [0xb225f8]
// 0085956d  8bce                 mov ecx, esi
// 0085956f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00859577  e884feffff           call 0x859400
// 0085957c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00859580  5e                   pop esi
// 00859581  64890d00000000       mov dword ptr fs:[0], ecx
// 00859588  83c414               add esp, 0x14
// 0085958b  c3                   ret 
// copied from an identical function in another client (function ??1impl@?$symmetric_filter@V?$zlib_decompressor_impl@V?$allocator@D@std@@@detail@iostreams@boost@@V?$allocator@D@std@@@iostreams@boost@@QAE@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_5f426dfd96d21d45.cpp