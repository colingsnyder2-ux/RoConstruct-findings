// roc 2009-06 005663c0  unit: RBX::RbxG3D::RenderScene  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005663c0
//
// 005663c0  51                   push ecx
// 005663c1  56                   push esi
// 005663c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005663c6  c70600000000         mov dword ptr [esi], 0
// 005663cc  8b4148               mov eax, dword ptr [ecx + 0x48]
// 005663cf  50                   push eax
// 005663d0  8bce                 mov ecx, esi
// 005663d2  c744240800000000     mov dword ptr [esp + 8], 0
// 005663da  e88194f3ff           call 0x49f860
// 005663df  8bc6                 mov eax, esi
// 005663e1  5e                   pop esi
// 005663e2  59                   pop ecx
// 005663e3  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?dropShadowMesh@Mesh@Render@RBX@@QAE?AV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
