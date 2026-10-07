// roc 2010-06 009c84b0  unit: seg_009c0000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c84b0
//
// 009c84b0  64a100000000         mov eax, dword ptr fs:[0]
// 009c84b6  6aff                 push -1
// 009c84b8  686ae39800           push 0x98e36a
// 009c84bd  50                   push eax
// 009c84be  64892500000000       mov dword ptr fs:[0], esp
// 009c84c5  68b0dc9d00           push 0x9ddcb0
// 009c84ca  e89405deff           call 0x7a8a63
// 009c84cf  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009c84d3  64890d00000000       mov dword ptr fs:[0], ecx
// 009c84da  83c410               add esp, 0x10
// 009c84dd  c3                   ret 
// library g3d-6.09/GLG3Dcpp\MD2Model.cpp (function ??__E?interpolatedFrame@MD2Model@G3D@@1VGeometry@MeshAlg@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/MD2Model.cpp
