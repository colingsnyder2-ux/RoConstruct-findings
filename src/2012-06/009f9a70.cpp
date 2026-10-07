// roc 2012-06 009f9a70  unit: CXTPDockingPaneAutoHidePanel  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9a70
//
// 009f9a70  b801000000           mov eax, 1
// 009f9a75  840574a0e500         test byte ptr [0xe5a074], al
// 009f9a7b  751d                 jne 0x9f9a9a
// 009f9a7d  090574a0e500         or dword ptr [0xe5a074], eax
// 009f9a83  b964a0e500           mov ecx, 0xe5a064
// 009f9a88  e833ffffff           call 0x9f99c0
// 009f9a8d  68c017b200           push 0xb217c0
// 009f9a92  e85e97f8ff           call 0x9831f5
// 009f9a97  83c404               add esp, 4
// 009f9a9a  b864a0e500           mov eax, 0xe5a064
// 009f9a9f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
