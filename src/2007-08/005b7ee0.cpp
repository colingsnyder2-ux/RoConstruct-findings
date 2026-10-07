// roc 2007-08 005b7ee0  unit: RBX::$01::?$SurfaceDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7ee0
//
// 005b7ee0  64a100000000         mov eax, dword ptr fs:[0]
// 005b7ee6  6aff                 push -1
// 005b7ee8  681e927500           push 0x75921e
// 005b7eed  50                   push eax
// 005b7eee  b801000000           mov eax, 1
// 005b7ef3  64892500000000       mov dword ptr fs:[0], esp
// 005b7efa  840598618c00         test byte ptr [0x8c6198], al
// 005b7f00  7525                 jne 0x5b7f27
// 005b7f02  090598618c00         or dword ptr [0x8c6198], eax
// 005b7f08  b900618c00           mov ecx, 0x8c6100
// 005b7f0d  c744240800000000     mov dword ptr [esp + 8], 0
// 005b7f15  e876b30200           call 0x5e3290
// 005b7f1a  68a0bb7700           push 0x77bba0
// 005b7f1f  e8ff8d0700           call 0x630d23
// 005b7f24  83c404               add esp, 4
// 005b7f27  8b0c24               mov ecx, dword ptr [esp]
// 005b7f2a  b800618c00           mov eax, 0x8c6100
// 005b7f2f  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7f36  83c40c               add esp, 0xc
// 005b7f39  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
