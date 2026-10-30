// roc 2012-06 0085ccd0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085ccd0
//
// 0085ccd0  51                   push ecx
// 0085ccd1  8b0424               mov eax, dword ptr [esp]
// 0085ccd4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085ccd8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085ccdc  50                   push eax
// 0085ccdd  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085cce1  51                   push ecx
// 0085cce2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085cce6  52                   push edx
// 0085cce7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085cceb  50                   push eax
// 0085ccec  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0085ccf0  51                   push ecx
// 0085ccf1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0085ccf5  52                   push edx
// 0085ccf6  50                   push eax
// 0085ccf7  51                   push ecx
// 0085ccf8  e883daffff           call 0x85a780
// copied from an identical function in another client (function ??$seek@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$flt_wrapper_impl@Uany_tag@iostreams@boost@@@detail@iostreams@boost@@SA?AV?$fpos@H@std@@AAV?$basic_gzip_compressor@V?$allocator@D@std@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@_JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp