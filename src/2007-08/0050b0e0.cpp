// from server: 100% by auto
// roc 2007-08 0050b0e0  unit: seg_00500000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b0e0
//
// 0050b0e0  b801000000           mov eax, 1
// 0050b0e5  84050c0b8c00         test byte ptr [0x8c0b0c], al
// 0050b0eb  7522                 jne 0x50b10f
// 0050b0ed  d905e00b7a00         fld dword ptr [0x7a0be0]
// 0050b0f3  09050c0b8c00         or dword ptr [0x8c0b0c], eax
// 0050b0f9  d91d000b8c00         fstp dword ptr [0x8c0b00]
// 0050b0ff  d9ee                 fldz 
// 0050b101  d91d040b8c00         fstp dword ptr [0x8c0b04]
// 0050b107  d9e8                 fld1 
// 0050b109  d91d080b8c00         fstp dword ptr [0x8c0b08]
// 0050b10f  b8000b8c00           mov eax, 0x8c0b00
// 0050b114  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?purple@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
