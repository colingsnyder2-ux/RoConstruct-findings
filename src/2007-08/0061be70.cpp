// roc 2007-08 0061be70  unit: RBX::VWidget::?$NonFactoryProduct  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061be70
//
// 0061be70  8b01                 mov eax, dword ptr [ecx]
// 0061be72  8b5058               mov edx, dword ptr [eax + 0x58]
// 0061be75  ffe2                 jmp edx
// library rbxgs-g3d/GLG3Dcpp\GApp.cpp (function ?onInit@GApplet@G3D@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GApp.cpp
