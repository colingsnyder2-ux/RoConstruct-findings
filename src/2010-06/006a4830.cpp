// roc 2010-06 006a4830  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a4830
//
// 006a4830  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 006a4836  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006a4839  8902                 mov dword ptr [edx], eax
// 006a483b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006a483e  8902                 mov dword ptr [edx], eax
// 006a4840  8bd0                 mov edx, eax
// 006a4842  2bd0                 sub edx, eax
// 006a4844  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006a4847  8910                 mov dword ptr [eax], edx
// 006a4849  c3                   ret 
// copied from an identical function in another client (function ?init_get_area@?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp