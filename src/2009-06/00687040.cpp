// roc 2009-06 00687040  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00687040
//
// 00687040  8b442414             mov eax, dword ptr [esp + 0x14]
// 00687044  8b542410             mov edx, dword ptr [esp + 0x10]
// 00687048  50                   push eax
// 00687049  8b442410             mov eax, dword ptr [esp + 0x10]
// 0068704d  52                   push edx
// 0068704e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00687052  50                   push eax
// 00687053  8b442424             mov eax, dword ptr [esp + 0x24]
// 00687057  52                   push edx
// 00687058  50                   push eax
// 00687059  51                   push ecx
// 0068705a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0068705e  51                   push ecx
// 0068705f  e8ecfdffff           call 0x686e50
// copied from an identical function in another client (function ??$seek@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$concept_adapter@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@@detail@iostreams@boost@@QAE?AV?$fpos@H@std@@_JHHPAV?$linked_streambuf@DU?$char_traits@D@std@@@123@@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp