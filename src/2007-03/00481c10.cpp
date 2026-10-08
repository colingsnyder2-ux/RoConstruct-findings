// roc 2007-03 00481c10  unit: seg_00480000  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00481c10
//
// 00481c10  56                   push esi
// 00481c11  8d7104               lea esi, [ecx + 4]
// 00481c14  8bce                 mov ecx, esi
// 00481c16  e8a5c6feff           call 0x46e2c0
// 00481c1b  6a10                 push 0x10
// 00481c1d  6a50                 push 0x50
// 00481c1f  c7460c14000000       mov dword ptr [esi + 0xc], 0x14
// 00481c26  c7460400000000       mov dword ptr [esi + 4], 0
// 00481c2d  e89e1f0700           call 0x4f3bd0
// 00481c32  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00481c35  03c9                 add ecx, ecx
// 00481c37  03c9                 add ecx, ecx
// 00481c39  51                   push ecx
// 00481c3a  6a00                 push 0
// 00481c3c  50                   push eax
// 00481c3d  894608               mov dword ptr [esi + 8], eax
// 00481c40  e8ab240700           call 0x4f40f0
// 00481c45  83c414               add esp, 0x14
// 00481c48  5e                   pop esi
// 00481c49  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Shader.cpp (function ?clear@?$Set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Shader.cpp
