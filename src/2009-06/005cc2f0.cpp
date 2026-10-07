// roc 2009-06 005cc2f0  unit: RBX::EThrottle::W4EThrottleType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cc2f0
//
// 005cc2f0  64a100000000         mov eax, dword ptr fs:[0]
// 005cc2f6  6aff                 push -1
// 005cc2f8  684e248600           push 0x86244e
// 005cc2fd  50                   push eax
// 005cc2fe  b801000000           mov eax, 1
// 005cc303  64892500000000       mov dword ptr fs:[0], esp
// 005cc30a  8405bc34a400         test byte ptr [0xa434bc], al
// 005cc310  7525                 jne 0x5cc337
// 005cc312  0905bc34a400         or dword ptr [0xa434bc], eax
// 005cc318  b9d033a400           mov ecx, 0xa433d0
// 005cc31d  c744240800000000     mov dword ptr [esp + 8], 0
// 005cc325  e866f6ffff           call 0x5cb990
// 005cc32a  68f0718900           push 0x8971f0
// 005cc32f  e8c7d71400           call 0x719afb
// 005cc334  83c404               add esp, 4
// 005cc337  8b0c24               mov ecx, dword ptr [esp]
// 005cc33a  b8d033a400           mov eax, 0xa433d0
// 005cc33f  64890d00000000       mov dword ptr fs:[0], ecx
// 005cc346  83c40c               add esp, 0xc
// 005cc349  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
