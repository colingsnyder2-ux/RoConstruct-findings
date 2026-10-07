// roc 2010-06 0044ac00  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044ac00
//
// 0044ac00  64a100000000         mov eax, dword ptr fs:[0]
// 0044ac06  6aff                 push -1
// 0044ac08  689e169800           push 0x98169e
// 0044ac0d  50                   push eax
// 0044ac0e  b801000000           mov eax, 1
// 0044ac13  64892500000000       mov dword ptr fs:[0], esp
// 0044ac1a  8405ec11c000         test byte ptr [0xc011ec], al
// 0044ac20  7525                 jne 0x44ac47
// 0044ac22  0905ec11c000         or dword ptr [0xc011ec], eax
// 0044ac28  b90011c000           mov ecx, 0xc01100
// 0044ac2d  c744240800000000     mov dword ptr [esp + 8], 0
// 0044ac35  e816f5ffff           call 0x44a150
// 0044ac3a  68e0b79d00           push 0x9db7e0
// 0044ac3f  e81fde3500           call 0x7a8a63
// 0044ac44  83c404               add esp, 4
// 0044ac47  8b0c24               mov ecx, dword ptr [esp]
// 0044ac4a  b80011c000           mov eax, 0xc01100
// 0044ac4f  64890d00000000       mov dword ptr fs:[0], ecx
// 0044ac56  83c40c               add esp, 0xc
// 0044ac59  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
