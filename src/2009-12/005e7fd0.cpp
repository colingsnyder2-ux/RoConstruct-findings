// roc 2009-12 005e7fd0  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e7fd0
//
// 005e7fd0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e7fd4  8b01                 mov eax, dword ptr [ecx]
// 005e7fd6  8b4904               mov ecx, dword ptr [ecx + 4]
// 005e7fd9  8d0c88               lea ecx, [eax + ecx*4]
// 005e7fdc  8bd1                 mov edx, ecx
// 005e7fde  2bd0                 sub edx, eax
// 005e7fe0  6870795e00           push 0x5e7970
// 005e7fe5  c1fa02               sar edx, 2
// 005e7fe8  52                   push edx
// 005e7fe9  51                   push ecx
// 005e7fea  50                   push eax
// 005e7feb  e8d0feffff           call 0x5e7ec0
// 005e7ff0  83c410               add esp, 0x10
// 005e7ff3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
