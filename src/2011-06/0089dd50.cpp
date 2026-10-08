// from server: 100% by auto
// roc 2011-06 0089dd50  unit: CXTPHookManager::CHookSink  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089dd50
//
// 0089dd50  b801000000           mov eax, 1
// 0089dd55  8405288fd100         test byte ptr [0xd18f28], al
// 0089dd5b  751d                 jne 0x89dd7a
// 0089dd5d  0905288fd100         or dword ptr [0xd18f28], eax
// 0089dd63  b90c8fd100           mov ecx, 0xd18f0c
// 0089dd68  e803ffffff           call 0x89dc70
// 0089dd6d  6800fda300           push 0xa3fd00
// 0089dd72  e8e6d3f6ff           call 0x80b15d
// 0089dd77  83c404               add esp, 4
// 0089dd7a  b80c8fd100           mov eax, 0xd18f0c
// 0089dd7f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
