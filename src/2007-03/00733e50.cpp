// roc 2007-03 00733e50  unit: seg_00730000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00733e50
//
// 00733e50  80791400             cmp byte ptr [ecx + 0x14], 0
// 00733e54  7419                 je 0x733e6f
// 00733e56  a16c518b00           mov eax, dword ptr [0x8b516c]
// 00733e5b  83e802               sub eax, 2
// 00733e5e  740a                 je 0x733e6a
// 00733e60  83e802               sub eax, 2
// 00733e63  750a                 jne 0x733e6f
// 00733e65  e9f6fbffff           jmp 0x733a60
// 00733e6a  e991f9ffff           jmp 0x733800
// 00733e6f  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\ToneMap.cpp (function ?endFrame@ToneMap@G3D@@QAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/ToneMap.cpp
