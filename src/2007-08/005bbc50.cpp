// roc 2007-08 005bbc50  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bbc50
//
// 005bbc50  64a100000000         mov eax, dword ptr fs:[0]
// 005bbc56  6aff                 push -1
// 005bbc58  682e947500           push 0x75942e
// 005bbc5d  50                   push eax
// 005bbc5e  b801000000           mov eax, 1
// 005bbc63  64892500000000       mov dword ptr fs:[0], esp
// 005bbc6a  840598678c00         test byte ptr [0x8c6798], al
// 005bbc70  7525                 jne 0x5bbc97
// 005bbc72  090598678c00         or dword ptr [0x8c6798], eax
// 005bbc78  b900678c00           mov ecx, 0x8c6700
// 005bbc7d  c744240800000000     mov dword ptr [esp + 8], 0
// 005bbc85  e8e6770200           call 0x5e3470
// 005bbc8a  6850bc7700           push 0x77bc50
// 005bbc8f  e88f500700           call 0x630d23
// 005bbc94  83c404               add esp, 4
// 005bbc97  8b0c24               mov ecx, dword ptr [esp]
// 005bbc9a  b800678c00           mov eax, 0x8c6700
// 005bbc9f  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbca6  83c40c               add esp, 0xc
// 005bbca9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
