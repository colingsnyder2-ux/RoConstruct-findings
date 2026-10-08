// from server: 100% by auto
// roc 2010-06 0054b5a0  unit: RBX::AggregateChunk  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b5a0
//
// 0054b5a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0054b5a4  8b01                 mov eax, dword ptr [ecx]
// 0054b5a6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0054b5a9  8d0c88               lea ecx, [eax + ecx*4]
// 0054b5ac  8bd1                 mov edx, ecx
// 0054b5ae  2bd0                 sub edx, eax
// 0054b5b0  6840af5400           push 0x54af40
// 0054b5b5  c1fa02               sar edx, 2
// 0054b5b8  52                   push edx
// 0054b5b9  51                   push ecx
// 0054b5ba  50                   push eax
// 0054b5bb  e8d0feffff           call 0x54b490
// 0054b5c0  83c410               add esp, 0x10
// 0054b5c3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
