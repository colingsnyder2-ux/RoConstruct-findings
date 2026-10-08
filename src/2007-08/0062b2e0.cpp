// roc 2007-08 0062b2e0  unit: RBX::GroupDragTool  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062b2e0
//
// 0062b2e0  8bc1                 mov eax, ecx
// 0062b2e2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0062b2e6  8b11                 mov edx, dword ptr [ecx]
// 0062b2e8  8910                 mov dword ptr [eax], edx
// 0062b2ea  8b5104               mov edx, dword ptr [ecx + 4]
// 0062b2ed  895004               mov dword ptr [eax + 4], edx
// 0062b2f0  d94108               fld dword ptr [ecx + 8]
// 0062b2f3  d95808               fstp dword ptr [eax + 8]
// 0062b2f6  d9410c               fld dword ptr [ecx + 0xc]
// 0062b2f9  d9580c               fstp dword ptr [eax + 0xc]
// 0062b2fc  d94110               fld dword ptr [ecx + 0x10]
// 0062b2ff  d95810               fstp dword ptr [eax + 0x10]
// 0062b302  d94114               fld dword ptr [ecx + 0x14]
// 0062b305  d95814               fstp dword ptr [eax + 0x14]
// 0062b308  d94118               fld dword ptr [ecx + 0x18]
// 0062b30b  d95818               fstp dword ptr [eax + 0x18]
// 0062b30e  d9411c               fld dword ptr [ecx + 0x1c]
// 0062b311  d9581c               fstp dword ptr [eax + 0x1c]
// 0062b314  c20400               ret 4
// library rbxgs/tool\RunDragger.cpp (function ??0SnapInfo@RunDragger@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
