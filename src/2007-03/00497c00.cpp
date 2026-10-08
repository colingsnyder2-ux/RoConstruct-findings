// roc 2007-03 00497c00  unit: seg_00490000  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00497c00
//
// 00497c00  8b442404             mov eax, dword ptr [esp + 4]
// 00497c04  8901                 mov dword ptr [ecx], eax
// 00497c06  c20400               ret 4
// library rbxgs/reflection\reflection_property.cpp (function ?setNextSibling@?$Sibling@VXmlAttribute@@@RBX@@AAEXPAVXmlAttribute@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_property.cpp
