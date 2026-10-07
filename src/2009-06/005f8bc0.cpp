// roc 2009-06 005f8bc0  unit: RBX::Reflection::EnumDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f8bc0
//
// 005f8bc0  64a100000000         mov eax, dword ptr fs:[0]
// 005f8bc6  6aff                 push -1
// 005f8bc8  68ee618600           push 0x8661ee
// 005f8bcd  50                   push eax
// 005f8bce  b801000000           mov eax, 1
// 005f8bd3  64892500000000       mov dword ptr fs:[0], esp
// 005f8bda  840560a8a400         test byte ptr [0xa4a860], al
// 005f8be0  7525                 jne 0x5f8c07
// 005f8be2  090560a8a400         or dword ptr [0xa4a860], eax
// 005f8be8  b948a8a400           mov ecx, 0xa4a848
// 005f8bed  c744240800000000     mov dword ptr [esp + 8], 0
// 005f8bf5  e8161a0600           call 0x65a610
// 005f8bfa  6860948900           push 0x899460
// 005f8bff  e8f70e1200           call 0x719afb
// 005f8c04  83c404               add esp, 4
// 005f8c07  8b0c24               mov ecx, dword ptr [esp]
// 005f8c0a  b848a8a400           mov eax, 0xa4a848
// 005f8c0f  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8c16  83c40c               add esp, 0xc
// 005f8c19  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
