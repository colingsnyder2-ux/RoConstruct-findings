// roc 2007-08 0076fc90  unit: seg_00760000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076fc90
//
// 0076fc90  b954fa8b00           mov ecx, 0x8bfa54
// 0076fc95  e8661fd6ff           call 0x4d1c00
// 0076fc9a  a358fa8b00           mov dword ptr [0x8bfa58], eax
// 0076fc9f  c6402901             mov byte ptr [eax + 0x29], 1
// 0076fca3  a158fa8b00           mov eax, dword ptr [0x8bfa58]
// 0076fca8  894004               mov dword ptr [eax + 4], eax
// 0076fcab  a158fa8b00           mov eax, dword ptr [0x8bfa58]
// 0076fcb0  8900                 mov dword ptr [eax], eax
// 0076fcb2  a158fa8b00           mov eax, dword ptr [0x8bfa58]
// 0076fcb7  894008               mov dword ptr [eax + 8], eax
// 0076fcba  68a08f7700           push 0x778fa0
// 0076fcbf  c7055cfa8b0000000000 mov dword ptr [0x8bfa5c], 0
// 0076fcc9  e85510ecff           call 0x630d23
// 0076fcce  59                   pop ecx
// 0076fccf  c3                   ret 
// library openrbx-client/RbxView\PBBMesh.cpp (function ??__E?textureCache@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@0V?$map@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@@std@@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
