// roc 2007-03 00638fd0  unit: seg_00630000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00638fd0
//
// 00638fd0  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00638fd6  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\SDLWindow.cpp (function ?numJoysticks@SDLWindow@G3D@@UBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/SDLWindow.cpp
