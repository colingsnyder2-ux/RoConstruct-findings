// roc 2007-03 00616470  unit: seg_00610000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00616470
//
// 00616470  8bc1                 mov eax, ecx
// 00616472  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00616476  8b11                 mov edx, dword ptr [ecx]
// 00616478  8910                 mov dword ptr [eax], edx
// 0061647a  8b5104               mov edx, dword ptr [ecx + 4]
// 0061647d  895004               mov dword ptr [eax + 4], edx
// 00616480  d94108               fld dword ptr [ecx + 8]
// 00616483  d95808               fstp dword ptr [eax + 8]
// 00616486  d9410c               fld dword ptr [ecx + 0xc]
// 00616489  d9580c               fstp dword ptr [eax + 0xc]
// 0061648c  d94110               fld dword ptr [ecx + 0x10]
// 0061648f  d95810               fstp dword ptr [eax + 0x10]
// 00616492  d94114               fld dword ptr [ecx + 0x14]
// 00616495  d95814               fstp dword ptr [eax + 0x14]
// 00616498  d94118               fld dword ptr [ecx + 0x18]
// 0061649b  d95818               fstp dword ptr [eax + 0x18]
// 0061649e  d9411c               fld dword ptr [ecx + 0x1c]
// 006164a1  d9581c               fstp dword ptr [eax + 0x1c]
// 006164a4  c20400               ret 4
// library rbxgs/tool\RunDragger.cpp (function ??0SnapInfo@RunDragger@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
