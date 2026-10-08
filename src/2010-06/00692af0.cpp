// roc 2010-06 00692af0  unit: RBX::VHint::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00692af0
//
// 00692af0  8bc1                 mov eax, ecx
// 00692af2  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00692af6  d9410c               fld dword ptr [ecx + 0xc]
// 00692af9  d9580c               fstp dword ptr [eax + 0xc]
// 00692afc  d901                 fld dword ptr [ecx]
// 00692afe  d918                 fstp dword ptr [eax]
// 00692b00  d94104               fld dword ptr [ecx + 4]
// 00692b03  d95804               fstp dword ptr [eax + 4]
// 00692b06  d94108               fld dword ptr [ecx + 8]
// 00692b09  d95808               fstp dword ptr [eax + 8]
// 00692b0c  c20400               ret 4
// library rbxgs/util\Quaternion.cpp (function ??4Quaternion@RBX@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Quaternion.cpp
