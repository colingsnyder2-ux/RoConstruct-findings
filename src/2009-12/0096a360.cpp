// roc 2009-12 0096a360  unit: seg_00960000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0096a360
//
// 0096a360  6a10                 push 0x10
// 0096a362  6a28                 push 0x28
// 0096a364  e857ffc7ff           call 0x5ea2c0
// 0096a369  8b0d4010b100         mov ecx, dword ptr [0xb11040]
// 0096a36f  8d148d00000000       lea edx, [ecx*4]
// 0096a376  52                   push edx
// 0096a377  6a00                 push 0
// 0096a379  50                   push eax
// 0096a37a  a33c10b100           mov dword ptr [0xb1103c], eax
// 0096a37f  e83c0cc8ff           call 0x5eafc0
// 0096a384  6810f09700           push 0x97f010
// 0096a389  e89ba5e8ff           call 0x7f4929
// 0096a38e  83c418               add esp, 0x18
// 0096a391  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgAdjacency.cpp (function ??__EedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgAdjacency.cpp
