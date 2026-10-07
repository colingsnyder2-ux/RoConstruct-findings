// roc 2009-06 00705590  unit: VAuthoringSettings::?$FactoryProduct  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00705590
//
// 00705590  51                   push ecx
// 00705591  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00705595  56                   push esi
// 00705596  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070559a  8d442414             lea eax, [esp + 0x14]
// 0070559e  50                   push eax
// 0070559f  51                   push ecx
// 007055a0  56                   push esi
// 007055a1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007055a9  e8f2fdffff           call 0x7053a0
// 007055ae  83c40c               add esp, 0xc
// 007055b1  8bc6                 mov eax, esi
// 007055b3  5e                   pop esi
// 007055b4  59                   pop ecx
// 007055b5  c3                   ret 
// library g3d-6.09/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/format.cpp
