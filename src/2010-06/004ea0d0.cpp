// roc 2010-06 004ea0d0  unit: G3D::VRay::?$holder  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004ea0d0
//
// 004ea0d0  51                   push ecx
// 004ea0d1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ea0d5  56                   push esi
// 004ea0d6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ea0da  50                   push eax
// 004ea0db  56                   push esi
// 004ea0dc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004ea0e4  e807e8f6ff           call 0x4588f0
// 004ea0e9  83c408               add esp, 8
// 004ea0ec  8bc6                 mov eax, esi
// 004ea0ee  5e                   pop esi
// 004ea0ef  59                   pop ecx
// 004ea0f0  c3                   ret 
// library boost-1.34.1/libs\program_options\src\convert.cpp (function ?to_internal@program_options@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/convert.cpp
