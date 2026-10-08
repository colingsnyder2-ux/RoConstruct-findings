// roc 2007-03 004d5780  unit: seg_004d0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d5780
//
// 004d5780  56                   push esi
// 004d5781  8bf1                 mov esi, ecx
// 004d5783  8b4614               mov eax, dword ptr [esi + 0x14]
// 004d5786  85c0                 test eax, eax
// 004d5788  742c                 je 0x4d57b6
// 004d578a  83c004               add eax, 4
// 004d578d  50                   push eax
// 004d578e  ff15a8d27700         call dword ptr [0x77d2a8]
// 004d5794  85c0                 test eax, eax
// 004d5796  7517                 jne 0x4d57af
// 004d5798  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004d579b  e820dcf8ff           call 0x4633c0
// 004d57a0  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004d57a3  85c9                 test ecx, ecx
// 004d57a5  7408                 je 0x4d57af
// 004d57a7  8b01                 mov eax, dword ptr [ecx]
// 004d57a9  8b10                 mov edx, dword ptr [eax]
// 004d57ab  6a01                 push 1
// 004d57ad  ffd2                 call edx
// 004d57af  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004d57b6  5e                   pop esi
// 004d57b7  c3                   ret 
// library rbxgs-view/CylinderMesh.cpp (function ??1LevelBuilder@View@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
