// roc 2007-08 004de540  unit: RBX::Render::Mesh::Level  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004de540
//
// 004de540  a17cfa8b00           mov eax, dword ptr [0x8bfa7c]
// 004de545  8b4804               mov ecx, dword ptr [eax + 4]
// 004de548  51                   push ecx
// 004de549  b978fa8b00           mov ecx, 0x8bfa78
// 004de54e  e85dfbffff           call 0x4de0b0
// 004de553  a17cfa8b00           mov eax, dword ptr [0x8bfa7c]
// 004de558  894004               mov dword ptr [eax + 4], eax
// 004de55b  a17cfa8b00           mov eax, dword ptr [0x8bfa7c]
// 004de560  c70580fa8b0000000000 mov dword ptr [0x8bfa80], 0
// 004de56a  8900                 mov dword ptr [eax], eax
// 004de56c  a17cfa8b00           mov eax, dword ptr [0x8bfa7c]
// 004de571  894008               mov dword ptr [eax + 8], eax
// 004de574  c3                   ret 
// library rbxgs-view/BrickMesh.cpp (function ?flushCache@BrickMesh@View@RBX@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
