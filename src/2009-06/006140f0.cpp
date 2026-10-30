// roc 2009-06 006140f0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006140f0
//
// 006140f0  51                   push ecx
// 006140f1  8b0424               mov eax, dword ptr [esp]
// 006140f4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006140f8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006140fc  50                   push eax
// 006140fd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00614101  51                   push ecx
// 00614102  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00614106  52                   push edx
// 00614107  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061410b  50                   push eax
// 0061410c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00614110  51                   push ecx
// 00614111  52                   push edx
// 00614112  50                   push eax
// 00614113  e8b8ffffff           call 0x6140d0
// copied from an identical function in another client (function ??$seek@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$device_wrapper_impl@Uany_tag@iostreams@boost@@@detail@iostreams@boost@@SA?AV?$fpos@H@std@@AAV?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@_JHH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp