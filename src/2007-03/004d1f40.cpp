// roc 2007-03 004d1f40  unit: seg_004d0000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004d1f40
//
// 004d1f40  a14c9f8b00           mov eax, dword ptr [0x8b9f4c]
// 004d1f45  8b4804               mov ecx, dword ptr [eax + 4]
// 004d1f48  51                   push ecx
// 004d1f49  b9489f8b00           mov ecx, 0x8b9f48
// 004d1f4e  e85dfbffff           call 0x4d1ab0
// 004d1f53  a14c9f8b00           mov eax, dword ptr [0x8b9f4c]
// 004d1f58  894004               mov dword ptr [eax + 4], eax
// 004d1f5b  a14c9f8b00           mov eax, dword ptr [0x8b9f4c]
// 004d1f60  c705509f8b0000000000 mov dword ptr [0x8b9f50], 0
// 004d1f6a  8900                 mov dword ptr [eax], eax
// 004d1f6c  a14c9f8b00           mov eax, dword ptr [0x8b9f4c]
// 004d1f71  894008               mov dword ptr [eax + 8], eax
// 004d1f74  c3                   ret 
// library rbxgs-view/BrickMesh.cpp (function ?flushCache@BrickMesh@View@RBX@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BrickMesh.cpp
