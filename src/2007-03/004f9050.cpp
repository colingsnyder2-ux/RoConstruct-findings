// roc 2007-03 004f9050  unit: seg_004f0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f9050
//
// 004f9050  56                   push esi
// 004f9051  8bf1                 mov esi, ecx
// 004f9053  8b4604               mov eax, dword ptr [esi + 4]
// 004f9056  50                   push eax
// 004f9057  c7460800000000       mov dword ptr [esi + 8], 0
// 004f905e  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004f9065  e8f6a2ffff           call 0x4f3360
// 004f906a  83c404               add esp, 4
// 004f906d  c7460400000000       mov dword ptr [esi + 4], 0
// 004f9074  5e                   pop esi
// 004f9075  c3                   ret 
// library rbxgs-g3d/G3Dcpp\GImage.cpp (function ?clear@GImage@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GImage.cpp
