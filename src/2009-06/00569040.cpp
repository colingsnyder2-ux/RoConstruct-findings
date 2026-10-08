// from server: 100% by auto
// roc 2009-06 00569040  unit: RBX::RbxG3D::RenderScene  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00569040
//
// 00569040  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00569044  8b01                 mov eax, dword ptr [ecx]
// 00569046  8b4904               mov ecx, dword ptr [ecx + 4]
// 00569049  8d0c88               lea ecx, [eax + ecx*4]
// 0056904c  8bd1                 mov edx, ecx
// 0056904e  2bd0                 sub edx, eax
// 00569050  68c0895600           push 0x5689c0
// 00569055  c1fa02               sar edx, 2
// 00569058  52                   push edx
// 00569059  51                   push ecx
// 0056905a  50                   push eax
// 0056905b  e8a0feffff           call 0x568f00
// 00569060  83c410               add esp, 0x10
// 00569063  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
