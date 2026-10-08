// from server: 100% by auto
// roc 2007-08 00475020  unit: CInstanceRecord::CNameItem  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475020
//
// 00475020  b801000000           mov eax, 1
// 00475025  840538d18b00         test byte ptr [0x8bd138], al
// 0047502b  751a                 jne 0x475047
// 0047502d  d9ee                 fldz 
// 0047502f  090538d18b00         or dword ptr [0x8bd138], eax
// 00475035  d9152cd18b00         fst dword ptr [0x8bd12c]
// 0047503b  d91530d18b00         fst dword ptr [0x8bd130]
// 00475041  d91d34d18b00         fstp dword ptr [0x8bd134]
// 00475047  b82cd18b00           mov eax, 0x8bd12c
// 0047504c  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?zero@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
