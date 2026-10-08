// from server: 100% by auto
// roc 2008-06 0059c430  unit: RBX::PartInstance  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059c430
//
// 0059c430  64a100000000         mov eax, dword ptr fs:[0]
// 0059c436  6aff                 push -1
// 0059c438  682e267d00           push 0x7d262e
// 0059c43d  50                   push eax
// 0059c43e  b801000000           mov eax, 1
// 0059c443  64892500000000       mov dword ptr fs:[0], esp
// 0059c44a  840588649700         test byte ptr [0x976488], al
// 0059c450  7525                 jne 0x59c477
// 0059c452  090588649700         or dword ptr [0x976488], eax
// 0059c458  b9a0639700           mov ecx, 0x9763a0
// 0059c45d  c744240800000000     mov dword ptr [esp + 8], 0
// 0059c465  e896890700           call 0x614e00
// 0059c46a  6890de7f00           push 0x7fde90
// 0059c46f  e83b531000           call 0x6a17af
// 0059c474  83c404               add esp, 4
// 0059c477  8b0c24               mov ecx, dword ptr [esp]
// 0059c47a  b8a0639700           mov eax, 0x9763a0
// 0059c47f  64890d00000000       mov dword ptr fs:[0], ecx
// 0059c486  83c40c               add esp, 0xc
// 0059c489  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
