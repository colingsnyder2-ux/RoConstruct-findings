// roc 2007-03 004c3800  unit: seg_004c0000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c3800
//
// 004c3800  b9b4518900           mov ecx, 0x8951b4
// 004c3805  e8c6fdffff           call 0x4c35d0
// 004c380a  6a10                 push 0x10
// 004c380c  6a50                 push 0x50
// 004c380e  c705c051890014000000 mov dword ptr [0x8951c0], 0x14
// 004c3818  c705b851890000000000 mov dword ptr [0x8951b8], 0
// 004c3822  e8a9030300           call 0x4f3bd0
// 004c3827  8b0dc0518900         mov ecx, dword ptr [0x8951c0]
// 004c382d  8d148d00000000       lea edx, [ecx*4]
// 004c3834  52                   push edx
// 004c3835  6a00                 push 0
// 004c3837  50                   push eax
// 004c3838  a3bc518900           mov dword ptr [0x8951bc], eax
// 004c383d  e8ae080300           call 0x4f40f0
// 004c3842  a1a89e8b00           mov eax, dword ptr [0x8b9ea8]
// 004c3847  8b4804               mov ecx, dword ptr [eax + 4]
// 004c384a  83c414               add esp, 0x14
// 004c384d  51                   push ecx
// 004c384e  b9a49e8b00           mov ecx, 0x8b9ea4
// 004c3853  e8f8440000           call 0x4c7d50
// 004c3858  a1a89e8b00           mov eax, dword ptr [0x8b9ea8]
// 004c385d  894004               mov dword ptr [eax + 4], eax
// 004c3860  a1a89e8b00           mov eax, dword ptr [0x8b9ea8]
// 004c3865  c705ac9e8b0000000000 mov dword ptr [0x8b9eac], 0
// 004c386f  8900                 mov dword ptr [eax], eax
// 004c3871  a1a89e8b00           mov eax, dword ptr [0x8b9ea8]
// 004c3876  894008               mov dword ptr [eax + 8], eax
// 004c3879  c3                   ret 
// library rbxgs-view/View.cpp (function ?flushCache@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
