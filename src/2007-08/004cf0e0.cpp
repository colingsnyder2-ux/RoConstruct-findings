// roc 2007-08 004cf0e0  unit: RBX::VSky::?$FactoryProduct::Creator  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cf0e0
//
// 004cf0e0  b9146c8900           mov ecx, 0x896c14
// 004cf0e5  e8d6fdffff           call 0x4ceec0
// 004cf0ea  6a10                 push 0x10
// 004cf0ec  6a50                 push 0x50
// 004cf0ee  c705206c890014000000 mov dword ptr [0x896c20], 0x14
// 004cf0f8  c705186c890000000000 mov dword ptr [0x896c18], 0
// 004cf102  e8590f0300           call 0x500060
// 004cf107  8b0d206c8900         mov ecx, dword ptr [0x896c20]
// 004cf10d  8d148d00000000       lea edx, [ecx*4]
// 004cf114  52                   push edx
// 004cf115  6a00                 push 0
// 004cf117  50                   push eax
// 004cf118  a31c6c8900           mov dword ptr [0x896c1c], eax
// 004cf11d  e85e140300           call 0x500580
// 004cf122  a1f8f98b00           mov eax, dword ptr [0x8bf9f8]
// 004cf127  8b4804               mov ecx, dword ptr [eax + 4]
// 004cf12a  83c414               add esp, 0x14
// 004cf12d  51                   push ecx
// 004cf12e  b9f4f98b00           mov ecx, 0x8bf9f4
// 004cf133  e8d8f3ffff           call 0x4ce510
// 004cf138  a1f8f98b00           mov eax, dword ptr [0x8bf9f8]
// 004cf13d  894004               mov dword ptr [eax + 4], eax
// 004cf140  a1f8f98b00           mov eax, dword ptr [0x8bf9f8]
// 004cf145  c705fcf98b0000000000 mov dword ptr [0x8bf9fc], 0
// 004cf14f  8900                 mov dword ptr [eax], eax
// 004cf151  a1f8f98b00           mov eax, dword ptr [0x8bf9f8]
// 004cf156  894008               mov dword ptr [eax + 8], eax
// 004cf159  c3                   ret 
// library rbxgs-view/View.cpp (function ?flushCache@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
