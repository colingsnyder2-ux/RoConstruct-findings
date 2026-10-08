// roc 2009-12 007ef850  unit: W4_D3DFORMAT::?$EnumDesc  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ef850
//
// 007ef850  b801000000           mov eax, 1
// 007ef855  840578a9b900         test byte ptr [0xb9a978], al
// 007ef85b  751d                 jne 0x7ef87a
// 007ef85d  090578a9b900         or dword ptr [0xb9a978], eax
// 007ef863  b9e09db900           mov ecx, 0xb99de0
// 007ef868  e813f0ffff           call 0x7ee880
// 007ef86d  68c0a49800           push 0x98a4c0
// 007ef872  e8b2500000           call 0x7f4929
// 007ef877  83c404               add esp, 4
// 007ef87a  b8e09db900           mov eax, 0xb99de0
// 007ef87f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
