// from server: 100% by auto
// roc 2009-06 00793570  unit: CXTPHookManager::CHookSink  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00793570
//
// 00793570  b801000000           mov eax, 1
// 00793575  84058c26a500         test byte ptr [0xa5268c], al
// 0079357b  751d                 jne 0x79359a
// 0079357d  09058c26a500         or dword ptr [0xa5268c], eax
// 00793583  b97026a500           mov ecx, 0xa52670
// 00793588  e803ffffff           call 0x793490
// 0079358d  6860d58900           push 0x89d560
// 00793592  e86465f8ff           call 0x719afb
// 00793597  83c404               add esp, 4
// 0079359a  b87026a500           mov eax, 0xa52670
// 0079359f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
