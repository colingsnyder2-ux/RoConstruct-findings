// roc 2007-03 004cbef0  unit: seg_004c0000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cbef0
//
// 004cbef0  8b442404             mov eax, dword ptr [esp + 4]
// 004cbef4  56                   push esi
// 004cbef5  8bf1                 mov esi, ecx
// 004cbef7  c70600000000         mov dword ptr [esi], 0
// 004cbefd  8b08                 mov ecx, dword ptr [eax]
// 004cbeff  51                   push ecx
// 004cbf00  8bce                 mov ecx, esi
// 004cbf02  e88991faff           call 0x475090
// 004cbf07  8bc6                 mov eax, esi
// 004cbf09  5e                   pop esi
// 004cbf0a  c20400               ret 4
// library rbxgs/gui\GuiDraw.cpp (function ??0?$ReferenceCountedPointer@VTextureProxyBase@RBX@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs gui/GuiDraw.cpp
