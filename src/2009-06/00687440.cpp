// roc 2009-06 00687440  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00687440
//
// 00687440  8b442410             mov eax, dword ptr [esp + 0x10]
// 00687444  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00687448  50                   push eax
// 00687449  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0068744d  52                   push edx
// 0068744e  99                   cdq 
// 0068744f  52                   push edx
// 00687450  50                   push eax
// 00687451  8b442414             mov eax, dword ptr [esp + 0x14]
// 00687455  50                   push eax
// 00687456  e8b5fcffff           call 0x687110
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp