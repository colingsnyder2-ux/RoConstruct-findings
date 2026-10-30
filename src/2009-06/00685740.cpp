// roc 2009-06 00685740  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00685740
//
// 00685740  8d4424d8             lea eax, [esp - 0x28]
// 00685744  83ec28               sub esp, 0x28
// 00685747  50                   push eax
// 00685748  e883fcffff           call 0x6853d0
// 0068574d  83c404               add esp, 4
// 00685750  68d40d9a00           push 0x9a0dd4
// 00685755  8d4c2404             lea ecx, [esp + 4]
// 00685759  51                   push ecx
// 0068575a  e8eb420900           call 0x719a4a
// copied from an identical function in another client (function ??$read@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$device_wrapper_impl@Uoutput@iostreams@boost@@@detail@iostreams@boost@@SAHAAV?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@PADH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp