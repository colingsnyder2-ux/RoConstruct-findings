// roc 2010-06 00895a70  unit: CXTPOffice2007Image  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00895a70
//
// 00895a70  6aff                 push -1
// 00895a72  68debb9b00           push 0x9bbbde
// 00895a77  64a100000000         mov eax, dword ptr fs:[0]
// 00895a7d  50                   push eax
// 00895a7e  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00895a83  33c4                 xor eax, esp
// 00895a85  50                   push eax
// 00895a86  8d442404             lea eax, [esp + 4]
// 00895a8a  64a300000000         mov dword ptr fs:[0], eax
// 00895a90  b801000000           mov eax, 1
// 00895a95  8405a066c200         test byte ptr [0xc266a0], al
// 00895a9b  7525                 jne 0x895ac2
// 00895a9d  0905a066c200         or dword ptr [0xc266a0], eax
// 00895aa3  b95866c200           mov ecx, 0xc26658
// 00895aa8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00895ab0  e89bf7ffff           call 0x895250
// 00895ab5  6890919e00           push 0x9e9190
// 00895aba  e8a42ff1ff           call 0x7a8a63
// 00895abf  83c404               add esp, 4
// 00895ac2  b85866c200           mov eax, 0xc26658
// 00895ac7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00895acb  64890d00000000       mov dword ptr fs:[0], ecx
// 00895ad2  59                   pop ecx
// 00895ad3  83c40c               add esp, 0xc
// 00895ad6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
