// from server: 100% by auto
// roc 2009-06 00570b10  unit: G3D::Log  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00570b10
//
// 00570b10  56                   push esi
// 00570b11  8bf1                 mov esi, ecx
// 00570b13  8b4604               mov eax, dword ptr [esi + 4]
// 00570b16  50                   push eax
// 00570b17  c706a0fc8b00         mov dword ptr [esi], 0x8bfca0
// 00570b1d  c7460800000000       mov dword ptr [esi + 8], 0
// 00570b24  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00570b2b  e830a6ffff           call 0x56b160
// 00570b30  83c404               add esp, 4
// 00570b33  c7460400000000       mov dword ptr [esi + 4], 0
// 00570b3a  5e                   pop esi
// 00570b3b  c3                   ret 
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??1GImage@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
