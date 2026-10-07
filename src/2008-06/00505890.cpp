// roc 2008-06 00505890  unit: RBX::Render::RenderScene  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505890
//
// 00505890  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00505894  8b01                 mov eax, dword ptr [ecx]
// 00505896  8b4904               mov ecx, dword ptr [ecx + 4]
// 00505899  8d0c88               lea ecx, [eax + ecx*4]
// 0050589c  8bd1                 mov edx, ecx
// 0050589e  2bd0                 sub edx, eax
// 005058a0  6820525000           push 0x505220
// 005058a5  c1fa02               sar edx, 2
// 005058a8  52                   push edx
// 005058a9  51                   push ecx
// 005058aa  50                   push eax
// 005058ab  e8d0feffff           call 0x505780
// 005058b0  83c410               add esp, 0x10
// 005058b3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
