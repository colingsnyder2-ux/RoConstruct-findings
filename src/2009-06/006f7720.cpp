// roc 2009-06 006f7720  unit: RBX::GroupDragTool  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f7720
//
// 006f7720  8bc1                 mov eax, ecx
// 006f7722  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f7726  8b11                 mov edx, dword ptr [ecx]
// 006f7728  8910                 mov dword ptr [eax], edx
// 006f772a  8b5104               mov edx, dword ptr [ecx + 4]
// 006f772d  895004               mov dword ptr [eax + 4], edx
// 006f7730  d94108               fld dword ptr [ecx + 8]
// 006f7733  d95808               fstp dword ptr [eax + 8]
// 006f7736  d9410c               fld dword ptr [ecx + 0xc]
// 006f7739  d9580c               fstp dword ptr [eax + 0xc]
// 006f773c  d94110               fld dword ptr [ecx + 0x10]
// 006f773f  d95810               fstp dword ptr [eax + 0x10]
// 006f7742  d94114               fld dword ptr [ecx + 0x14]
// 006f7745  d95814               fstp dword ptr [eax + 0x14]
// 006f7748  d94118               fld dword ptr [ecx + 0x18]
// 006f774b  d95818               fstp dword ptr [eax + 0x18]
// 006f774e  d9411c               fld dword ptr [ecx + 0x1c]
// 006f7751  d9581c               fstp dword ptr [eax + 0x1c]
// 006f7754  c20400               ret 4
// library rbxgs/tool\RunDragger.cpp (function ??0SnapInfo@RunDragger@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
