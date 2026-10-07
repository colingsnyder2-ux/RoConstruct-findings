// roc 2010-06 005574b0  unit: seg_00550000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005574b0
//
// 005574b0  51                   push ecx
// 005574b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005574b5  56                   push esi
// 005574b6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005574ba  8d442414             lea eax, [esp + 0x14]
// 005574be  50                   push eax
// 005574bf  51                   push ecx
// 005574c0  56                   push esi
// 005574c1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005574c9  e8c2feffff           call 0x557390
// 005574ce  83c40c               add esp, 0xc
// 005574d1  8bc6                 mov eax, esi
// 005574d3  5e                   pop esi
// 005574d4  59                   pop ecx
// 005574d5  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
