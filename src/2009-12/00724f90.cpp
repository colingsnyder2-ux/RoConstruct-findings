// roc 2009-12 00724f90  unit: UString_sink::?$stream_buffer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00724f90
//
// 00724f90  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00724f93  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00724f96  8902                 mov dword ptr [edx], eax
// 00724f98  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00724f9b  8902                 mov dword ptr [edx], eax
// 00724f9d  8bd0                 mov edx, eax
// 00724f9f  2bd0                 sub edx, eax
// 00724fa1  8b4130               mov eax, dword ptr [ecx + 0x30]
// 00724fa4  8910                 mov dword ptr [eax], edx
// 00724fa6  c3                   ret 
// copied from an identical function in another client (function ?init_get_area@?$indirect_streambuf@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@EAEXXZ)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp