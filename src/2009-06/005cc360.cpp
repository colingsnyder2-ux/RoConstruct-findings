// roc 2009-06 005cc360  unit: RBX::EThrottle::W4EThrottleType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cc360
//
// 005cc360  64a100000000         mov eax, dword ptr fs:[0]
// 005cc366  6aff                 push -1
// 005cc368  686e248600           push 0x86246e
// 005cc36d  50                   push eax
// 005cc36e  b801000000           mov eax, 1
// 005cc373  64892500000000       mov dword ptr fs:[0], esp
// 005cc37a  8405ac35a400         test byte ptr [0xa435ac], al
// 005cc380  7525                 jne 0x5cc3a7
// 005cc382  0905ac35a400         or dword ptr [0xa435ac], eax
// 005cc388  b9c034a400           mov ecx, 0xa434c0
// 005cc38d  c744240800000000     mov dword ptr [esp + 8], 0
// 005cc395  e8e6faffff           call 0x5cbe80
// 005cc39a  68e0718900           push 0x8971e0
// 005cc39f  e857d71400           call 0x719afb
// 005cc3a4  83c404               add esp, 4
// 005cc3a7  8b0c24               mov ecx, dword ptr [esp]
// 005cc3aa  b8c034a400           mov eax, 0xa434c0
// 005cc3af  64890d00000000       mov dword ptr fs:[0], ecx
// 005cc3b6  83c40c               add esp, 0xc
// 005cc3b9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
