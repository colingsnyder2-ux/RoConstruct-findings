// roc 2009-12 00723e20  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00723e20
//
// 00723e20  8b442410             mov eax, dword ptr [esp + 0x10]
// 00723e24  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00723e28  50                   push eax
// 00723e29  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00723e2d  52                   push edx
// 00723e2e  99                   cdq 
// 00723e2f  52                   push edx
// 00723e30  50                   push eax
// 00723e31  8b442414             mov eax, dword ptr [esp + 0x14]
// 00723e35  50                   push eax
// 00723e36  e875fbffff           call 0x7239b0
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp