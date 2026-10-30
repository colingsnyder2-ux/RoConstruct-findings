// roc 2010-06 006a7540  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a7540
//
// 006a7540  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 006a7546  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006a7549  8902                 mov dword ptr [edx], eax
// 006a754b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006a754e  8902                 mov dword ptr [edx], eax
// 006a7550  8bd0                 mov edx, eax
// 006a7552  2bd0                 sub edx, eax
// 006a7554  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006a7557  8910                 mov dword ptr [eax], edx
// 006a7559  c3                   ret 
// copied from an identical function in another client (function ?init_get_area@?$indirect_streambuf@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_a8b429b397bb580b.cpp