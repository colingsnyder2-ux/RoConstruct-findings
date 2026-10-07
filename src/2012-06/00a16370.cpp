// roc 2012-06 00a16370  unit: CXTPHookManager::CHookSink  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a16370
//
// 00a16370  b801000000           mov eax, 1
// 00a16375  840598a0e500         test byte ptr [0xe5a098], al
// 00a1637b  751d                 jne 0xa1639a
// 00a1637d  090598a0e500         or dword ptr [0xe5a098], eax
// 00a16383  b97ca0e500           mov ecx, 0xe5a07c
// 00a16388  e803ffffff           call 0xa16290
// 00a1638d  68e017b200           push 0xb217e0
// 00a16392  e85ecef6ff           call 0x9831f5
// 00a16397  83c404               add esp, 4
// 00a1639a  b87ca0e500           mov eax, 0xe5a07c
// 00a1639f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
