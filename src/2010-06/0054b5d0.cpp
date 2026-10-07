// roc 2010-06 0054b5d0  unit: RBX::AggregateChunk  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054b5d0
//
// 0054b5d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0054b5d4  8b01                 mov eax, dword ptr [ecx]
// 0054b5d6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0054b5d9  8d0c88               lea ecx, [eax + ecx*4]
// 0054b5dc  8bd1                 mov edx, ecx
// 0054b5de  2bd0                 sub edx, eax
// 0054b5e0  6860af5400           push 0x54af60
// 0054b5e5  c1fa02               sar edx, 2
// 0054b5e8  52                   push edx
// 0054b5e9  51                   push ecx
// 0054b5ea  50                   push eax
// 0054b5eb  e8a0feffff           call 0x54b490
// 0054b5f0  83c410               add esp, 0x10
// 0054b5f3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
