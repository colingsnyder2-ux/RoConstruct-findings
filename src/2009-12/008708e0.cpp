// roc 2009-12 008708e0  unit: CXTPHookManager::CHookSink  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008708e0
//
// 008708e0  b801000000           mov eax, 1
// 008708e5  84050cbbb900         test byte ptr [0xb9bb0c], al
// 008708eb  751d                 jne 0x87090a
// 008708ed  09050cbbb900         or dword ptr [0xb9bb0c], eax
// 008708f3  b9f0bab900           mov ecx, 0xb9baf0
// 008708f8  e803ffffff           call 0x870800
// 008708fd  6850a79800           push 0x98a750
// 00870902  e82240f8ff           call 0x7f4929
// 00870907  83c404               add esp, 4
// 0087090a  b8f0bab900           mov eax, 0xb9baf0
// 0087090f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
