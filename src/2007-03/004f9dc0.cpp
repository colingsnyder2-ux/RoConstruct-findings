// roc 2007-03 004f9dc0  unit: seg_004f0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f9dc0
//
// 004f9dc0  8b442404             mov eax, dword ptr [esp + 4]
// 004f9dc4  56                   push esi
// 004f9dc5  50                   push eax
// 004f9dc6  8bf1                 mov esi, ecx
// 004f9dc8  e873ffffff           call 0x4f9d40
// 004f9dcd  8bc6                 mov eax, esi
// 004f9dcf  5e                   pop esi
// 004f9dd0  c20400               ret 4
// library rbxgs/gui\GuiDraw.cpp (function ??4?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@G3D@@QAEAAV01@PAVTextureProxyBase@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
