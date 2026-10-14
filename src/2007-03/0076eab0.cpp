// roc 2007-03 0076eab0  unit: seg_00760000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0076eab0
//
// 0076eab0  6a10                 push 0x10
// 0076eab2  6a28                 push 0x28
// 0076eab4  e81751d8ff           call 0x4f3bd0
// 0076eab9  8b0d909c8800         mov ecx, dword ptr [0x889c90]
// 0076eabf  8d148d00000000       lea edx, [ecx*4]
// 0076eac6  52                   push edx
// 0076eac7  6a00                 push 0
// 0076eac9  50                   push eax
// 0076eaca  a38c9c8800           mov dword ptr [0x889c8c], eax
// 0076eacf  e81c56d8ff           call 0x4f40f0
// 0076ead4  6810807700           push 0x778010
// 0076ead9  e8d506ebff           call 0x61f1b3
// 0076eade  83c418               add esp, 0x18
// 0076eae1  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgAdjacency.cpp (function ??__EedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgAdjacency.cpp
