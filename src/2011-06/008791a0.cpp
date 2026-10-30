// roc 2011-06 008791a0  unit: CXTPPropertyGridItem  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008791a0
//
// 008791a0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 008791a6  83f8ff               cmp eax, -1
// 008791a9  740a                 je 0x8791b5
// 008791ab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008791af  894110               mov dword ptr [ecx + 0x10], eax
// 008791b2  c20400               ret 4
// 008791b5  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 008791bb  83f801               cmp eax, 1
// 008791be  7e13                 jle 0x8791d3
// 008791c0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008791c4  8b5110               mov edx, dword ptr [ecx + 0x10]
// 008791c7  83ea04               sub edx, 4
// 008791ca  0fafd0               imul edx, eax
// 008791cd  83c204               add edx, 4
// 008791d0  895110               mov dword ptr [ecx + 0x10], edx
// 008791d3  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?MeasureItem@CXTPPropertyGridItem@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
