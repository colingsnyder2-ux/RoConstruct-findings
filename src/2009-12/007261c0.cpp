// roc 2009-12 007261c0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007261c0
//
// 007261c0  8d4424d8             lea eax, [esp - 0x28]
// 007261c4  83ec28               sub esp, 0x28
// 007261c7  50                   push eax
// 007261c8  e843c6ffff           call 0x722810
// 007261cd  83c404               add esp, 4
// 007261d0  68e87cac00           push 0xac7ce8
// 007261d5  8d4c2404             lea ecx, [esp + 4]
// 007261d9  51                   push ecx
// 007261da  e899e60c00           call 0x7f4878
// copied from an identical function in another client (function ??$read@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$device_wrapper_impl@Uoutput@iostreams@boost@@@detail@iostreams@boost@@SAHAAV?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@PADH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp