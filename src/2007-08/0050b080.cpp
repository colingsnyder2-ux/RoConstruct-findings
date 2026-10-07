// roc 2007-08 0050b080  unit: seg_00500000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b080
//
// 0050b080  b801000000           mov eax, 1
// 0050b085  8405ec0a8c00         test byte ptr [0x8c0aec], al
// 0050b08b  751c                 jne 0x50b0a9
// 0050b08d  d9ee                 fldz 
// 0050b08f  0905ec0a8c00         or dword ptr [0x8c0aec], eax
// 0050b095  d915e00a8c00         fst dword ptr [0x8c0ae0]
// 0050b09b  d9e8                 fld1 
// 0050b09d  d91de40a8c00         fstp dword ptr [0x8c0ae4]
// 0050b0a3  d91de80a8c00         fstp dword ptr [0x8c0ae8]
// 0050b0a9  b8e00a8c00           mov eax, 0x8c0ae0
// 0050b0ae  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?unitY@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
