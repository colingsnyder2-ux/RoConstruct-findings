// roc 2010-06 004997b0  unit: G3D::Shader  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004997b0
//
// 004997b0  56                   push esi
// 004997b1  8d7104               lea esi, [ecx + 4]
// 004997b4  8bce                 mov ecx, esi
// 004997b6  e85542ffff           call 0x48da10
// 004997bb  6a10                 push 0x10
// 004997bd  6a50                 push 0x50
// 004997bf  c7460c14000000       mov dword ptr [esi + 0xc], 0x14
// 004997c6  c7460400000000       mov dword ptr [esi + 4], 0
// 004997cd  e8ce400b00           call 0x54d8a0
// 004997d2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004997d5  03c9                 add ecx, ecx
// 004997d7  03c9                 add ecx, ecx
// 004997d9  51                   push ecx
// 004997da  6a00                 push 0
// 004997dc  50                   push eax
// 004997dd  894608               mov dword ptr [esi + 8], eax
// 004997e0  e8bb4d0b00           call 0x54e5a0
// 004997e5  83c414               add esp, 0x14
// 004997e8  5e                   pop esi
// 004997e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?clear@?$Set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
