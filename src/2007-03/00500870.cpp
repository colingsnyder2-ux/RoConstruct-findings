// roc 2007-03 00500870  unit: seg_00500000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500870
//
// 00500870  b801000000           mov eax, 1
// 00500875  8405fcaf8b00         test byte ptr [0x8baffc], al
// 0050087b  7522                 jne 0x50089f
// 0050087d  d9e8                 fld1 
// 0050087f  0905fcaf8b00         or dword ptr [0x8baffc], eax
// 00500885  d91df0af8b00         fstp dword ptr [0x8baff0]
// 0050088b  d9058c727900         fld dword ptr [0x79728c]
// 00500891  d91df4af8b00         fstp dword ptr [0x8baff4]
// 00500897  d9ee                 fldz 
// 00500899  d91df8af8b00         fstp dword ptr [0x8baff8]
// 0050089f  b8f0af8b00           mov eax, 0x8baff0
// 005008a4  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Color3.cpp (function ?orange@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Color3.cpp
