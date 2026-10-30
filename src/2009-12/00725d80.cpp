// roc 2009-12 00725d80  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00725d80
//
// 00725d80  8b442410             mov eax, dword ptr [esp + 0x10]
// 00725d84  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00725d88  50                   push eax
// 00725d89  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00725d8d  52                   push edx
// 00725d8e  99                   cdq 
// 00725d8f  52                   push edx
// 00725d90  50                   push eax
// 00725d91  8b442414             mov eax, dword ptr [esp + 0x14]
// 00725d95  50                   push eax
// 00725d96  e815feffff           call 0x725bb0
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp