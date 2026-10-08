// from server: 100% by auto
// roc 2008-06 005058c0  unit: RBX::Render::RenderScene  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005058c0
//
// 005058c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005058c4  8b01                 mov eax, dword ptr [ecx]
// 005058c6  8b4904               mov ecx, dword ptr [ecx + 4]
// 005058c9  8d0c88               lea ecx, [eax + ecx*4]
// 005058cc  8bd1                 mov edx, ecx
// 005058ce  2bd0                 sub edx, eax
// 005058d0  6840525000           push 0x505240
// 005058d5  c1fa02               sar edx, 2
// 005058d8  52                   push edx
// 005058d9  51                   push ecx
// 005058da  50                   push eax
// 005058db  e8a0feffff           call 0x505780
// 005058e0  83c410               add esp, 0x10
// 005058e3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
