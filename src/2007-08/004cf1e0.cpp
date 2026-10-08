// roc 2007-08 004cf1e0  unit: RBX::VSky::?$FactoryProduct::Creator  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cf1e0
//
// 004cf1e0  b9346c8900           mov ecx, 0x896c34
// 004cf1e5  e8b6fdffff           call 0x4cefa0
// 004cf1ea  6a10                 push 0x10
// 004cf1ec  6a50                 push 0x50
// 004cf1ee  c705406c890014000000 mov dword ptr [0x896c40], 0x14
// 004cf1f8  c705386c890000000000 mov dword ptr [0x896c38], 0
// 004cf202  e8590e0300           call 0x500060
// 004cf207  8b0d406c8900         mov ecx, dword ptr [0x896c40]
// 004cf20d  8d148d00000000       lea edx, [ecx*4]
// 004cf214  52                   push edx
// 004cf215  6a00                 push 0
// 004cf217  50                   push eax
// 004cf218  a33c6c8900           mov dword ptr [0x896c3c], eax
// 004cf21d  e85e130300           call 0x500580
// 004cf222  a1ecf98b00           mov eax, dword ptr [0x8bf9ec]
// 004cf227  8b4804               mov ecx, dword ptr [eax + 4]
// 004cf22a  83c414               add esp, 0x14
// 004cf22d  51                   push ecx
// 004cf22e  b9e8f98b00           mov ecx, 0x8bf9e8
// 004cf233  e8d8f2ffff           call 0x4ce510
// 004cf238  a1ecf98b00           mov eax, dword ptr [0x8bf9ec]
// 004cf23d  894004               mov dword ptr [eax + 4], eax
// 004cf240  a1ecf98b00           mov eax, dword ptr [0x8bf9ec]
// 004cf245  c705f0f98b0000000000 mov dword ptr [0x8bf9f0], 0
// 004cf24f  8900                 mov dword ptr [eax], eax
// 004cf251  a1ecf98b00           mov eax, dword ptr [0x8bf9ec]
// 004cf256  894008               mov dword ptr [eax + 8], eax
// 004cf259  c3                   ret 
// library rbxgs-view/View.cpp (function ?flushCache@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
