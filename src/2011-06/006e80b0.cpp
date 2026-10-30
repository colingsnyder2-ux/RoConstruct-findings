// roc 2011-06 006e80b0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e80b0
//
// 006e80b0  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 006e80b6  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006e80b9  8902                 mov dword ptr [edx], eax
// 006e80bb  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006e80be  8902                 mov dword ptr [edx], eax
// 006e80c0  8bd0                 mov edx, eax
// 006e80c2  2bd0                 sub edx, eax
// 006e80c4  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006e80c7  8910                 mov dword ptr [eax], edx
// 006e80c9  c3                   ret 
// copied from an identical function in another client (function ?init_get_area@?$indirect_streambuf@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp