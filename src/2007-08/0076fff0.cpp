// roc 2007-08 0076fff0  unit: seg_00760000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076fff0
//
// 0076fff0  6aff                 push -1
// 0076fff2  684adf7400           push 0x74df4a
// 0076fff7  64a100000000         mov eax, dword ptr fs:[0]
// 0076fffd  50                   push eax
// 0076fffe  a188518b00           mov eax, dword ptr [0x8b5188]
// 00770003  33c4                 xor eax, esp
// 00770005  50                   push eax
// 00770006  8d442404             lea eax, [esp + 4]
// 0077000a  64a300000000         mov dword ptr fs:[0], eax
// 00770010  68d0907700           push 0x7790d0
// 00770015  e8090decff           call 0x630d23
// 0077001a  83c404               add esp, 4
// 0077001d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00770021  64890d00000000       mov dword ptr fs:[0], ecx
// 00770028  59                   pop ecx
// 00770029  83c40c               add esp, 0xc
// 0077002c  c3                   ret 
// library g3d-6.09/GLG3Dcpp\MD2Model.cpp (function ??__E?interpolatedFrame@MD2Model@G3D@@1VGeometry@MeshAlg@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/MD2Model.cpp
