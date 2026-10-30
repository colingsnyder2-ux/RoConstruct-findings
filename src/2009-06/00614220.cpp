// roc 2009-06 00614220  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00614220
//
// 00614220  8b442414             mov eax, dword ptr [esp + 0x14]
// 00614224  8b542410             mov edx, dword ptr [esp + 0x10]
// 00614228  50                   push eax
// 00614229  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061422d  52                   push edx
// 0061422e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00614232  50                   push eax
// 00614233  8b442424             mov eax, dword ptr [esp + 0x24]
// 00614237  52                   push edx
// 00614238  50                   push eax
// 00614239  51                   push ecx
// 0061423a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061423e  51                   push ecx
// 0061423f  e8acfeffff           call 0x6140f0
// copied from an identical function in another client (function ??$seek@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$concept_adapter@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@@detail@iostreams@boost@@QAE?AV?$fpos@H@std@@_JHHPAV?$linked_streambuf@DU?$char_traits@D@std@@@123@@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp