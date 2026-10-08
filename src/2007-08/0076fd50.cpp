// roc 2007-08 0076fd50  unit: seg_00760000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076fd50
//
// 0076fd50  b93cfa8b00           mov ecx, 0x8bfa3c
// 0076fd55  e8a61ed6ff           call 0x4d1c00
// 0076fd5a  a340fa8b00           mov dword ptr [0x8bfa40], eax
// 0076fd5f  c6402901             mov byte ptr [eax + 0x29], 1
// 0076fd63  a140fa8b00           mov eax, dword ptr [0x8bfa40]
// 0076fd68  894004               mov dword ptr [eax + 4], eax
// 0076fd6b  a140fa8b00           mov eax, dword ptr [0x8bfa40]
// 0076fd70  8900                 mov dword ptr [eax], eax
// 0076fd72  a140fa8b00           mov eax, dword ptr [0x8bfa40]
// 0076fd77  894008               mov dword ptr [eax + 8], eax
// 0076fd7a  68208f7700           push 0x778f20
// 0076fd7f  c70544fa8b0000000000 mov dword ptr [0x8bfa44], 0
// 0076fd89  e8950fecff           call 0x630d23
// 0076fd8e  59                   pop ecx
// 0076fd8f  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ??__E?textureCache@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@0V?$map@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
