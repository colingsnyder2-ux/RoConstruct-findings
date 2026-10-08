// from server: 100% by auto
// roc 2012-06 009d7190  unit: CXTPCompatibleDC  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d7190
//
// 009d7190  b801000000           mov eax, 1
// 009d7195  8405e89be500         test byte ptr [0xe59be8], al
// 009d719b  751d                 jne 0x9d71ba
// 009d719d  0905e89be500         or dword ptr [0xe59be8], eax
// 009d71a3  b9d49be500           mov ecx, 0xe59bd4
// 009d71a8  e823cfffff           call 0x9d40d0
// 009d71ad  684017b200           push 0xb21740
// 009d71b2  e83ec0faff           call 0x9831f5
// 009d71b7  83c404               add esp, 4
// 009d71ba  b8d49be500           mov eax, 0xe59bd4
// 009d71bf  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
