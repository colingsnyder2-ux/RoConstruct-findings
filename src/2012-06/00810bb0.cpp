// roc 2012-06 00810bb0  unit: RBX::TextBox  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00810bb0
//
// 00810bb0  8bc1                 mov eax, ecx
// 00810bb2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00810bb6  d9410c               fld dword ptr [ecx + 0xc]
// 00810bb9  d9580c               fstp dword ptr [eax + 0xc]
// 00810bbc  d901                 fld dword ptr [ecx]
// 00810bbe  d918                 fstp dword ptr [eax]
// 00810bc0  d94104               fld dword ptr [ecx + 4]
// 00810bc3  d95804               fstp dword ptr [eax + 4]
// 00810bc6  d94108               fld dword ptr [ecx + 8]
// 00810bc9  d95808               fstp dword ptr [eax + 8]
// 00810bcc  c20400               ret 4
// library rbxgs/util\Quaternion.cpp (function ??4Quaternion@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Quaternion.cpp
