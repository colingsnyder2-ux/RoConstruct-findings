// roc 2007-03 0047a170  unit: seg_00470000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a170
//
// 0047a170  8a81ac000000         mov al, byte ptr [ecx + 0xac]
// 0047a176  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?mouseVisible@Win32Window@G3D@@UBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
