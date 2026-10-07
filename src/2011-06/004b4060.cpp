// roc 2011-06 004b4060  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b4060
//
// 004b4060  64a100000000         mov eax, dword ptr fs:[0]
// 004b4066  6aff                 push -1
// 004b4068  685e869d00           push 0x9d865e
// 004b406d  50                   push eax
// 004b406e  b801000000           mov eax, 1
// 004b4073  64892500000000       mov dword ptr fs:[0], esp
// 004b407a  84050458cb00         test byte ptr [0xcb5804], al
// 004b4080  7525                 jne 0x4b40a7
// 004b4082  09050458cb00         or dword ptr [0xcb5804], eax
// 004b4088  b96057cb00           mov ecx, 0xcb5760
// 004b408d  c744240800000000     mov dword ptr [esp + 8], 0
// 004b4095  e8c6e5ffff           call 0x4b2660
// 004b409a  68c024a300           push 0xa324c0
// 004b409f  e8b9703500           call 0x80b15d
// 004b40a4  83c404               add esp, 4
// 004b40a7  8b0c24               mov ecx, dword ptr [esp]
// 004b40aa  b86057cb00           mov eax, 0xcb5760
// 004b40af  64890d00000000       mov dword ptr fs:[0], ecx
// 004b40b6  83c40c               add esp, 0xc
// 004b40b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
