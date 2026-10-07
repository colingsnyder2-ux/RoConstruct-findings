// roc 2007-08 005017c0  unit: G3D::Shader  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005017c0
//
// 005017c0  51                   push ecx
// 005017c1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005017c5  56                   push esi
// 005017c6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005017ca  8d442414             lea eax, [esp + 0x14]
// 005017ce  50                   push eax
// 005017cf  51                   push ecx
// 005017d0  56                   push esi
// 005017d1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005017d9  e8a2feffff           call 0x501680
// 005017de  83c40c               add esp, 0xc
// 005017e1  8bc6                 mov eax, esi
// 005017e3  5e                   pop esi
// 005017e4  59                   pop ecx
// 005017e5  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
