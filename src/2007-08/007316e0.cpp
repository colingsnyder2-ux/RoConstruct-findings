// roc 2007-08 007316e0  unit: seg_00730000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007316e0
//
// 007316e0  80791400             cmp byte ptr [ecx + 0x14], 0
// 007316e4  7419                 je 0x7316ff
// 007316e6  a158ac8b00           mov eax, dword ptr [0x8bac58]
// 007316eb  83e802               sub eax, 2
// 007316ee  740a                 je 0x7316fa
// 007316f0  83e802               sub eax, 2
// 007316f3  750a                 jne 0x7316ff
// 007316f5  e9f6fbffff           jmp 0x7312f0
// 007316fa  e991f9ffff           jmp 0x731090
// 007316ff  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?endFrame@ToneMap@G3D@@QAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
