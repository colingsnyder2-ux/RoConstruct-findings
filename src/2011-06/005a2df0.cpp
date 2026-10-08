// from server: 100% by auto
// roc 2011-06 005a2df0  unit: RBX::Soundscape::VSoundChannel::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a2df0
//
// 005a2df0  64a100000000         mov eax, dword ptr fs:[0]
// 005a2df6  6aff                 push -1
// 005a2df8  689e129e00           push 0x9e129e
// 005a2dfd  50                   push eax
// 005a2dfe  b801000000           mov eax, 1
// 005a2e03  64892500000000       mov dword ptr fs:[0], esp
// 005a2e0a  84052cd4cb00         test byte ptr [0xcbd42c], al
// 005a2e10  7525                 jne 0x5a2e37
// 005a2e12  09052cd4cb00         or dword ptr [0xcbd42c], eax
// 005a2e18  b988d3cb00           mov ecx, 0xcbd388
// 005a2e1d  c744240800000000     mov dword ptr [esp + 8], 0
// 005a2e25  e8d6f5ffff           call 0x5a2400
// 005a2e2a  688053a300           push 0xa35380
// 005a2e2f  e829832600           call 0x80b15d
// 005a2e34  83c404               add esp, 4
// 005a2e37  8b0c24               mov ecx, dword ptr [esp]
// 005a2e3a  b888d3cb00           mov eax, 0xcbd388
// 005a2e3f  64890d00000000       mov dword ptr fs:[0], ecx
// 005a2e46  83c40c               add esp, 0xc
// 005a2e49  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
