// roc 2007-08 004fd360  unit: RBX::Render::AggregateChunk  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fd360
//
// 004fd360  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004fd364  8b01                 mov eax, dword ptr [ecx]
// 004fd366  8b4904               mov ecx, dword ptr [ecx + 4]
// 004fd369  8d0c88               lea ecx, [eax + ecx*4]
// 004fd36c  8bd1                 mov edx, ecx
// 004fd36e  2bd0                 sub edx, eax
// 004fd370  6880cc4f00           push 0x4fcc80
// 004fd375  c1fa02               sar edx, 2
// 004fd378  52                   push edx
// 004fd379  51                   push ecx
// 004fd37a  50                   push eax
// 004fd37b  e890feffff           call 0x4fd210
// 004fd380  83c410               add esp, 0x10
// 004fd383  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ?sort@PosedModel2D@G3D@@SAXAAV?$Array@V?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
