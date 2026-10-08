// from server: 100% by auto
// roc 2009-06 0079c240  unit: CXTPNewToolbarDlg  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c240
//
// 0079c240  b801000000           mov eax, 1
// 0079c245  8405b826a500         test byte ptr [0xa526b8], al
// 0079c24b  751d                 jne 0x79c26a
// 0079c24d  0905b826a500         or dword ptr [0xa526b8], eax
// 0079c253  b9a826a500           mov ecx, 0xa526a8
// 0079c258  e833ffffff           call 0x79c190
// 0079c25d  6890d58900           push 0x89d590
// 0079c262  e894d8f7ff           call 0x719afb
// 0079c267  83c404               add esp, 4
// 0079c26a  b8a826a500           mov eax, 0xa526a8
// 0079c26f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
