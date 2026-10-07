// roc 2007-08 00699000  unit: CPropertyGridItemBrickColor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699000
//
// 00699000  8b442404             mov eax, dword ptr [esp + 4]
// 00699004  85c0                 test eax, eax
// 00699006  7c0e                 jl 0x699016
// 00699008  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 0069900b  7d09                 jge 0x699016
// 0069900d  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00699010  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00699013  c20400               ret 4
// 00699016  33c0                 xor eax, eax
// 00699018  c20400               ret 4
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetAt@CXTPPropertyGridInplaceButtons@@QBEPAVCXTPPropertyGridInplaceButton@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGrid.cpp
