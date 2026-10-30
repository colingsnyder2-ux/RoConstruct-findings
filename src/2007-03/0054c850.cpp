// roc 2007-03 0054c850  unit: seg_00540000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054c850
//
// 0054c850  51                   push ecx
// 0054c851  8b0424               mov eax, dword ptr [esp]
// 0054c854  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0054c858  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0054c85c  50                   push eax
// 0054c85d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054c861  51                   push ecx
// 0054c862  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054c866  52                   push edx
// 0054c867  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0054c86b  50                   push eax
// 0054c86c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054c870  51                   push ecx
// 0054c871  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0054c875  52                   push edx
// 0054c876  50                   push eax
// 0054c877  51                   push ecx
// 0054c878  e873e2ffff           call 0x54aaf0
// copied from an identical function in another client (function ??$seek@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@23@@?$flt_wrapper_impl@Uany_tag@iostreams@boost@@@detail@iostreams@boost@@SA?AV?$fpos@H@std@@AAV?$basic_gzip_compressor@V?$allocator@D@std@@@23@PAV?$linked_streambuf@DU?$char_traits@D@std@@@123@_JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp