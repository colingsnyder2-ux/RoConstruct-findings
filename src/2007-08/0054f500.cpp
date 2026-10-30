// roc 2007-08 0054f500  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f500
//
// 0054f500  51                   push ecx
// 0054f501  8b0424               mov eax, dword ptr [esp]
// 0054f504  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0054f508  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0054f50c  50                   push eax
// 0054f50d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054f511  51                   push ecx
// 0054f512  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054f516  52                   push edx
// 0054f517  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0054f51b  50                   push eax
// 0054f51c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054f520  51                   push ecx
// 0054f521  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054f525  52                   push edx
// 0054f526  50                   push eax
// 0054f527  51                   push ecx
// 0054f528  e863ffffff           call 0x54f490
// copied from an identical function in another client (function ??$seek@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$flt_wrapper_impl@Uany_tag@iostreams@boost@@@detail@iostreams@boost@@SA?AV?$fpos@H@std@@AAV?$basic_gzip_compressor@V?$allocator@D@std@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@_JHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp