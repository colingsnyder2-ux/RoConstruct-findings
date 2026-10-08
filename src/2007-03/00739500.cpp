// roc 2007-03 00739500  unit: seg_00730000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00739500
//
// 00739500  b801000000           mov eax, 1
// 00739505  84055c2c8c00         test byte ptr [0x8c2c5c], al
// 0073950b  7520                 jne 0x73952d
// 0073950d  d9ee                 fldz 
// 0073950f  09055c2c8c00         or dword ptr [0x8c2c5c], eax
// 00739515  d9154c2c8c00         fst dword ptr [0x8c2c4c]
// 0073951b  d915502c8c00         fst dword ptr [0x8c2c50]
// 00739521  d915542c8c00         fst dword ptr [0x8c2c54]
// 00739527  d91d582c8c00         fstp dword ptr [0x8c2c58]
// 0073952d  b84c2c8c00           mov eax, 0x8c2c4c
// 00739532  c3                   ret 
// library rbxgs-g3d/G3Dcpp\Color4.cpp (function ?zero@Color4@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Color4.cpp
