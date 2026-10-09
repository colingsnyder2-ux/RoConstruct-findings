// roc 2009-12 00712db0  unit: RBX::VHint::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00712db0
//
// 00712db0  8bc1                 mov eax, ecx
// 00712db2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00712db6  d9410c               fld dword ptr [ecx + 0xc]
// 00712db9  d9580c               fstp dword ptr [eax + 0xc]
// 00712dbc  d901                 fld dword ptr [ecx]
// 00712dbe  d918                 fstp dword ptr [eax]
// 00712dc0  d94104               fld dword ptr [ecx + 4]
// 00712dc3  d95804               fstp dword ptr [eax + 4]
// 00712dc6  d94108               fld dword ptr [ecx + 8]
// 00712dc9  d95808               fstp dword ptr [eax + 8]
// 00712dcc  c20400               ret 4
// library rbxgs/util\Quaternion.cpp (function ??4Quaternion@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Quaternion.cpp
