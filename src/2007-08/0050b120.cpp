// from server: 100% by auto
// roc 2007-08 0050b120  unit: seg_00500000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b120
//
// 0050b120  b801000000           mov eax, 1
// 0050b125  84051c0b8c00         test byte ptr [0x8c0b1c], al
// 0050b12b  751c                 jne 0x50b149
// 0050b12d  d9e8                 fld1 
// 0050b12f  09051c0b8c00         or dword ptr [0x8c0b1c], eax
// 0050b135  d915100b8c00         fst dword ptr [0x8c0b10]
// 0050b13b  d91d140b8c00         fstp dword ptr [0x8c0b14]
// 0050b141  d9ee                 fldz 
// 0050b143  d91d180b8c00         fstp dword ptr [0x8c0b18]
// 0050b149  b8100b8c00           mov eax, 0x8c0b10
// 0050b14e  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?yellow@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
