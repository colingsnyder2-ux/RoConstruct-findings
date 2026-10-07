// roc 2010-06 007a3990  unit: W4_D3DFORMAT::?$EnumDesc  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a3990
//
// 007a3990  b801000000           mov eax, 1
// 007a3995  8405a050c200         test byte ptr [0xc250a0], al
// 007a399b  751d                 jne 0x7a39ba
// 007a399d  0905a050c200         or dword ptr [0xc250a0], eax
// 007a39a3  b90845c200           mov ecx, 0xc24508
// 007a39a8  e813f0ffff           call 0x7a29c0
// 007a39ad  68c08e9e00           push 0x9e8ec0
// 007a39b2  e8ac500000           call 0x7a8a63
// 007a39b7  83c404               add esp, 4
// 007a39ba  b80845c200           mov eax, 0xc24508
// 007a39bf  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
