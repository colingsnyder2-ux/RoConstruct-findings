// roc 2009-12 005e0cd0  unit: RBX::RbxG3D::RenderScene  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e0cd0
//
// 005e0cd0  51                   push ecx
// 005e0cd1  56                   push esi
// 005e0cd2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e0cd6  c70600000000         mov dword ptr [esi], 0
// 005e0cdc  8b4148               mov eax, dword ptr [ecx + 0x48]
// 005e0cdf  50                   push eax
// 005e0ce0  8bce                 mov ecx, esi
// 005e0ce2  c744240800000000     mov dword ptr [esp + 8], 0
// 005e0cea  e80153f0ff           call 0x4e5ff0
// 005e0cef  8bc6                 mov eax, esi
// 005e0cf1  5e                   pop esi
// 005e0cf2  59                   pop ecx
// 005e0cf3  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?dropShadowMesh@Mesh@Render@RBX@@QAE?AV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
