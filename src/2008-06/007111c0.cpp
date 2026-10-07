// roc 2008-06 007111c0  unit: CXTPPropertyGridItem  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007111c0
//
// 007111c0  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 007111c6  83f8ff               cmp eax, -1
// 007111c9  740a                 je 0x7111d5
// 007111cb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007111cf  894110               mov dword ptr [ecx + 0x10], eax
// 007111d2  c20400               ret 4
// 007111d5  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 007111db  83f801               cmp eax, 1
// 007111de  7e13                 jle 0x7111f3
// 007111e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007111e4  8b5110               mov edx, dword ptr [ecx + 0x10]
// 007111e7  83ea04               sub edx, 4
// 007111ea  0fafd0               imul edx, eax
// 007111ed  83c204               add edx, 4
// 007111f0  895110               mov dword ptr [ecx + 0x10], edx
// 007111f3  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?MeasureItem@CXTPPropertyGridItem@@UAEXPAUtagMEASUREITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
