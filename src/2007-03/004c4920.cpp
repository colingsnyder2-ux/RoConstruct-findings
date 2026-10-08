// roc 2007-03 004c4920  unit: seg_004c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4920
//
// 004c4920  8b442404             mov eax, dword ptr [esp + 4]
// 004c4924  56                   push esi
// 004c4925  50                   push eax
// 004c4926  8bf1                 mov esi, ecx
// 004c4928  e86307fbff           call 0x475090
// 004c492d  8bc6                 mov eax, esi
// 004c492f  5e                   pop esi
// 004c4930  c20400               ret 4
// library rbxgs/gui\GuiDraw.cpp (function ??4?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@G3D@@QAEAAV01@PAVTextureProxyBase@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
