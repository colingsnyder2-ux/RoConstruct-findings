// roc 2009-06 00615200  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00615200
//
// 00615200  8b442410             mov eax, dword ptr [esp + 0x10]
// 00615204  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00615208  50                   push eax
// 00615209  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061520d  52                   push edx
// 0061520e  99                   cdq 
// 0061520f  52                   push edx
// 00615210  50                   push eax
// 00615211  8b442414             mov eax, dword ptr [esp + 0x14]
// 00615215  50                   push eax
// 00615216  e8c5f8ffff           call 0x614ae0
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp