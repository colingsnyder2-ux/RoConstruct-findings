// roc 2011-06 006e4270  unit: UString_sink::?$stream_buffer  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4270
//
// 006e4270  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 006e4273  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006e4276  8902                 mov dword ptr [edx], eax
// 006e4278  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006e427b  8902                 mov dword ptr [edx], eax
// 006e427d  8bd0                 mov edx, eax
// 006e427f  2bd0                 sub edx, eax
// 006e4281  8b4130               mov eax, dword ptr [ecx + 0x30]
// 006e4284  8910                 mov dword ptr [eax], edx
// 006e4286  c3                   ret 
// copied from an identical function in another client (function ?init_get_area@?$indirect_streambuf@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 roc_string_sink_401c42386b16c308.cpp