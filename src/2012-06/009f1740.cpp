// roc 2012-06 009f1740  unit: CXTPPropertyGridItem  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f1740
//
// 009f1740  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 009f1746  83f8ff               cmp eax, -1
// 009f1749  740a                 je 0x9f1755
// 009f174b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009f174f  894110               mov dword ptr [ecx + 0x10], eax
// 009f1752  c20400               ret 4
// 009f1755  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 009f175b  83f801               cmp eax, 1
// 009f175e  7e13                 jle 0x9f1773
// 009f1760  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009f1764  8b5110               mov edx, dword ptr [ecx + 0x10]
// 009f1767  83ea04               sub edx, 4
// 009f176a  0fafd0               imul edx, eax
// 009f176d  83c204               add edx, 4
// 009f1770  895110               mov dword ptr [ecx + 0x10], edx
// 009f1773  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?MeasureItem@CXTPPropertyGridItem@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
