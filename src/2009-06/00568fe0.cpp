// roc 2009-06 00568fe0  unit: RBX::RbxG3D::RenderScene  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00568fe0
//
// 00568fe0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00568fe4  8b01                 mov eax, dword ptr [ecx]
// 00568fe6  8b4904               mov ecx, dword ptr [ecx + 4]
// 00568fe9  8d0c88               lea ecx, [eax + ecx*4]
// 00568fec  8bd1                 mov edx, ecx
// 00568fee  2bd0                 sub edx, eax
// 00568ff0  6860895600           push 0x568960
// 00568ff5  c1fa02               sar edx, 2
// 00568ff8  52                   push edx
// 00568ff9  51                   push ecx
// 00568ffa  50                   push eax
// 00568ffb  e800ffffff           call 0x568f00
// 00569000  83c410               add esp, 0x10
// 00569003  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
