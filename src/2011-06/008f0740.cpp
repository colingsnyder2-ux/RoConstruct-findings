// from server: 100% by auto
// roc 2011-06 008f0740  unit: PAVCXTShadowWnd::?$CList  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0740
//
// 008f0740  b801000000           mov eax, 1
// 008f0745  8405dc92d100         test byte ptr [0xd192dc], al
// 008f074b  751d                 jne 0x8f076a
// 008f074d  0905dc92d100         or dword ptr [0xd192dc], eax
// 008f0753  b9a092d100           mov ecx, 0xd192a0
// 008f0758  e863feffff           call 0x8f05c0
// 008f075d  6860fda300           push 0xa3fd60
// 008f0762  e8f6a9f1ff           call 0x80b15d
// 008f0767  83c404               add esp, 4
// 008f076a  b8a092d100           mov eax, 0xd192a0
// 008f076f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
