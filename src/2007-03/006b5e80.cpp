// roc 2007-03 006b5e80  unit: seg_006b0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b5e80
//
// 006b5e80  8b01                 mov eax, dword ptr [ecx]
// 006b5e82  8b5060               mov edx, dword ptr [eax + 0x60]
// 006b5e85  ffe2                 jmp edx
// library rbxgs-g3d/GLG3Dcpp\GApp.cpp (function ?onCleanup@GApplet@G3D@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GApp.cpp
