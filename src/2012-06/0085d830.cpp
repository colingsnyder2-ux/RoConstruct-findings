// roc 2012-06 0085d830  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085d830
//
// 0085d830  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 0085d836  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0085d839  8902                 mov dword ptr [edx], eax
// 0085d83b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0085d83e  8902                 mov dword ptr [edx], eax
// 0085d840  8bd0                 mov edx, eax
// 0085d842  2bd0                 sub edx, eax
// 0085d844  8b4130               mov eax, dword ptr [ecx + 0x30]
// 0085d847  8910                 mov dword ptr [eax], edx
// 0085d849  c3                   ret 
// copied from an identical function in another client (function ?init_get_area@?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp