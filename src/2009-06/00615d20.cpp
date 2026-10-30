// roc 2009-06 00615d20  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00615d20
//
// 00615d20  8b442410             mov eax, dword ptr [esp + 0x10]
// 00615d24  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00615d28  50                   push eax
// 00615d29  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00615d2d  52                   push edx
// 00615d2e  99                   cdq 
// 00615d2f  52                   push edx
// 00615d30  50                   push eax
// 00615d31  8b442414             mov eax, dword ptr [esp + 0x14]
// 00615d35  50                   push eax
// 00615d36  e815feffff           call 0x615b50
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp