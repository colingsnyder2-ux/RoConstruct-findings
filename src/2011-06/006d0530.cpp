// roc 2011-06 006d0530  unit: RBX::Mechanism  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d0530
//
// 006d0530  8bc1                 mov eax, ecx
// 006d0532  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d0536  d9410c               fld dword ptr [ecx + 0xc]
// 006d0539  d9580c               fstp dword ptr [eax + 0xc]
// 006d053c  d901                 fld dword ptr [ecx]
// 006d053e  d918                 fstp dword ptr [eax]
// 006d0540  d94104               fld dword ptr [ecx + 4]
// 006d0543  d95804               fstp dword ptr [eax + 4]
// 006d0546  d94108               fld dword ptr [ecx + 8]
// 006d0549  d95808               fstp dword ptr [eax + 8]
// 006d054c  c20400               ret 4
// library rbxgs/util\Quaternion.cpp (function ??4Quaternion@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Quaternion.cpp
