// roc 2011-06 006e4b20  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4b20
//
// 006e4b20  51                   push ecx
// 006e4b21  8b0424               mov eax, dword ptr [esp]
// 006e4b24  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006e4b28  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006e4b2c  50                   push eax
// 006e4b2d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e4b31  51                   push ecx
// 006e4b32  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e4b36  52                   push edx
// 006e4b37  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006e4b3b  50                   push eax
// 006e4b3c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006e4b40  51                   push ecx
// 006e4b41  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e4b45  52                   push edx
// 006e4b46  50                   push eax
// 006e4b47  51                   push ecx
// 006e4b48  e813ffffff           call 0x6e4a60
// copied from an identical function in another client (function ??$seek@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$flt_wrapper_impl@Uany_tag@iostreams@boost@@@detail@iostreams@boost@@SA?AV?$fpos@H@std@@AAV?$basic_gzip_compressor@V?$allocator@D@std@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@_JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp