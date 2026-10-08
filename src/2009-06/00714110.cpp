// from server: 100% by auto
// roc 2009-06 00714110  unit: W4_D3DFORMAT::?$EnumDesc  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00714110
//
// 00714110  b801000000           mov eax, 1
// 00714115  84052015a500         test byte ptr [0xa51520], al
// 0071411b  751d                 jne 0x71413a
// 0071411d  09052015a500         or dword ptr [0xa51520], eax
// 00714123  b98809a500           mov ecx, 0xa50988
// 00714128  e813f0ffff           call 0x713140
// 0071412d  6800d38900           push 0x89d300
// 00714132  e8c4590000           call 0x719afb
// 00714137  83c404               add esp, 4
// 0071413a  b88809a500           mov eax, 0xa50988
// 0071413f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
