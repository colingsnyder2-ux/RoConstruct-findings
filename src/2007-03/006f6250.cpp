// roc 2007-03 006f6250  unit: seg_006f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f6250
//
// 006f6250  b801000000           mov eax, 1
// 006f6255  840548288c00         test byte ptr [0x8c2848], al
// 006f625b  751d                 jne 0x6f627a
// 006f625d  090548288c00         or dword ptr [0x8c2848], eax
// 006f6263  b9a8278c00           mov ecx, 0x8c27a8
// 006f6268  e8d3f4ffff           call 0x6f5740
// 006f626d  68b0c17700           push 0x77c1b0
// 006f6272  e83c8ff2ff           call 0x61f1b3
// 006f6277  83c404               add esp, 4
// 006f627a  b8a8278c00           mov eax, 0x8c27a8
// 006f627f  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Shape.cpp
