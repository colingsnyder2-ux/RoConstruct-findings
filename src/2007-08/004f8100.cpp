// roc 2007-08 004f8100  unit: G3D::Sphere  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f8100
//
// 004f8100  51                   push ecx
// 004f8101  56                   push esi
// 004f8102  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f8106  c70600000000         mov dword ptr [esi], 0
// 004f810c  8b4148               mov eax, dword ptr [ecx + 0x48]
// 004f810f  50                   push eax
// 004f8110  8bce                 mov ecx, esi
// 004f8112  c744240800000000     mov dword ptr [esp + 8], 0
// 004f811a  e851cef7ff           call 0x474f70
// 004f811f  8bc6                 mov eax, esi
// 004f8121  5e                   pop esi
// 004f8122  59                   pop ecx
// 004f8123  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?dropShadowMesh@Mesh@Render@RBX@@QAE?AV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
