// roc 2007-08 0076fe50  unit: seg_00760000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076fe50
//
// 0076fe50  b948fa8b00           mov ecx, 0x8bfa48
// 0076fe55  e8a61dd6ff           call 0x4d1c00
// 0076fe5a  a34cfa8b00           mov dword ptr [0x8bfa4c], eax
// 0076fe5f  c6402901             mov byte ptr [eax + 0x29], 1
// 0076fe63  a14cfa8b00           mov eax, dword ptr [0x8bfa4c]
// 0076fe68  894004               mov dword ptr [eax + 4], eax
// 0076fe6b  a14cfa8b00           mov eax, dword ptr [0x8bfa4c]
// 0076fe70  8900                 mov dword ptr [eax], eax
// 0076fe72  a14cfa8b00           mov eax, dword ptr [0x8bfa4c]
// 0076fe77  894008               mov dword ptr [eax + 8], eax
// 0076fe7a  68608e7700           push 0x778e60
// 0076fe7f  c70550fa8b0000000000 mov dword ptr [0x8bfa50], 0
// 0076fe89  e8950eecff           call 0x630d23
// 0076fe8e  59                   pop ecx
// 0076fe8f  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ??__E?textureCache@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@0V?$map@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
