// roc 2009-12 00723b60  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00723b60
//
// 00723b60  8b442414             mov eax, dword ptr [esp + 0x14]
// 00723b64  8b542410             mov edx, dword ptr [esp + 0x10]
// 00723b68  50                   push eax
// 00723b69  8b442410             mov eax, dword ptr [esp + 0x10]
// 00723b6d  52                   push edx
// 00723b6e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00723b72  50                   push eax
// 00723b73  8b442424             mov eax, dword ptr [esp + 0x24]
// 00723b77  52                   push edx
// 00723b78  50                   push eax
// 00723b79  51                   push ecx
// 00723b7a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00723b7e  51                   push ecx
// 00723b7f  e8fcefffff           call 0x722b80
// copied from an identical function in another client (function ??$seek@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@?$concept_adapter@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@@detail@iostreams@boost@@QAE?AV?$fpos@H@std@@_JHHPAV?$linked_streambuf@DU?$char_traits@D@std@@@123@@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp