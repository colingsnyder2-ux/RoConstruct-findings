// roc 2009-06 00677de0  unit: RBX::Message  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00677de0
//
// 00677de0  8bc1                 mov eax, ecx
// 00677de2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00677de6  d9410c               fld dword ptr [ecx + 0xc]
// 00677de9  d9580c               fstp dword ptr [eax + 0xc]
// 00677dec  d901                 fld dword ptr [ecx]
// 00677dee  d918                 fstp dword ptr [eax]
// 00677df0  d94104               fld dword ptr [ecx + 4]
// 00677df3  d95804               fstp dword ptr [eax + 4]
// 00677df6  d94108               fld dword ptr [ecx + 8]
// 00677df9  d95808               fstp dword ptr [eax + 8]
// 00677dfc  c20400               ret 4
// library rbxgs/util\Quaternion.cpp (function ??4Quaternion@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Quaternion.cpp
