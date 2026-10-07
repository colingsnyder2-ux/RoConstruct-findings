// roc 2010-06 0054b570  unit: RBX::AggregateChunk  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b570
//
// 0054b570  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0054b574  8b01                 mov eax, dword ptr [ecx]
// 0054b576  8b4904               mov ecx, dword ptr [ecx + 4]
// 0054b579  8d0c88               lea ecx, [eax + ecx*4]
// 0054b57c  8bd1                 mov edx, ecx
// 0054b57e  2bd0                 sub edx, eax
// 0054b580  6810af5400           push 0x54af10
// 0054b585  c1fa02               sar edx, 2
// 0054b588  52                   push edx
// 0054b589  51                   push ecx
// 0054b58a  50                   push eax
// 0054b58b  e800ffffff           call 0x54b490
// 0054b590  83c410               add esp, 0x10
// 0054b593  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
