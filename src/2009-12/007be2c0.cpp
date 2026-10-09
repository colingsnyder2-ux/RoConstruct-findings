// roc 2009-12 007be2c0  unit: RBX::FilterStairs  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007be2c0
//
// 007be2c0  8bc1                 mov eax, ecx
// 007be2c2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007be2c6  8b11                 mov edx, dword ptr [ecx]
// 007be2c8  8910                 mov dword ptr [eax], edx
// 007be2ca  8b5104               mov edx, dword ptr [ecx + 4]
// 007be2cd  895004               mov dword ptr [eax + 4], edx
// 007be2d0  d94108               fld dword ptr [ecx + 8]
// 007be2d3  d95808               fstp dword ptr [eax + 8]
// 007be2d6  d9410c               fld dword ptr [ecx + 0xc]
// 007be2d9  d9580c               fstp dword ptr [eax + 0xc]
// 007be2dc  d94110               fld dword ptr [ecx + 0x10]
// 007be2df  d95810               fstp dword ptr [eax + 0x10]
// 007be2e2  d94114               fld dword ptr [ecx + 0x14]
// 007be2e5  d95814               fstp dword ptr [eax + 0x14]
// 007be2e8  d94118               fld dword ptr [ecx + 0x18]
// 007be2eb  d95818               fstp dword ptr [eax + 0x18]
// 007be2ee  d9411c               fld dword ptr [ecx + 0x1c]
// 007be2f1  d9581c               fstp dword ptr [eax + 0x1c]
// 007be2f4  c20400               ret 4
// library rbxgs/tool\RunDragger.cpp (function ??0SnapInfo@RunDragger@RBX@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/RunDragger.cpp
