// from server: 100% by auto
// roc 2007-08 0050b0b0  unit: seg_00500000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b0b0
//
// 0050b0b0  b801000000           mov eax, 1
// 0050b0b5  8405fc0a8c00         test byte ptr [0x8c0afc], al
// 0050b0bb  751c                 jne 0x50b0d9
// 0050b0bd  d9ee                 fldz 
// 0050b0bf  0905fc0a8c00         or dword ptr [0x8c0afc], eax
// 0050b0c5  d915f00a8c00         fst dword ptr [0x8c0af0]
// 0050b0cb  d91df40a8c00         fstp dword ptr [0x8c0af4]
// 0050b0d1  d9e8                 fld1 
// 0050b0d3  d91df80a8c00         fstp dword ptr [0x8c0af8]
// 0050b0d9  b8f00a8c00           mov eax, 0x8c0af0
// 0050b0de  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?unitZ@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
