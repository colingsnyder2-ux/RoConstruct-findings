// roc 2010-06 006a3d70  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a3d70
//
// 006a3d70  51                   push ecx
// 006a3d71  8b0424               mov eax, dword ptr [esp]
// 006a3d74  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006a3d78  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006a3d7c  50                   push eax
// 006a3d7d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a3d81  51                   push ecx
// 006a3d82  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a3d86  52                   push edx
// 006a3d87  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006a3d8b  50                   push eax
// 006a3d8c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a3d90  51                   push ecx
// 006a3d91  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a3d95  52                   push edx
// 006a3d96  50                   push eax
// 006a3d97  51                   push ecx
// 006a3d98  e803d4ffff           call 0x6a11a0
// copied from an identical function in another client (function ??$seek@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$flt_wrapper_impl@Uany_tag@iostreams@boost@@@detail@iostreams@boost@@SA?AV?$fpos@H@std@@AAV?$basic_gzip_compressor@V?$allocator@D@std@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@_JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp