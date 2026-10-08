// roc 2008-06 005dd550  unit: RBX::Message  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd550
//
// 005dd550  8bc1                 mov eax, ecx
// 005dd552  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005dd556  d9410c               fld dword ptr [ecx + 0xc]
// 005dd559  d9580c               fstp dword ptr [eax + 0xc]
// 005dd55c  d901                 fld dword ptr [ecx]
// 005dd55e  d918                 fstp dword ptr [eax]
// 005dd560  d94104               fld dword ptr [ecx + 4]
// 005dd563  d95804               fstp dword ptr [eax + 4]
// 005dd566  d94108               fld dword ptr [ecx + 8]
// 005dd569  d95808               fstp dword ptr [eax + 8]
// 005dd56c  c20400               ret 4
// library rbxgs/util\Quaternion.cpp (function ??4Quaternion@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Quaternion.cpp
