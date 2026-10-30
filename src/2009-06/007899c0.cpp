// roc 2009-06 007899c0  unit: CXTPPropertyGridItem  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007899c0
//
// 007899c0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007899c6  83f8ff               cmp eax, -1
// 007899c9  740a                 je 0x7899d5
// 007899cb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007899cf  894110               mov dword ptr [ecx + 0x10], eax
// 007899d2  c20400               ret 4
// 007899d5  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 007899db  83f801               cmp eax, 1
// 007899de  7e13                 jle 0x7899f3
// 007899e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007899e4  8b5110               mov edx, dword ptr [ecx + 0x10]
// 007899e7  83ea04               sub edx, 4
// 007899ea  0fafd0               imul edx, eax
// 007899ed  83c204               add edx, 4
// 007899f0  895110               mov dword ptr [ecx + 0x10], edx
// 007899f3  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?MeasureItem@CXTPPropertyGridItem@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
