// roc 2009-12 00657170  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00657170
//
// 00657170  8b01                 mov eax, dword ptr [ecx]
// 00657172  8b5060               mov edx, dword ptr [eax + 0x60]
// 00657175  ffe2                 jmp edx
// library rbxgs-g3d/GLG3Dcpp\GApp.cpp (function ?onCleanup@GApplet@G3D@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GApp.cpp
