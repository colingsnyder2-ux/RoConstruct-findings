// roc 2010-06 00840dd0  unit: CXTPHookManager::CHookSink  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00840dd0
//
// 00840dd0  b801000000           mov eax, 1
// 00840dd5  84054062c200         test byte ptr [0xc26240], al
// 00840ddb  751d                 jne 0x840dfa
// 00840ddd  09054062c200         or dword ptr [0xc26240], eax
// 00840de3  b92462c200           mov ecx, 0xc26224
// 00840de8  e803ffffff           call 0x840cf0
// 00840ded  6850919e00           push 0x9e9150
// 00840df2  e86c7cf6ff           call 0x7a8a63
// 00840df7  83c404               add esp, 4
// 00840dfa  b82462c200           mov eax, 0xc26224
// 00840dff  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
