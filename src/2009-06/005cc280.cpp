// roc 2009-06 005cc280  unit: RBX::EThrottle::W4EThrottleType::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cc280
//
// 005cc280  64a100000000         mov eax, dword ptr fs:[0]
// 005cc286  6aff                 push -1
// 005cc288  682e248600           push 0x86242e
// 005cc28d  50                   push eax
// 005cc28e  b801000000           mov eax, 1
// 005cc293  64892500000000       mov dword ptr fs:[0], esp
// 005cc29a  8405cc33a400         test byte ptr [0xa433cc], al
// 005cc2a0  7525                 jne 0x5cc2c7
// 005cc2a2  0905cc33a400         or dword ptr [0xa433cc], eax
// 005cc2a8  b9e032a400           mov ecx, 0xa432e0
// 005cc2ad  c744240800000000     mov dword ptr [esp + 8], 0
// 005cc2b5  e856f5ffff           call 0x5cb810
// 005cc2ba  6800728900           push 0x897200
// 005cc2bf  e837d81400           call 0x719afb
// 005cc2c4  83c404               add esp, 4
// 005cc2c7  8b0c24               mov ecx, dword ptr [esp]
// 005cc2ca  b8e032a400           mov eax, 0xa432e0
// 005cc2cf  64890d00000000       mov dword ptr fs:[0], ecx
// 005cc2d6  83c40c               add esp, 0xc
// 005cc2d9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
