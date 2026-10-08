// from server: 100% by auto
// roc 2008-06 00712420  unit: CPropertyGridItemBrickColor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00712420
//
// 00712420  8b442404             mov eax, dword ptr [esp + 4]
// 00712424  85c0                 test eax, eax
// 00712426  7c0e                 jl 0x712436
// 00712428  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 0071242b  7d09                 jge 0x712436
// 0071242d  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00712430  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00712433  c20400               ret 4
// 00712436  33c0                 xor eax, eax
// 00712438  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetAt@CXTPPropertyGridInplaceButtons@@QBEPAVCXTPPropertyGridInplaceButton@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
