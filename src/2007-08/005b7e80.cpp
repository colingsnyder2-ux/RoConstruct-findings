// roc 2007-08 005b7e80  unit: RBX::$01::?$SurfaceDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7e80
//
// 005b7e80  64a100000000         mov eax, dword ptr fs:[0]
// 005b7e86  6aff                 push -1
// 005b7e88  68fe917500           push 0x7591fe
// 005b7e8d  50                   push eax
// 005b7e8e  b801000000           mov eax, 1
// 005b7e93  64892500000000       mov dword ptr fs:[0], esp
// 005b7e9a  8405f8608c00         test byte ptr [0x8c60f8], al
// 005b7ea0  7525                 jne 0x5b7ec7
// 005b7ea2  0905f8608c00         or dword ptr [0x8c60f8], eax
// 005b7ea8  b960608c00           mov ecx, 0x8c6060
// 005b7ead  c744240800000000     mov dword ptr [esp + 8], 0
// 005b7eb5  e826690500           call 0x60e7e0
// 005b7eba  68b0bb7700           push 0x77bbb0
// 005b7ebf  e85f8e0700           call 0x630d23
// 005b7ec4  83c404               add esp, 4
// 005b7ec7  8b0c24               mov ecx, dword ptr [esp]
// 005b7eca  b860608c00           mov eax, 0x8c6060
// 005b7ecf  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7ed6  83c40c               add esp, 0xc
// 005b7ed9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
