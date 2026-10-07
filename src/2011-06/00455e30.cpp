// roc 2011-06 00455e30  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00455e30
//
// 00455e30  64a100000000         mov eax, dword ptr fs:[0]
// 00455e36  6aff                 push -1
// 00455e38  682e209d00           push 0x9d202e
// 00455e3d  50                   push eax
// 00455e3e  b801000000           mov eax, 1
// 00455e43  64892500000000       mov dword ptr fs:[0], esp
// 00455e4a  8405ac31cb00         test byte ptr [0xcb31ac], al
// 00455e50  7525                 jne 0x455e77
// 00455e52  0905ac31cb00         or dword ptr [0xcb31ac], eax
// 00455e58  b90831cb00           mov ecx, 0xcb3108
// 00455e5d  c744240800000000     mov dword ptr [esp + 8], 0
// 00455e65  e876f3ffff           call 0x4551e0
// 00455e6a  68d015a300           push 0xa315d0
// 00455e6f  e8e9523b00           call 0x80b15d
// 00455e74  83c404               add esp, 4
// 00455e77  8b0c24               mov ecx, dword ptr [esp]
// 00455e7a  b80831cb00           mov eax, 0xcb3108
// 00455e7f  64890d00000000       mov dword ptr fs:[0], ecx
// 00455e86  83c40c               add esp, 0xc
// 00455e89  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
