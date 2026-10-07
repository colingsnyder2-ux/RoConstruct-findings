// roc 2009-06 00569010  unit: RBX::RbxG3D::RenderScene  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00569010
//
// 00569010  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00569014  8b01                 mov eax, dword ptr [ecx]
// 00569016  8b4904               mov ecx, dword ptr [ecx + 4]
// 00569019  8d0c88               lea ecx, [eax + ecx*4]
// 0056901c  8bd1                 mov edx, ecx
// 0056901e  2bd0                 sub edx, eax
// 00569020  68a0895600           push 0x5689a0
// 00569025  c1fa02               sar edx, 2
// 00569028  52                   push edx
// 00569029  51                   push ecx
// 0056902a  50                   push eax
// 0056902b  e8d0feffff           call 0x568f00
// 00569030  83c410               add esp, 0x10
// 00569033  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
