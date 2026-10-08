// roc 2007-03 004c3880  unit: seg_004c0000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c3880
//
// 004c3880  b9c4518900           mov ecx, 0x8951c4
// 004c3885  e8b6fdffff           call 0x4c3640
// 004c388a  6a10                 push 0x10
// 004c388c  6a50                 push 0x50
// 004c388e  c705d051890014000000 mov dword ptr [0x8951d0], 0x14
// 004c3898  c705c851890000000000 mov dword ptr [0x8951c8], 0
// 004c38a2  e829030300           call 0x4f3bd0
// 004c38a7  8b0dd0518900         mov ecx, dword ptr [0x8951d0]
// 004c38ad  8d148d00000000       lea edx, [ecx*4]
// 004c38b4  52                   push edx
// 004c38b5  6a00                 push 0
// 004c38b7  50                   push eax
// 004c38b8  a3cc518900           mov dword ptr [0x8951cc], eax
// 004c38bd  e82e080300           call 0x4f40f0
// 004c38c2  a1b49e8b00           mov eax, dword ptr [0x8b9eb4]
// 004c38c7  8b4804               mov ecx, dword ptr [eax + 4]
// 004c38ca  83c414               add esp, 0x14
// 004c38cd  51                   push ecx
// 004c38ce  b9b09e8b00           mov ecx, 0x8b9eb0
// 004c38d3  e878440000           call 0x4c7d50
// 004c38d8  a1b49e8b00           mov eax, dword ptr [0x8b9eb4]
// 004c38dd  894004               mov dword ptr [eax + 4], eax
// 004c38e0  a1b49e8b00           mov eax, dword ptr [0x8b9eb4]
// 004c38e5  c705b89e8b0000000000 mov dword ptr [0x8b9eb8], 0
// 004c38ef  8900                 mov dword ptr [eax], eax
// 004c38f1  a1b49e8b00           mov eax, dword ptr [0x8b9eb4]
// 004c38f6  894008               mov dword ptr [eax + 8], eax
// 004c38f9  c3                   ret 
// library rbxgs-view/View.cpp (function ?flushCache@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
