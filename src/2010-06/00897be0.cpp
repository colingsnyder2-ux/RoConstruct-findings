// from server: 100% by auto
// roc 2010-06 00897be0  unit: CXTShadowHook  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897be0
//
// 00897be0  b801000000           mov eax, 1
// 00897be5  8405f466c200         test byte ptr [0xc266f4], al
// 00897beb  751d                 jne 0x897c0a
// 00897bed  0905f466c200         or dword ptr [0xc266f4], eax
// 00897bf3  b9b866c200           mov ecx, 0xc266b8
// 00897bf8  e863feffff           call 0x897a60
// 00897bfd  68b0919e00           push 0x9e91b0
// 00897c02  e85c0ef1ff           call 0x7a8a63
// 00897c07  83c404               add esp, 4
// 00897c0a  b8b866c200           mov eax, 0xc266b8
// 00897c0f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
