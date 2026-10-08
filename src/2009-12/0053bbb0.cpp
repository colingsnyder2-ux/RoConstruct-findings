// roc 2009-12 0053bbb0  unit: G3D::VRay::?$holder  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053bbb0
//
// 0053bbb0  51                   push ecx
// 0053bbb1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053bbb5  56                   push esi
// 0053bbb6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053bbba  50                   push eax
// 0053bbbb  56                   push esi
// 0053bbbc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0053bbc4  e8e7ddedff           call 0x4199b0
// 0053bbc9  83c408               add esp, 8
// 0053bbcc  8bc6                 mov eax, esi
// 0053bbce  5e                   pop esi
// 0053bbcf  59                   pop ecx
// 0053bbd0  c3                   ret 
// library boost-1.34.1/libs\program_options\src\convert.cpp (function ?to_internal@program_options@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/convert.cpp
