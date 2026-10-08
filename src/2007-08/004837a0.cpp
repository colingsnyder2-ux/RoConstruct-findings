// from server: 100% by auto
// roc 2007-08 004837a0  unit: G3D::Shader  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004837a0
//
// 004837a0  56                   push esi
// 004837a1  8d7104               lea esi, [ecx + 4]
// 004837a4  8bce                 mov ecx, esi
// 004837a6  e895abfeff           call 0x46e340
// 004837ab  6a10                 push 0x10
// 004837ad  6a50                 push 0x50
// 004837af  c7460c14000000       mov dword ptr [esi + 0xc], 0x14
// 004837b6  c7460400000000       mov dword ptr [esi + 4], 0
// 004837bd  e89ec80700           call 0x500060
// 004837c2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004837c5  03c9                 add ecx, ecx
// 004837c7  03c9                 add ecx, ecx
// 004837c9  51                   push ecx
// 004837ca  6a00                 push 0
// 004837cc  50                   push eax
// 004837cd  894608               mov dword ptr [esi + 8], eax
// 004837d0  e8abcd0700           call 0x500580
// 004837d5  83c414               add esp, 0x14
// 004837d8  5e                   pop esi
// 004837d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?clear@?$Set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
