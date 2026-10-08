// roc 2007-03 004c4900  unit: seg_004c0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4900
//
// 004c4900  8b442404             mov eax, dword ptr [esp + 4]
// 004c4904  56                   push esi
// 004c4905  8bf1                 mov esi, ecx
// 004c4907  50                   push eax
// 004c4908  c70600000000         mov dword ptr [esi], 0
// 004c490e  e87d07fbff           call 0x475090
// 004c4913  8bc6                 mov eax, esi
// 004c4915  5e                   pop esi
// 004c4916  c20400               ret 4
// library rbxgs/gui\GuiDraw.cpp (function ??0?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@G3D@@QAE@PAVTextureProxyBase@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
