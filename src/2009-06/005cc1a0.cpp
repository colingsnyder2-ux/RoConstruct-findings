// roc 2009-06 005cc1a0  unit: RBX::EThrottle::W4EThrottleType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cc1a0
//
// 005cc1a0  64a100000000         mov eax, dword ptr fs:[0]
// 005cc1a6  6aff                 push -1
// 005cc1a8  68ee238600           push 0x8623ee
// 005cc1ad  50                   push eax
// 005cc1ae  b801000000           mov eax, 1
// 005cc1b3  64892500000000       mov dword ptr fs:[0], esp
// 005cc1ba  8405ec31a400         test byte ptr [0xa431ec], al
// 005cc1c0  7525                 jne 0x5cc1e7
// 005cc1c2  0905ec31a400         or dword ptr [0xa431ec], eax
// 005cc1c8  b90031a400           mov ecx, 0xa43100
// 005cc1cd  c744240800000000     mov dword ptr [esp + 8], 0
// 005cc1d5  e8c6f2ffff           call 0x5cb4a0
// 005cc1da  6820728900           push 0x897220
// 005cc1df  e817d91400           call 0x719afb
// 005cc1e4  83c404               add esp, 4
// 005cc1e7  8b0c24               mov ecx, dword ptr [esp]
// 005cc1ea  b80031a400           mov eax, 0xa43100
// 005cc1ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005cc1f6  83c40c               add esp, 0xc
// 005cc1f9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
