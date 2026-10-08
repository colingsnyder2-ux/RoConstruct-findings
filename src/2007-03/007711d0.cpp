// roc 2007-03 007711d0  unit: seg_00770000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007711d0
//
// 007711d0  6aff                 push -1
// 007711d2  688aed7400           push 0x74ed8a
// 007711d7  64a100000000         mov eax, dword ptr fs:[0]
// 007711dd  50                   push eax
// 007711de  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 007711e3  33c4                 xor eax, esp
// 007711e5  50                   push eax
// 007711e6  8d442404             lea eax, [esp + 4]
// 007711ea  64a300000000         mov dword ptr fs:[0], eax
// 007711f0  6800917700           push 0x779100
// 007711f5  e8b9dfeaff           call 0x61f1b3
// 007711fa  83c404               add esp, 4
// 007711fd  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00771201  64890d00000000       mov dword ptr fs:[0], ecx
// 00771208  59                   pop ecx
// 00771209  83c40c               add esp, 0xc
// 0077120c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\MD2Model.cpp (function ??__E?interpolatedFrame@MD2Model@G3D@@1VGeometry@MeshAlg@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/MD2Model.cpp
