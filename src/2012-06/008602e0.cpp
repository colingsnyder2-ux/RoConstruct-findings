// roc 2012-06 008602e0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008602e0
//
// 008602e0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 008602e6  8b5110               mov edx, dword ptr [ecx + 0x10]
// 008602e9  8902                 mov dword ptr [edx], eax
// 008602eb  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008602ee  8902                 mov dword ptr [edx], eax
// 008602f0  8bd0                 mov edx, eax
// 008602f2  2bd0                 sub edx, eax
// 008602f4  8b4130               mov eax, dword ptr [ecx + 0x30]
// 008602f7  8910                 mov dword ptr [eax], edx
// 008602f9  c3                   ret 
// copied from an identical function in another client (function ?init_get_area@?$indirect_streambuf@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp