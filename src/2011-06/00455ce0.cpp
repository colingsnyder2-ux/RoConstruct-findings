// roc 2011-06 00455ce0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00455ce0
//
// 00455ce0  64a100000000         mov eax, dword ptr fs:[0]
// 00455ce6  6aff                 push -1
// 00455ce8  68ce1f9d00           push 0x9d1fce
// 00455ced  50                   push eax
// 00455cee  b801000000           mov eax, 1
// 00455cf3  64892500000000       mov dword ptr fs:[0], esp
// 00455cfa  8405b42fcb00         test byte ptr [0xcb2fb4], al
// 00455d00  7525                 jne 0x455d27
// 00455d02  0905b42fcb00         or dword ptr [0xcb2fb4], eax
// 00455d08  b9102fcb00           mov ecx, 0xcb2f10
// 00455d0d  c744240800000000     mov dword ptr [esp + 8], 0
// 00455d15  e826f7ffff           call 0x455440
// 00455d1a  680016a300           push 0xa31600
// 00455d1f  e839543b00           call 0x80b15d
// 00455d24  83c404               add esp, 4
// 00455d27  8b0c24               mov ecx, dword ptr [esp]
// 00455d2a  b8102fcb00           mov eax, 0xcb2f10
// 00455d2f  64890d00000000       mov dword ptr fs:[0], ecx
// 00455d36  83c40c               add esp, 0xc
// 00455d39  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
