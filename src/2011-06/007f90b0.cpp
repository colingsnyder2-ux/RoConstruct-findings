// from server: 100% by auto
// roc 2011-06 007f90b0  unit: PasteVerb  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f90b0
//
// 007f90b0  51                   push ecx
// 007f90b1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f90b5  56                   push esi
// 007f90b6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007f90ba  8d442414             lea eax, [esp + 0x14]
// 007f90be  50                   push eax
// 007f90bf  51                   push ecx
// 007f90c0  56                   push esi
// 007f90c1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007f90c9  e8f2fdffff           call 0x7f8ec0
// 007f90ce  83c40c               add esp, 0xc
// 007f90d1  8bc6                 mov eax, esi
// 007f90d3  5e                   pop esi
// 007f90d4  59                   pop ecx
// 007f90d5  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
