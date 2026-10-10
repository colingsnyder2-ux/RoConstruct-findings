// roc 2008-06 00776580  unit: CXTPPropertyGridPaintManager  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00776580
//
// 00776580  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00776583  e8283ef8ff           call 0x6fa3b0
// 00776588  8bc8                 mov ecx, eax
// 0077658a  e87b5a0400           call 0x7bc00a
// 0077658f  a820                 test al, 0x20
// 00776591  7412                 je 0x7765a5
// 00776593  8b442404             mov eax, dword ptr [esp + 4]
// 00776597  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0077659a  8b11                 mov edx, dword ptr [ecx]
// 0077659c  89442404             mov dword ptr [esp + 4], eax
// 007765a0  8b4274               mov eax, dword ptr [edx + 0x74]
// 007765a3  ffe0                 jmp eax
// 007765a5  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?MeasureItem@CXTPPropertyGridPaintManager@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
