// roc 2007-08 0058bc50  unit: RBX::Stats::I::?$TypedStatsItem  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058bc50
//
// 0058bc50  64a100000000         mov eax, dword ptr fs:[0]
// 0058bc56  6aff                 push -1
// 0058bc58  681e647500           push 0x75641e
// 0058bc5d  50                   push eax
// 0058bc5e  b801000000           mov eax, 1
// 0058bc63  64892500000000       mov dword ptr fs:[0], esp
// 0058bc6a  840548378c00         test byte ptr [0x8c3748], al
// 0058bc70  7525                 jne 0x58bc97
// 0058bc72  090548378c00         or dword ptr [0x8c3748], eax
// 0058bc78  b9b0368c00           mov ecx, 0x8c36b0
// 0058bc7d  c744240800000000     mov dword ptr [esp + 8], 0
// 0058bc85  e806bb0500           call 0x5e7790
// 0058bc8a  68a0a87700           push 0x77a8a0
// 0058bc8f  e88f500a00           call 0x630d23
// 0058bc94  83c404               add esp, 4
// 0058bc97  8b0c24               mov ecx, dword ptr [esp]
// 0058bc9a  b8b0368c00           mov eax, 0x8c36b0
// 0058bc9f  64890d00000000       mov dword ptr fs:[0], ecx
// 0058bca6  83c40c               add esp, 0xc
// 0058bca9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
