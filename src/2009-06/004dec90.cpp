// roc 2009-06 004dec90  unit: RBX::Network::IdSerializer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004dec90
//
// 004dec90  64a100000000         mov eax, dword ptr fs:[0]
// 004dec96  6aff                 push -1
// 004dec98  681eb98500           push 0x85b91e
// 004dec9d  50                   push eax
// 004dec9e  b801000000           mov eax, 1
// 004deca3  64892500000000       mov dword ptr fs:[0], esp
// 004decaa  84051cf1a300         test byte ptr [0xa3f11c], al
// 004decb0  7525                 jne 0x4decd7
// 004decb2  09051cf1a300         or dword ptr [0xa3f11c], eax
// 004decb8  b904f1a300           mov ecx, 0xa3f104
// 004decbd  c744240800000000     mov dword ptr [esp + 8], 0
// 004decc5  e846b91700           call 0x65a610
// 004decca  68d05e8900           push 0x895ed0
// 004deccf  e827ae2300           call 0x719afb
// 004decd4  83c404               add esp, 4
// 004decd7  8b0c24               mov ecx, dword ptr [esp]
// 004decda  b804f1a300           mov eax, 0xa3f104
// 004decdf  64890d00000000       mov dword ptr fs:[0], ecx
// 004dece6  83c40c               add esp, 0xc
// 004dece9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
