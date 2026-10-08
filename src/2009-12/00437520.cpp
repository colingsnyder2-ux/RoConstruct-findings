// roc 2009-12 00437520  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00437520
//
// 00437520  8bc1                 mov eax, ecx
// 00437522  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00437526  d901                 fld dword ptr [ecx]
// 00437528  d918                 fstp dword ptr [eax]
// 0043752a  d94104               fld dword ptr [ecx + 4]
// 0043752d  d95804               fstp dword ptr [eax + 4]
// 00437530  d94108               fld dword ptr [ecx + 8]
// 00437533  d95808               fstp dword ptr [eax + 8]
// 00437536  c20400               ret 4
// library rbxgs-appdraw/Draw.cpp (function ??0Vector3@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
