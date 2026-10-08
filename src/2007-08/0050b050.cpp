// from server: 100% by auto
// roc 2007-08 0050b050  unit: seg_00500000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050b050
//
// 0050b050  b801000000           mov eax, 1
// 0050b055  8405dc0a8c00         test byte ptr [0x8c0adc], al
// 0050b05b  751c                 jne 0x50b079
// 0050b05d  d9e8                 fld1 
// 0050b05f  0905dc0a8c00         or dword ptr [0x8c0adc], eax
// 0050b065  d91dd00a8c00         fstp dword ptr [0x8c0ad0]
// 0050b06b  d9ee                 fldz 
// 0050b06d  d915d40a8c00         fst dword ptr [0x8c0ad4]
// 0050b073  d91dd80a8c00         fstp dword ptr [0x8c0ad8]
// 0050b079  b8d00a8c00           mov eax, 0x8c0ad0
// 0050b07e  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?unitX@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
