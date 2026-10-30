// roc 2007-08 0054e280  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e280
//
// 0054e280  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 0054e286  c1e803               shr eax, 3
// 0054e289  a801                 test al, 1
// 0054e28b  7422                 je 0x54e2af
// 0054e28d  8b91a4000000         mov edx, dword ptr [ecx + 0xa4]
// 0054e293  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 0054e299  56                   push esi
// 0054e29a  8b7114               mov esi, dword ptr [ecx + 0x14]
// 0054e29d  8916                 mov dword ptr [esi], edx
// 0054e29f  8b7124               mov esi, dword ptr [ecx + 0x24]
// 0054e2a2  8916                 mov dword ptr [esi], edx
// 0054e2a4  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054e2a7  03c2                 add eax, edx
// 0054e2a9  2bc2                 sub eax, edx
// 0054e2ab  8901                 mov dword ptr [ecx], eax
// 0054e2ad  5e                   pop esi
// 0054e2ae  c3                   ret 
// 0054e2af  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054e2b2  c70200000000         mov dword ptr [edx], 0
// 0054e2b8  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0054e2bb  c70000000000         mov dword ptr [eax], 0
// 0054e2c1  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054e2c4  c70100000000         mov dword ptr [ecx], 0
// 0054e2ca  c3                   ret 
// copied from an identical function in another client (function ?init_put_area@?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@EAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp