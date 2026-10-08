// roc 2007-08 0076ff50  unit: seg_00760000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ff50
//
// 0076ff50  b924fa8b00           mov ecx, 0x8bfa24
// 0076ff55  e8a61cd6ff           call 0x4d1c00
// 0076ff5a  a328fa8b00           mov dword ptr [0x8bfa28], eax
// 0076ff5f  c6402901             mov byte ptr [eax + 0x29], 1
// 0076ff63  a128fa8b00           mov eax, dword ptr [0x8bfa28]
// 0076ff68  894004               mov dword ptr [eax + 4], eax
// 0076ff6b  a128fa8b00           mov eax, dword ptr [0x8bfa28]
// 0076ff70  8900                 mov dword ptr [eax], eax
// 0076ff72  a128fa8b00           mov eax, dword ptr [0x8bfa28]
// 0076ff77  894008               mov dword ptr [eax + 8], eax
// 0076ff7a  68a08d7700           push 0x778da0
// 0076ff7f  c7052cfa8b0000000000 mov dword ptr [0x8bfa2c], 0
// 0076ff89  e8950decff           call 0x630d23
// 0076ff8e  59                   pop ecx
// 0076ff8f  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ??__E?textureCache@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@0V?$map@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
