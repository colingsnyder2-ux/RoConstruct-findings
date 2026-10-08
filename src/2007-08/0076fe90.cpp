// roc 2007-08 0076fe90  unit: seg_00760000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076fe90
//
// 0076fe90  b900fa8b00           mov ecx, 0x8bfa00
// 0076fe95  e8661dd6ff           call 0x4d1c00
// 0076fe9a  a304fa8b00           mov dword ptr [0x8bfa04], eax
// 0076fe9f  c6402901             mov byte ptr [eax + 0x29], 1
// 0076fea3  a104fa8b00           mov eax, dword ptr [0x8bfa04]
// 0076fea8  894004               mov dword ptr [eax + 4], eax
// 0076feab  a104fa8b00           mov eax, dword ptr [0x8bfa04]
// 0076feb0  8900                 mov dword ptr [eax], eax
// 0076feb2  a104fa8b00           mov eax, dword ptr [0x8bfa04]
// 0076feb7  894008               mov dword ptr [eax + 8], eax
// 0076feba  68208e7700           push 0x778e20
// 0076febf  c70508fa8b0000000000 mov dword ptr [0x8bfa08], 0
// 0076fec9  e8550eecff           call 0x630d23
// 0076fece  59                   pop ecx
// 0076fecf  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ??__E?textureCache@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@0V?$map@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
