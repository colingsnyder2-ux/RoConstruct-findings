// from server: 100% by auto
// roc 2007-08 0050b190  unit: seg_00500000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b190
//
// 0050b190  b801000000           mov eax, 1
// 0050b195  84053c0b8c00         test byte ptr [0x8c0b3c], al
// 0050b19b  751a                 jne 0x50b1b7
// 0050b19d  d9ee                 fldz 
// 0050b19f  09053c0b8c00         or dword ptr [0x8c0b3c], eax
// 0050b1a5  d915300b8c00         fst dword ptr [0x8c0b30]
// 0050b1ab  d915340b8c00         fst dword ptr [0x8c0b34]
// 0050b1b1  d91d380b8c00         fstp dword ptr [0x8c0b38]
// 0050b1b7  b8300b8c00           mov eax, 0x8c0b30
// 0050b1bc  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?zero@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
