// roc 2009-12 00724fb0  unit: UString_sink::?$stream_buffer  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00724fb0
//
// 00724fb0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00724fb4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00724fb8  50                   push eax
// 00724fb9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00724fbd  52                   push edx
// 00724fbe  99                   cdq 
// 00724fbf  52                   push edx
// 00724fc0  50                   push eax
// 00724fc1  8b442414             mov eax, dword ptr [esp + 0x14]
// 00724fc5  50                   push eax
// 00724fc6  e865f4ffff           call 0x724430
// copied from an identical function in another client (function ?seekoff@?$indirect_streambuf@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAE?AV?$fpos@H@std@@JHH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp