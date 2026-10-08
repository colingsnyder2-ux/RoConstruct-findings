// roc 2007-08 005aa860  unit: RBX::World  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aa860
//
// 005aa860  8bc1                 mov eax, ecx
// 005aa862  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005aa866  d9410c               fld dword ptr [ecx + 0xc]
// 005aa869  d9580c               fstp dword ptr [eax + 0xc]
// 005aa86c  d901                 fld dword ptr [ecx]
// 005aa86e  d918                 fstp dword ptr [eax]
// 005aa870  d94104               fld dword ptr [ecx + 4]
// 005aa873  d95804               fstp dword ptr [eax + 4]
// 005aa876  d94108               fld dword ptr [ecx + 8]
// 005aa879  d95808               fstp dword ptr [eax + 8]
// 005aa87c  c20400               ret 4
// library rbxgs/util\Quaternion.cpp (function ??4Quaternion@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Quaternion.cpp
