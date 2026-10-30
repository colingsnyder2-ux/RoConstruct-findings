// roc 2007-08 0054e440  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e440
//
// 0054e440  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 0054e446  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0054e449  8902                 mov dword ptr [edx], eax
// 0054e44b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0054e44e  8902                 mov dword ptr [edx], eax
// 0054e450  8bd0                 mov edx, eax
// 0054e452  2bd0                 sub edx, eax
// 0054e454  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0054e457  8910                 mov dword ptr [eax], edx
// 0054e459  c3                   ret 
// copied from an identical function in another client (function ?init_get_area@?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@EAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp