// roc 2007-08 004cf160  unit: RBX::VSky::?$FactoryProduct::Creator  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cf160
//
// 004cf160  b9246c8900           mov ecx, 0x896c24
// 004cf165  e8c6fdffff           call 0x4cef30
// 004cf16a  6a10                 push 0x10
// 004cf16c  6a50                 push 0x50
// 004cf16e  c705306c890014000000 mov dword ptr [0x896c30], 0x14
// 004cf178  c705286c890000000000 mov dword ptr [0x896c28], 0
// 004cf182  e8d90e0300           call 0x500060
// 004cf187  8b0d306c8900         mov ecx, dword ptr [0x896c30]
// 004cf18d  8d148d00000000       lea edx, [ecx*4]
// 004cf194  52                   push edx
// 004cf195  6a00                 push 0
// 004cf197  50                   push eax
// 004cf198  a32c6c8900           mov dword ptr [0x896c2c], eax
// 004cf19d  e8de130300           call 0x500580
// 004cf1a2  a1e0f98b00           mov eax, dword ptr [0x8bf9e0]
// 004cf1a7  8b4804               mov ecx, dword ptr [eax + 4]
// 004cf1aa  83c414               add esp, 0x14
// 004cf1ad  51                   push ecx
// 004cf1ae  b9dcf98b00           mov ecx, 0x8bf9dc
// 004cf1b3  e858f3ffff           call 0x4ce510
// 004cf1b8  a1e0f98b00           mov eax, dword ptr [0x8bf9e0]
// 004cf1bd  894004               mov dword ptr [eax + 4], eax
// 004cf1c0  a1e0f98b00           mov eax, dword ptr [0x8bf9e0]
// 004cf1c5  c705e4f98b0000000000 mov dword ptr [0x8bf9e4], 0
// 004cf1cf  8900                 mov dword ptr [eax], eax
// 004cf1d1  a1e0f98b00           mov eax, dword ptr [0x8bf9e0]
// 004cf1d6  894008               mov dword ptr [eax + 8], eax
// 004cf1d9  c3                   ret 
// library rbxgs-view/View.cpp (function ?flushCache@?$MeshFactory@VCylinderAlongXMesh@View@RBX@@$00@View@RBX@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view View.cpp
