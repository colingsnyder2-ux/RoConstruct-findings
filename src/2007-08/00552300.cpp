// roc 2007-08 00552300  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552300
//
// 00552300  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 00552306  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00552309  8902                 mov dword ptr [edx], eax
// 0055230b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0055230e  8902                 mov dword ptr [edx], eax
// 00552310  8bd0                 mov edx, eax
// 00552312  2bd0                 sub edx, eax
// 00552314  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00552317  8910                 mov dword ptr [eax], edx
// 00552319  c3                   ret 
// copied from an identical function in another client (function ?init_get_area@?$indirect_streambuf@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@EAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp