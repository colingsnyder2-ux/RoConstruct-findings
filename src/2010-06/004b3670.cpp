// roc 2010-06 004b3670  unit: rbx::signals::Z::$$A6AXN::?$signal::slot  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b3670
//
// 004b3670  64a100000000         mov eax, dword ptr fs:[0]
// 004b3676  6aff                 push -1
// 004b3678  680e8f9800           push 0x988f0e
// 004b367d  50                   push eax
// 004b367e  b801000000           mov eax, 1
// 004b3683  64892500000000       mov dword ptr fs:[0], esp
// 004b368a  8405c443c000         test byte ptr [0xc043c4], al
// 004b3690  7525                 jne 0x4b36b7
// 004b3692  0905c443c000         or dword ptr [0xc043c4], eax
// 004b3698  b9d842c000           mov ecx, 0xc042d8
// 004b369d  c744240800000000     mov dword ptr [esp + 8], 0
// 004b36a5  e856d9ffff           call 0x4b1000
// 004b36aa  68e0c29d00           push 0x9dc2e0
// 004b36af  e8af532f00           call 0x7a8a63
// 004b36b4  83c404               add esp, 4
// 004b36b7  8b0c24               mov ecx, dword ptr [esp]
// 004b36ba  b8d842c000           mov eax, 0xc042d8
// 004b36bf  64890d00000000       mov dword ptr fs:[0], ecx
// 004b36c6  83c40c               add esp, 0xc
// 004b36c9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
