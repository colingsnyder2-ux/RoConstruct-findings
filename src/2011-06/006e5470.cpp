// roc 2011-06 006e5470  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e5470
//
// 006e5470  8d4424d8             lea eax, [esp - 0x28]
// 006e5474  83ec28               sub esp, 0x28
// 006e5477  50                   push eax
// 006e5478  e843c7ffff           call 0x6e1bc0
// 006e547d  83c404               add esp, 4
// 006e5480  68f8fbbb00           push 0xbbfbf8
// 006e5485  8d4c2404             lea ecx, [esp + 4]
// 006e5489  51                   push ecx
// 006e548a  e81d5c1200           call 0x80b0ac
// copied from an identical function in another client (function ??$read@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$device_wrapper_impl@Uoutput@iostreams@boost@@@detail@iostreams@boost@@SAHAAV?$basic_null_device@DUoutput@iostreams@boost@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@PADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp