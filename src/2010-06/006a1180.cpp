// roc 2010-06 006a1180  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a1180
//
// 006a1180  8d4424d8             lea eax, [esp - 0x28]
// 006a1184  83ec28               sub esp, 0x28
// 006a1187  50                   push eax
// 006a1188  e8b3f5ffff           call 0x6a0740
// 006a118d  83c404               add esp, 4
// 006a1190  68f463b300           push 0xb363f4
// 006a1195  8d4c2404             lea ecx, [esp + 4]
// 006a1199  51                   push ecx
// 006a119a  e813781000           call 0x7a89b2
// copied from an identical function in another client (function ??$read@V?$basic_null_device@DUoutput@iostreams@boost@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$device_wrapper_impl@Uoutput@iostreams@boost@@@detail@iostreams@boost@@SAHAAV?$basic_null_device@DUoutput@iostreams@boost@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@PADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp