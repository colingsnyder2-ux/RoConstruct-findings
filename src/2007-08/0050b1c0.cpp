// from server: 100% by auto
// roc 2007-08 0050b1c0  unit: seg_00500000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b1c0
//
// 0050b1c0  b801000000           mov eax, 1
// 0050b1c5  84054c0b8c00         test byte ptr [0x8c0b4c], al
// 0050b1cb  751e                 jne 0x50b1eb
// 0050b1cd  d905e00b7a00         fld dword ptr [0x7a0be0]
// 0050b1d3  09054c0b8c00         or dword ptr [0x8c0b4c], eax
// 0050b1d9  d915400b8c00         fst dword ptr [0x8c0b40]
// 0050b1df  d915440b8c00         fst dword ptr [0x8c0b44]
// 0050b1e5  d91d480b8c00         fstp dword ptr [0x8c0b48]
// 0050b1eb  b8400b8c00           mov eax, 0x8c0b40
// 0050b1f0  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?gray@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
