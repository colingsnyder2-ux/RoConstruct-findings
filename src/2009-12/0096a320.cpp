// roc 2009-12 0096a320  unit: seg_00960000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a320
//
// 0096a320  6a10                 push 0x10
// 0096a322  6a28                 push 0x28
// 0096a324  e897ffc7ff           call 0x5ea2c0
// 0096a329  8b0d2c10b100         mov ecx, dword ptr [0xb1102c]
// 0096a32f  8d148d00000000       lea edx, [ecx*4]
// 0096a336  52                   push edx
// 0096a337  6a00                 push 0
// 0096a339  50                   push eax
// 0096a33a  a32810b100           mov dword ptr [0xb11028], eax
// 0096a33f  e87c0cc8ff           call 0x5eafc0
// 0096a344  68f0ef9700           push 0x97eff0
// 0096a349  e8dba5e8ff           call 0x7f4929
// 0096a34e  83c418               add esp, 0x18
// 0096a351  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgAdjacency.cpp (function ??__EedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgAdjacency.cpp
