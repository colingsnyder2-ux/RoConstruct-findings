// roc 2012-06 00695720  unit: RBX::W4SoundType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00695720
//
// 00695720  64a100000000         mov eax, dword ptr fs:[0]
// 00695726  6aff                 push -1
// 00695728  68ce6bab00           push 0xab6bce
// 0069572d  50                   push eax
// 0069572e  b801000000           mov eax, 1
// 00695733  64892500000000       mov dword ptr fs:[0], esp
// 0069573a  840594c6e200         test byte ptr [0xe2c694], al
// 00695740  7525                 jne 0x695767
// 00695742  090594c6e200         or dword ptr [0xe2c694], eax
// 00695748  b9e8c5e200           mov ecx, 0xe2c5e8
// 0069574d  c744240800000000     mov dword ptr [esp + 8], 0
// 00695755  e876be1900           call 0x8315d0
// 0069575a  68905fb100           push 0xb15f90
// 0069575f  e891da2e00           call 0x9831f5
// 00695764  83c404               add esp, 4
// 00695767  8b0c24               mov ecx, dword ptr [esp]
// 0069576a  b8e8c5e200           mov eax, 0xe2c5e8
// 0069576f  64890d00000000       mov dword ptr fs:[0], ecx
// 00695776  83c40c               add esp, 0xc
// 00695779  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
