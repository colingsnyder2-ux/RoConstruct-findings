// roc 2007-03 004ebb30  unit: seg_004e0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ebb30
//
// 004ebb30  51                   push ecx
// 004ebb31  56                   push esi
// 004ebb32  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ebb36  c70600000000         mov dword ptr [esi], 0
// 004ebb3c  8b4148               mov eax, dword ptr [ecx + 0x48]
// 004ebb3f  50                   push eax
// 004ebb40  8bce                 mov ecx, esi
// 004ebb42  c744240800000000     mov dword ptr [esp + 8], 0
// 004ebb4a  e84195f8ff           call 0x475090
// 004ebb4f  8bc6                 mov eax, esi
// 004ebb51  5e                   pop esi
// 004ebb52  59                   pop ecx
// 004ebb53  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?dropShadowMesh@Mesh@Render@RBX@@QAE?AV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
