// from server: 100% by auto
// roc 2012-06 005a79e0  unit: RBX::Image  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005a79e0
//
// 005a79e0  64a100000000         mov eax, dword ptr fs:[0]
// 005a79e6  6aff                 push -1
// 005a79e8  686e1dab00           push 0xab1d6e
// 005a79ed  50                   push eax
// 005a79ee  b801000000           mov eax, 1
// 005a79f3  64892500000000       mov dword ptr fs:[0], esp
// 005a79fa  8405805be200         test byte ptr [0xe25b80], al
// 005a7a00  7525                 jne 0x5a7a27
// 005a7a02  0905805be200         or dword ptr [0xe25b80], eax
// 005a7a08  b9685be200           mov ecx, 0xe25b68
// 005a7a0d  c744240800000000     mov dword ptr [esp + 8], 0
// 005a7a15  e8960d0200           call 0x5c87b0
// 005a7a1a  68d049b100           push 0xb149d0
// 005a7a1f  e8d1b73d00           call 0x9831f5
// 005a7a24  83c404               add esp, 4
// 005a7a27  8b0c24               mov ecx, dword ptr [esp]
// 005a7a2a  b8685be200           mov eax, 0xe25b68
// 005a7a2f  64890d00000000       mov dword ptr fs:[0], ecx
// 005a7a36  83c40c               add esp, 0xc
// 005a7a39  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
