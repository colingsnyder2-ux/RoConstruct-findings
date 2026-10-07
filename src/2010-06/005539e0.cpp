// roc 2010-06 005539e0  unit: seg_00550000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005539e0
//
// 005539e0  56                   push esi
// 005539e1  8bf1                 mov esi, ecx
// 005539e3  8b4604               mov eax, dword ptr [esi + 4]
// 005539e6  50                   push eax
// 005539e7  c7064832a100         mov dword ptr [esi], 0xa13248
// 005539ed  c7460800000000       mov dword ptr [esi + 8], 0
// 005539f4  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005539fb  e8b071fbff           call 0x50abb0
// 00553a00  83c404               add esp, 4
// 00553a03  c7460400000000       mov dword ptr [esi + 4], 0
// 00553a0a  5e                   pop esi
// 00553a0b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??1GImage@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
