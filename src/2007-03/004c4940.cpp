// roc 2007-03 004c4940  unit: seg_004c0000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004c4940
//
// 004c4940  8b442404             mov eax, dword ptr [esp + 4]
// 004c4944  56                   push esi
// 004c4945  8bf1                 mov esi, ecx
// 004c4947  8b08                 mov ecx, dword ptr [eax]
// 004c4949  51                   push ecx
// 004c494a  8bce                 mov ecx, esi
// 004c494c  e83f07fbff           call 0x475090
// 004c4951  8bc6                 mov eax, esi
// 004c4953  5e                   pop esi
// 004c4954  c20400               ret 4
// library rbxgs/gui\GuiDraw.cpp (function ??4?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@G3D@@QAEABV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
