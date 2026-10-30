// roc 2011-06 006e4a60  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4a60
//
// 006e4a60  8d4424d8             lea eax, [esp - 0x28]
// 006e4a64  83ec28               sub esp, 0x28
// 006e4a67  50                   push eax
// 006e4a68  e873ceffff           call 0x6e18e0
// 006e4a6d  83c404               add esp, 4
// 006e4a70  68f8fbbb00           push 0xbbfbf8
// 006e4a75  8d4c2404             lea ecx, [esp + 4]
// 006e4a79  51                   push ecx
// 006e4a7a  e82d661200           call 0x80b0ac
// copied from an identical function in another client (function ??$read@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$device_wrapper_impl@Uoutput@iostreams@boost@@@detail@iostreams@boost@@SAHAAV?$basic_null_device@DUoutput@iostreams@boost@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@PADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp