// roc 2008-06 0066c480  unit: RBX::GroupDragTool  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066c480
//
// 0066c480  8bc1                 mov eax, ecx
// 0066c482  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0066c486  8b11                 mov edx, dword ptr [ecx]
// 0066c488  8910                 mov dword ptr [eax], edx
// 0066c48a  8b5104               mov edx, dword ptr [ecx + 4]
// 0066c48d  895004               mov dword ptr [eax + 4], edx
// 0066c490  d94108               fld dword ptr [ecx + 8]
// 0066c493  d95808               fstp dword ptr [eax + 8]
// 0066c496  d9410c               fld dword ptr [ecx + 0xc]
// 0066c499  d9580c               fstp dword ptr [eax + 0xc]
// 0066c49c  d94110               fld dword ptr [ecx + 0x10]
// 0066c49f  d95810               fstp dword ptr [eax + 0x10]
// 0066c4a2  d94114               fld dword ptr [ecx + 0x14]
// 0066c4a5  d95814               fstp dword ptr [eax + 0x14]
// 0066c4a8  d94118               fld dword ptr [ecx + 0x18]
// 0066c4ab  d95818               fstp dword ptr [eax + 0x18]
// 0066c4ae  d9411c               fld dword ptr [ecx + 0x1c]
// 0066c4b1  d9581c               fstp dword ptr [eax + 0x1c]
// 0066c4b4  c20400               ret 4
// library rbxgs/tool\RunDragger.cpp (function ??0SnapInfo@RunDragger@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
