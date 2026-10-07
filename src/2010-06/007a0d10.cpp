// roc 2010-06 007a0d10  unit: W4_D3DFORMAT::?$EnumDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a0d10
//
// 007a0d10  6aff                 push -1
// 007a0d12  68eee19a00           push 0x9ae1ee
// 007a0d17  64a100000000         mov eax, dword ptr fs:[0]
// 007a0d1d  50                   push eax
// 007a0d1e  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007a0d23  33c4                 xor eax, esp
// 007a0d25  50                   push eax
// 007a0d26  8d442404             lea eax, [esp + 4]
// 007a0d2a  64a300000000         mov dword ptr fs:[0], eax
// 007a0d30  b801000000           mov eax, 1
// 007a0d35  8405c443c200         test byte ptr [0xc243c4], al
// 007a0d3b  7525                 jne 0x7a0d62
// 007a0d3d  0905c443c200         or dword ptr [0xc243c4], eax
// 007a0d43  b9d842c200           mov ecx, 0xc242d8
// 007a0d48  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007a0d50  e81b1b0000           call 0x7a2870
// 007a0d55  68708e9e00           push 0x9e8e70
// 007a0d5a  e8047d0000           call 0x7a8a63
// 007a0d5f  83c404               add esp, 4
// 007a0d62  b8d842c200           mov eax, 0xc242d8
// 007a0d67  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007a0d6b  64890d00000000       mov dword ptr fs:[0], ecx
// 007a0d72  59                   pop ecx
// 007a0d73  83c40c               add esp, 0xc
// 007a0d76  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
