// roc 2008-06 00502a40  unit: G3D::Sphere  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00502a40
//
// 00502a40  51                   push ecx
// 00502a41  56                   push esi
// 00502a42  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00502a46  c70600000000         mov dword ptr [esi], 0
// 00502a4c  8b4148               mov eax, dword ptr [ecx + 0x48]
// 00502a4f  50                   push eax
// 00502a50  8bce                 mov ecx, esi
// 00502a52  c744240800000000     mov dword ptr [esp + 8], 0
// 00502a5a  e841650900           call 0x598fa0
// 00502a5f  8bc6                 mov eax, esi
// 00502a61  5e                   pop esi
// 00502a62  59                   pop ecx
// 00502a63  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?dropShadowMesh@Mesh@Render@RBX@@QAE?AV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
