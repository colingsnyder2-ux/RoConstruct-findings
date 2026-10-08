// from server: 100% by auto
// roc 2007-08 0050b150  unit: seg_00500000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b150
//
// 0050b150  b801000000           mov eax, 1
// 0050b155  84052c0b8c00         test byte ptr [0x8c0b2c], al
// 0050b15b  7522                 jne 0x50b17f
// 0050b15d  d9e8                 fld1 
// 0050b15f  09052c0b8c00         or dword ptr [0x8c0b2c], eax
// 0050b165  d91d200b8c00         fstp dword ptr [0x8c0b20]
// 0050b16b  d9059c7e7900         fld dword ptr [0x797e9c]
// 0050b171  d91d240b8c00         fstp dword ptr [0x8c0b24]
// 0050b177  d9ee                 fldz 
// 0050b179  d91d280b8c00         fstp dword ptr [0x8c0b28]
// 0050b17f  b8200b8c00           mov eax, 0x8c0b20
// 0050b184  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?orange@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
