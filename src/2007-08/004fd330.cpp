// roc 2007-08 004fd330  unit: RBX::Render::AggregateChunk  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fd330
//
// 004fd330  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fd334  8b01                 mov eax, dword ptr [ecx]
// 004fd336  8b4904               mov ecx, dword ptr [ecx + 4]
// 004fd339  8d0c88               lea ecx, [eax + ecx*4]
// 004fd33c  8bd1                 mov edx, ecx
// 004fd33e  2bd0                 sub edx, eax
// 004fd340  6860cc4f00           push 0x4fcc60
// 004fd345  c1fa02               sar edx, 2
// 004fd348  52                   push edx
// 004fd349  51                   push ecx
// 004fd34a  50                   push eax
// 004fd34b  e8c0feffff           call 0x4fd210
// 004fd350  83c410               add esp, 0x10
// 004fd353  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
