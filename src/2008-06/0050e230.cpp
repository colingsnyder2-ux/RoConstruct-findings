// roc 2008-06 0050e230  unit: seg_00500000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050e230
//
// 0050e230  56                   push esi
// 0050e231  8bf1                 mov esi, ecx
// 0050e233  8b4604               mov eax, dword ptr [esi + 4]
// 0050e236  50                   push eax
// 0050e237  c7065c978100         mov dword ptr [esi], 0x81975c
// 0050e23d  c7460800000000       mov dword ptr [esi + 8], 0
// 0050e244  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0050e24b  e8b09affff           call 0x507d00
// 0050e250  83c404               add esp, 4
// 0050e253  c7460400000000       mov dword ptr [esi + 4], 0
// 0050e25a  5e                   pop esi
// 0050e25b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??1GImage@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
