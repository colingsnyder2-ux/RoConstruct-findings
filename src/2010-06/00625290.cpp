// roc 2010-06 00625290  unit: RBX::Soundscape::VSoundChannel::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00625290
//
// 00625290  64a100000000         mov eax, dword ptr fs:[0]
// 00625296  6aff                 push -1
// 00625298  684eb19900           push 0x99b14e
// 0062529d  50                   push eax
// 0062529e  b801000000           mov eax, 1
// 006252a3  64892500000000       mov dword ptr fs:[0], esp
// 006252aa  8405bca8c100         test byte ptr [0xc1a8bc], al
// 006252b0  7525                 jne 0x6252d7
// 006252b2  0905bca8c100         or dword ptr [0xc1a8bc], eax
// 006252b8  b9d0a7c100           mov ecx, 0xc1a7d0
// 006252bd  c744240800000000     mov dword ptr [esp + 8], 0
// 006252c5  e876f8ffff           call 0x624b40
// 006252ca  6810319e00           push 0x9e3110
// 006252cf  e88f371800           call 0x7a8a63
// 006252d4  83c404               add esp, 4
// 006252d7  8b0c24               mov ecx, dword ptr [esp]
// 006252da  b8d0a7c100           mov eax, 0xc1a7d0
// 006252df  64890d00000000       mov dword ptr fs:[0], ecx
// 006252e6  83c40c               add esp, 0xc
// 006252e9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
