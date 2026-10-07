// roc 2008-06 00486950  unit: G3D::Shader  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00486950
//
// 00486950  56                   push esi
// 00486951  8d7104               lea esi, [ecx + 4]
// 00486954  8bce                 mov ecx, esi
// 00486956  e835adfeff           call 0x471690
// 0048695b  6a10                 push 0x10
// 0048695d  6a50                 push 0x50
// 0048695f  c7460c14000000       mov dword ptr [esi + 0xc], 0x14
// 00486966  c7460400000000       mov dword ptr [esi + 4], 0
// 0048696d  e80e1c0800           call 0x508580
// 00486972  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00486975  03c9                 add ecx, ecx
// 00486977  03c9                 add ecx, ecx
// 00486979  51                   push ecx
// 0048697a  6a00                 push 0
// 0048697c  50                   push eax
// 0048697d  894608               mov dword ptr [esi + 8], eax
// 00486980  e8ab200800           call 0x508a30
// 00486985  83c414               add esp, 0x14
// 00486988  5e                   pop esi
// 00486989  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?clear@?$Set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
