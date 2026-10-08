// roc 2009-12 004dd340  unit: G3D::Shader  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dd340
//
// 004dd340  56                   push esi
// 004dd341  8d7104               lea esi, [ecx + 4]
// 004dd344  8bce                 mov ecx, esi
// 004dd346  e8c571ffff           call 0x4d4510
// 004dd34b  6a10                 push 0x10
// 004dd34d  6a50                 push 0x50
// 004dd34f  c7460c14000000       mov dword ptr [esi + 0xc], 0x14
// 004dd356  c7460400000000       mov dword ptr [esi + 4], 0
// 004dd35d  e85ecf1000           call 0x5ea2c0
// 004dd362  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004dd365  03c9                 add ecx, ecx
// 004dd367  03c9                 add ecx, ecx
// 004dd369  51                   push ecx
// 004dd36a  6a00                 push 0
// 004dd36c  50                   push eax
// 004dd36d  894608               mov dword ptr [esi + 8], eax
// 004dd370  e84bdc1000           call 0x5eafc0
// 004dd375  83c414               add esp, 0x14
// 004dd378  5e                   pop esi
// 004dd379  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?clear@?$Set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
