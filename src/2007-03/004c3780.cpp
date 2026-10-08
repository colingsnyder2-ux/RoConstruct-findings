// roc 2007-03 004c3780  unit: seg_004c0000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c3780
//
// 004c3780  b9a4518900           mov ecx, 0x8951a4
// 004c3785  e8d6fdffff           call 0x4c3560
// 004c378a  6a10                 push 0x10
// 004c378c  6a50                 push 0x50
// 004c378e  c705b051890014000000 mov dword ptr [0x8951b0], 0x14
// 004c3798  c705a851890000000000 mov dword ptr [0x8951a8], 0
// 004c37a2  e829040300           call 0x4f3bd0
// 004c37a7  8b0db0518900         mov ecx, dword ptr [0x8951b0]
// 004c37ad  8d148d00000000       lea edx, [ecx*4]
// 004c37b4  52                   push edx
// 004c37b5  6a00                 push 0
// 004c37b7  50                   push eax
// 004c37b8  a3ac518900           mov dword ptr [0x8951ac], eax
// 004c37bd  e82e090300           call 0x4f40f0
// 004c37c2  a1c09e8b00           mov eax, dword ptr [0x8b9ec0]
// 004c37c7  8b4804               mov ecx, dword ptr [eax + 4]
// 004c37ca  83c414               add esp, 0x14
// 004c37cd  51                   push ecx
// 004c37ce  b9bc9e8b00           mov ecx, 0x8b9ebc
// 004c37d3  e878450000           call 0x4c7d50
// 004c37d8  a1c09e8b00           mov eax, dword ptr [0x8b9ec0]
// 004c37dd  894004               mov dword ptr [eax + 4], eax
// 004c37e0  a1c09e8b00           mov eax, dword ptr [0x8b9ec0]
// 004c37e5  c705c49e8b0000000000 mov dword ptr [0x8b9ec4], 0
// 004c37ef  8900                 mov dword ptr [eax], eax
// 004c37f1  a1c09e8b00           mov eax, dword ptr [0x8b9ec0]
// 004c37f6  894008               mov dword ptr [eax + 8], eax
// 004c37f9  c3                   ret 
// library rbxgs-view/View.cpp (function ?flushCache@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
