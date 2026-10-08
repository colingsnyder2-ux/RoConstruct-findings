// roc 2007-03 00500800  unit: seg_00500000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500800
//
// 00500800  b801000000           mov eax, 1
// 00500805  8405dcaf8b00         test byte ptr [0x8bafdc], al
// 0050080b  7522                 jne 0x50082f
// 0050080d  d905d0037a00         fld dword ptr [0x7a03d0]
// 00500813  0905dcaf8b00         or dword ptr [0x8bafdc], eax
// 00500819  d91dd0af8b00         fstp dword ptr [0x8bafd0]
// 0050081f  d9ee                 fldz 
// 00500821  d91dd4af8b00         fstp dword ptr [0x8bafd4]
// 00500827  d9e8                 fld1 
// 00500829  d91dd8af8b00         fstp dword ptr [0x8bafd8]
// 0050082f  b8d0af8b00           mov eax, 0x8bafd0
// 00500834  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Color3.cpp (function ?purple@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Color3.cpp
