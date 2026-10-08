// roc 2008-06 004fab30  unit: RBX::ViewNew::TorsoBuilder  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fab30
//
// 004fab30  56                   push esi
// 004fab31  8bf1                 mov esi, ecx
// 004fab33  8b4614               mov eax, dword ptr [esi + 0x14]
// 004fab36  85c0                 test eax, eax
// 004fab38  742c                 je 0x4fab66
// 004fab3a  83c004               add eax, 4
// 004fab3d  50                   push eax
// 004fab3e  ff15ac218000         call dword ptr [0x8021ac]
// 004fab44  85c0                 test eax, eax
// 004fab46  7517                 jne 0x4fab5f
// 004fab48  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004fab4b  e84002f6ff           call 0x45ad90
// 004fab50  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004fab53  85c9                 test ecx, ecx
// 004fab55  7408                 je 0x4fab5f
// 004fab57  8b01                 mov eax, dword ptr [ecx]
// 004fab59  8b10                 mov edx, dword ptr [eax]
// 004fab5b  6a01                 push 1
// 004fab5d  ffd2                 call edx
// 004fab5f  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004fab66  5e                   pop esi
// 004fab67  c3                   ret 
// library rbxgs-view/CylinderMesh.cpp (function ??1LevelBuilder@View@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view CylinderMesh.cpp
