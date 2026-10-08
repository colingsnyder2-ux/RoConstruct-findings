// roc 2007-03 004f50e0  unit: seg_004f0000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f50e0
//
// 004f50e0  b801000000           mov eax, 1
// 004f50e5  840524ae8b00         test byte ptr [0x8bae24], al
// 004f50eb  7514                 jne 0x4f5101
// 004f50ed  d9ee                 fldz 
// 004f50ef  090524ae8b00         or dword ptr [0x8bae24], eax
// 004f50f5  d9151cae8b00         fst dword ptr [0x8bae1c]
// 004f50fb  d91d20ae8b00         fstp dword ptr [0x8bae20]
// 004f5101  b81cae8b00           mov eax, 0x8bae1c
// 004f5106  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Vector2.cpp (function ?zero@Vector2@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Vector2.cpp
