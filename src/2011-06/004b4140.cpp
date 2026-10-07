// roc 2011-06 004b4140  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004b4140
//
// 004b4140  64a100000000         mov eax, dword ptr fs:[0]
// 004b4146  6aff                 push -1
// 004b4148  689e869d00           push 0x9d869e
// 004b414d  50                   push eax
// 004b414e  b801000000           mov eax, 1
// 004b4153  64892500000000       mov dword ptr fs:[0], esp
// 004b415a  84055459cb00         test byte ptr [0xcb5954], al
// 004b4160  7525                 jne 0x4b4187
// 004b4162  09055459cb00         or dword ptr [0xcb5954], eax
// 004b4168  b9b058cb00           mov ecx, 0xcb58b0
// 004b416d  c744240800000000     mov dword ptr [esp + 8], 0
// 004b4175  e896e7ffff           call 0x4b2910
// 004b417a  68a024a300           push 0xa324a0
// 004b417f  e8d96f3500           call 0x80b15d
// 004b4184  83c404               add esp, 4
// 004b4187  8b0c24               mov ecx, dword ptr [esp]
// 004b418a  b8b058cb00           mov eax, 0xcb58b0
// 004b418f  64890d00000000       mov dword ptr fs:[0], ecx
// 004b4196  83c40c               add esp, 0xc
// 004b4199  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
