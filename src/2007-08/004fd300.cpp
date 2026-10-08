// from server: 100% by auto
// roc 2007-08 004fd300  unit: RBX::Render::AggregateChunk  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fd300
//
// 004fd300  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fd304  8b01                 mov eax, dword ptr [ecx]
// 004fd306  8b4904               mov ecx, dword ptr [ecx + 4]
// 004fd309  8d0c88               lea ecx, [eax + ecx*4]
// 004fd30c  8bd1                 mov edx, ecx
// 004fd30e  2bd0                 sub edx, eax
// 004fd310  6820cc4f00           push 0x4fcc20
// 004fd315  c1fa02               sar edx, 2
// 004fd318  52                   push edx
// 004fd319  51                   push ecx
// 004fd31a  50                   push eax
// 004fd31b  e8f0feffff           call 0x4fd210
// 004fd320  83c410               add esp, 0x10
// 004fd323  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
