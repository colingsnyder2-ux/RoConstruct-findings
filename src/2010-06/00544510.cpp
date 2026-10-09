// roc 2010-06 00544510  unit: RBX::RbxG3D::RenderScene  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00544510
//
// 00544510  51                   push ecx
// 00544511  56                   push esi
// 00544512  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00544516  c70600000000         mov dword ptr [esi], 0
// 0054451c  8b4148               mov eax, dword ptr [ecx + 0x48]
// 0054451f  50                   push eax
// 00544520  8bce                 mov ecx, esi
// 00544522  c744240800000000     mov dword ptr [esp + 8], 0
// 0054452a  e8f127f4ff           call 0x486d20
// 0054452f  8bc6                 mov eax, esi
// 00544531  5e                   pop esi
// 00544532  59                   pop ecx
// 00544533  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?dropShadowMesh@Mesh@Render@RBX@@QAE?AV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
