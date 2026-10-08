// roc 2007-03 005a6720  unit: seg_005a0000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a6720
//
// 005a6720  8bc1                 mov eax, ecx
// 005a6722  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a6726  d9410c               fld dword ptr [ecx + 0xc]
// 005a6729  d9580c               fstp dword ptr [eax + 0xc]
// 005a672c  d901                 fld dword ptr [ecx]
// 005a672e  d918                 fstp dword ptr [eax]
// 005a6730  d94104               fld dword ptr [ecx + 4]
// 005a6733  d95804               fstp dword ptr [eax + 4]
// 005a6736  d94108               fld dword ptr [ecx + 8]
// 005a6739  d95808               fstp dword ptr [eax + 8]
// 005a673c  c20400               ret 4
// library rbxgs/util\Quaternion.cpp (function ??4Quaternion@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Quaternion.cpp
