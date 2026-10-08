// roc 2010-06 008189a0  unit: CXTPPropertyGridItem  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008189a0
//
// 008189a0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 008189a6  83f8ff               cmp eax, -1
// 008189a9  740a                 je 0x8189b5
// 008189ab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008189af  894110               mov dword ptr [ecx + 0x10], eax
// 008189b2  c20400               ret 4
// 008189b5  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 008189bb  83f801               cmp eax, 1
// 008189be  7e13                 jle 0x8189d3
// 008189c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008189c4  8b5110               mov edx, dword ptr [ecx + 0x10]
// 008189c7  83ea04               sub edx, 4
// 008189ca  0fafd0               imul edx, eax
// 008189cd  83c204               add edx, 4
// 008189d0  895110               mov dword ptr [ecx + 0x10], edx
// 008189d3  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?MeasureItem@CXTPPropertyGridItem@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
