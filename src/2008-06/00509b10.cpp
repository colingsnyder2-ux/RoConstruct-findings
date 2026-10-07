// roc 2008-06 00509b10  unit: G3D::Shader  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00509b10
//
// 00509b10  51                   push ecx
// 00509b11  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00509b15  56                   push esi
// 00509b16  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00509b1a  8d442414             lea eax, [esp + 0x14]
// 00509b1e  50                   push eax
// 00509b1f  51                   push ecx
// 00509b20  56                   push esi
// 00509b21  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00509b29  e8c2feffff           call 0x5099f0
// 00509b2e  83c40c               add esp, 0xc
// 00509b31  8bc6                 mov eax, esi
// 00509b33  5e                   pop esi
// 00509b34  59                   pop ecx
// 00509b35  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
