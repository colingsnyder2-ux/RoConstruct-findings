// roc 2009-12 008c9850  unit: CXTPPropertyGridPaintManager  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9850
//
// 008c9850  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 008c9853  e82842f8ff           call 0x84da80
// 008c9858  8bc8                 mov ecx, eax
// 008c985a  e813cc0500           call 0x926472
// 008c985f  a820                 test al, 0x20
// 008c9861  7412                 je 0x8c9875
// 008c9863  8b442404             mov eax, dword ptr [esp + 4]
// 008c9867  8b4814               mov ecx, dword ptr [eax + 0x14]
// 008c986a  8b11                 mov edx, dword ptr [ecx]
// 008c986c  89442404             mov dword ptr [esp + 4], eax
// 008c9870  8b4274               mov eax, dword ptr [edx + 0x74]
// 008c9873  ffe0                 jmp eax
// 008c9875  c20400               ret 4
// copied from an identical function in another client (function ?MeasureItem@CXTPPropertyGridPaintManager@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp