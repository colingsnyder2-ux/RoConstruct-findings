// roc 2007-03 0062f680  unit: seg_00620000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f680
//
// 0062f680  8b81d4000000         mov eax, dword ptr [ecx + 0xd4]
// 0062f686  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\SDLWindow.cpp (function ?win32HWND@SDLWindow@G3D@@QBEPAUHWND__@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/SDLWindow.cpp
