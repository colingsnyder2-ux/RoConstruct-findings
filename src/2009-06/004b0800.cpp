// from server: 100% by auto
// roc 2009-06 004b0800  unit: G3D::Shader  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b0800
//
// 004b0800  56                   push esi
// 004b0801  8d7104               lea esi, [ecx + 4]
// 004b0804  8bce                 mov ecx, esi
// 004b0806  e83571ffff           call 0x4a7940
// 004b080b  6a10                 push 0x10
// 004b080d  6a50                 push 0x50
// 004b080f  c7460c14000000       mov dword ptr [esi + 0xc], 0x14
// 004b0816  c7460400000000       mov dword ptr [esi + 4], 0
// 004b081d  e84ea90b00           call 0x56b170
// 004b0822  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004b0825  03c9                 add ecx, ecx
// 004b0827  03c9                 add ecx, ecx
// 004b0829  51                   push ecx
// 004b082a  6a00                 push 0
// 004b082c  50                   push eax
// 004b082d  894608               mov dword ptr [esi + 8], eax
// 004b0830  e85bb60b00           call 0x56be90
// 004b0835  83c414               add esp, 0x14
// 004b0838  5e                   pop esi
// 004b0839  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?clear@?$Set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
