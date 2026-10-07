// roc 2007-08 0050b200  unit: seg_00500000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b200
//
// 0050b200  b801000000           mov eax, 1
// 0050b205  84055c0b8c00         test byte ptr [0x8c0b5c], al
// 0050b20b  751a                 jne 0x50b227
// 0050b20d  d9e8                 fld1 
// 0050b20f  09055c0b8c00         or dword ptr [0x8c0b5c], eax
// 0050b215  d915500b8c00         fst dword ptr [0x8c0b50]
// 0050b21b  d915540b8c00         fst dword ptr [0x8c0b54]
// 0050b221  d91d580b8c00         fstp dword ptr [0x8c0b58]
// 0050b227  b8500b8c00           mov eax, 0x8c0b50
// 0050b22c  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?white@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
