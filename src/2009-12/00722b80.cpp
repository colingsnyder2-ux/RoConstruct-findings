// roc 2009-12 00722b80  unit: UString_sink::?$stream_buffer  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722b80
//
// 00722b80  51                   push ecx
// 00722b81  8b0424               mov eax, dword ptr [esp]
// 00722b84  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00722b88  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00722b8c  50                   push eax
// 00722b8d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00722b91  51                   push ecx
// 00722b92  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00722b96  52                   push edx
// 00722b97  8b542418             mov edx, dword ptr [esp + 0x18]
// 00722b9b  50                   push eax
// 00722b9c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00722ba0  51                   push ecx
// 00722ba1  52                   push edx
// 00722ba2  50                   push eax
// 00722ba3  e818feffff           call 0x7229c0
// copied from an identical function in another client (function ??$seek@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$device_wrapper_impl@Uany_tag@iostreams@boost@@@detail@iostreams@boost@@SA?AV?$fpos@H@std@@AAV?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@_JHH@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp