// roc 2007-03 0047a180  unit: seg_00470000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a180
//
// 0047a180  8b442404             mov eax, dword ptr [esp + 4]
// 0047a184  8b542408             mov edx, dword ptr [esp + 8]
// 0047a188  894128               mov dword ptr [ecx + 0x28], eax
// 0047a18b  89512c               mov dword ptr [ecx + 0x2c], edx
// 0047a18e  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?notifyResize@Win32Window@G3D@@UAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
