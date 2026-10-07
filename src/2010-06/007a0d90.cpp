// roc 2010-06 007a0d90  unit: W4_D3DFORMAT::?$EnumDesc  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007a0d90
//
// 007a0d90  6aff                 push -1
// 007a0d92  681ee29a00           push 0x9ae21e
// 007a0d97  64a100000000         mov eax, dword ptr fs:[0]
// 007a0d9d  50                   push eax
// 007a0d9e  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007a0da3  33c4                 xor eax, esp
// 007a0da5  50                   push eax
// 007a0da6  8d442404             lea eax, [esp + 4]
// 007a0daa  64a300000000         mov dword ptr fs:[0], eax
// 007a0db0  b801000000           mov eax, 1
// 007a0db5  8405b444c200         test byte ptr [0xc244b4], al
// 007a0dbb  7525                 jne 0x7a0de2
// 007a0dbd  0905b444c200         or dword ptr [0xc244b4], eax
// 007a0dc3  b9c843c200           mov ecx, 0xc243c8
// 007a0dc8  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007a0dd0  e8fb160000           call 0x7a24d0
// 007a0dd5  68608e9e00           push 0x9e8e60
// 007a0dda  e8847c0000           call 0x7a8a63
// 007a0ddf  83c404               add esp, 4
// 007a0de2  b8c843c200           mov eax, 0xc243c8
// 007a0de7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007a0deb  64890d00000000       mov dword ptr fs:[0], ecx
// 007a0df2  59                   pop ecx
// 007a0df3  83c40c               add esp, 0xc
// 007a0df6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
