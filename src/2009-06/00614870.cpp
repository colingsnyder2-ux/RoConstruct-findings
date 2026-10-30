// roc 2009-06 00614870  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00614870
//
// 00614870  8b442410             mov eax, dword ptr [esp + 0x10]
// 00614874  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00614878  50                   push eax
// 00614879  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061487d  52                   push edx
// 0061487e  99                   cdq 
// 0061487f  52                   push edx
// 00614880  50                   push eax
// 00614881  8b442414             mov eax, dword ptr [esp + 0x14]
// 00614885  50                   push eax
// 00614886  e8f5fdffff           call 0x614680
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp