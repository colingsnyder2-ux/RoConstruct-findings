// roc 2009-12 005efae0  unit: G3D::Log  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005efae0
//
// 005efae0  56                   push esi
// 005efae1  8bf1                 mov esi, ecx
// 005efae3  8b4604               mov eax, dword ptr [esi + 4]
// 005efae6  50                   push eax
// 005efae7  c70698559b00         mov dword ptr [esi], 0x9b5598
// 005efaed  c7460800000000       mov dword ptr [esi + 8], 0
// 005efaf4  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005efafb  e8a0c6f6ff           call 0x55c1a0
// 005efb00  83c404               add esp, 4
// 005efb03  c7460400000000       mov dword ptr [esi + 4], 0
// 005efb0a  5e                   pop esi
// 005efb0b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??1GImage@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
