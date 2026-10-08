// from server: 100% by auto
// roc 2009-06 005eee50  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005eee50
//
// 005eee50  64a100000000         mov eax, dword ptr fs:[0]
// 005eee56  6aff                 push -1
// 005eee58  683e578600           push 0x86573e
// 005eee5d  50                   push eax
// 005eee5e  b801000000           mov eax, 1
// 005eee63  64892500000000       mov dword ptr fs:[0], esp
// 005eee6a  84054491a400         test byte ptr [0xa49144], al
// 005eee70  7525                 jne 0x5eee97
// 005eee72  09054491a400         or dword ptr [0xa49144], eax
// 005eee78  b95890a400           mov ecx, 0xa49058
// 005eee7d  c744240800000000     mov dword ptr [esp + 8], 0
// 005eee85  e8a6020700           call 0x65f130
// 005eee8a  68308b8900           push 0x898b30
// 005eee8f  e867ac1200           call 0x719afb
// 005eee94  83c404               add esp, 4
// 005eee97  8b0c24               mov ecx, dword ptr [esp]
// 005eee9a  b85890a400           mov eax, 0xa49058
// 005eee9f  64890d00000000       mov dword ptr fs:[0], ecx
// 005eeea6  83c40c               add esp, 0xc
// 005eeea9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
