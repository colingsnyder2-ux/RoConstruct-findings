// roc 2007-08 0076fe10  unit: seg_00760000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076fe10
//
// 0076fe10  b90cfa8b00           mov ecx, 0x8bfa0c
// 0076fe15  e8e61dd6ff           call 0x4d1c00
// 0076fe1a  a310fa8b00           mov dword ptr [0x8bfa10], eax
// 0076fe1f  c6402901             mov byte ptr [eax + 0x29], 1
// 0076fe23  a110fa8b00           mov eax, dword ptr [0x8bfa10]
// 0076fe28  894004               mov dword ptr [eax + 4], eax
// 0076fe2b  a110fa8b00           mov eax, dword ptr [0x8bfa10]
// 0076fe30  8900                 mov dword ptr [eax], eax
// 0076fe32  a110fa8b00           mov eax, dword ptr [0x8bfa10]
// 0076fe37  894008               mov dword ptr [eax + 8], eax
// 0076fe3a  68a08e7700           push 0x778ea0
// 0076fe3f  c70514fa8b0000000000 mov dword ptr [0x8bfa14], 0
// 0076fe49  e8d50eecff           call 0x630d23
// 0076fe4e  59                   pop ecx
// 0076fe4f  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ??__E?textureCache@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@0V?$map@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
