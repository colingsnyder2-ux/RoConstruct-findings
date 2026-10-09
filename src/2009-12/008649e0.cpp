// roc 2009-12 008649e0  unit: CXTPPropertyGridItem  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008649e0
//
// 008649e0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 008649e6  83f8ff               cmp eax, -1
// 008649e9  740a                 je 0x8649f5
// 008649eb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008649ef  894110               mov dword ptr [ecx + 0x10], eax
// 008649f2  c20400               ret 4
// 008649f5  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 008649fb  83f801               cmp eax, 1
// 008649fe  7e13                 jle 0x864a13
// 00864a00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00864a04  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00864a07  83ea04               sub edx, 4
// 00864a0a  0fafd0               imul edx, eax
// 00864a0d  83c204               add edx, 4
// 00864a10  895110               mov dword ptr [ecx + 0x10], edx
// 00864a13  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?MeasureItem@CXTPPropertyGridItem@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
