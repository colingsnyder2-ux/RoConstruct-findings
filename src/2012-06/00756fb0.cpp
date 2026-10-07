// roc 2012-06 00756fb0  unit: RBX::VPartInstance::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00756fb0
//
// 00756fb0  64a100000000         mov eax, dword ptr fs:[0]
// 00756fb6  6aff                 push -1
// 00756fb8  684e26ac00           push 0xac264e
// 00756fbd  50                   push eax
// 00756fbe  b801000000           mov eax, 1
// 00756fc3  64892500000000       mov dword ptr fs:[0], esp
// 00756fca  8405f464e300         test byte ptr [0xe364f4], al
// 00756fd0  7525                 jne 0x756ff7
// 00756fd2  0905f464e300         or dword ptr [0xe364f4], eax
// 00756fd8  b94864e300           mov ecx, 0xe36448
// 00756fdd  c744240800000000     mov dword ptr [esp + 8], 0
// 00756fe5  e866e5f6ff           call 0x6c5550
// 00756fea  68c087b100           push 0xb187c0
// 00756fef  e801c22200           call 0x9831f5
// 00756ff4  83c404               add esp, 4
// 00756ff7  8b0c24               mov ecx, dword ptr [esp]
// 00756ffa  b84864e300           mov eax, 0xe36448
// 00756fff  64890d00000000       mov dword ptr fs:[0], ecx
// 00757006  83c40c               add esp, 0xc
// 00757009  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
