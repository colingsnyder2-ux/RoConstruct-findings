// roc 2007-03 004c23a0  unit: seg_004c0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c23a0
//
// 004c23a0  56                   push esi
// 004c23a1  8bf1                 mov esi, ecx
// 004c23a3  8b4610               mov eax, dword ptr [esi + 0x10]
// 004c23a6  85c0                 test eax, eax
// 004c23a8  742c                 je 0x4c23d6
// 004c23aa  83c004               add eax, 4
// 004c23ad  50                   push eax
// 004c23ae  ff15a8d27700         call dword ptr [0x77d2a8]
// 004c23b4  85c0                 test eax, eax
// 004c23b6  7517                 jne 0x4c23cf
// 004c23b8  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004c23bb  e80010faff           call 0x4633c0
// 004c23c0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004c23c3  85c9                 test ecx, ecx
// 004c23c5  7408                 je 0x4c23cf
// 004c23c7  8b01                 mov eax, dword ptr [ecx]
// 004c23c9  8b10                 mov edx, dword ptr [eax]
// 004c23cb  6a01                 push 1
// 004c23cd  ffd2                 call edx
// 004c23cf  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004c23d6  5e                   pop esi
// 004c23d7  c3                   ret 
// library rbxgs-view/View.cpp (function ??1?$pair@$$CBVDecalKey@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
