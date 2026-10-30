// roc 2009-12 00726370  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00726370
//
// 00726370  51                   push ecx
// 00726371  8b0424               mov eax, dword ptr [esp]
// 00726374  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00726378  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0072637c  50                   push eax
// 0072637d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00726381  51                   push ecx
// 00726382  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00726386  52                   push edx
// 00726387  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0072638b  50                   push eax
// 0072638c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00726390  51                   push ecx
// 00726391  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00726395  52                   push edx
// 00726396  50                   push eax
// 00726397  51                   push ecx
// 00726398  e823c6ffff           call 0x7229c0
// copied from an identical function in another client (function ??$seek@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$flt_wrapper_impl@Uany_tag@iostreams@boost@@@detail@iostreams@boost@@SA?AV?$fpos@H@std@@AAV?$basic_gzip_decompressor@V?$allocator@D@std@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@_JHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp