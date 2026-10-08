// roc 2009-06 00609a00  unit: RBX::GlobalSettings  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00609a00
//
// 00609a00  33c0                 xor eax, eax
// 00609a02  83790402             cmp dword ptr [ecx + 4], 2
// 00609a06  0f94c0               sete al
// 00609a09  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??$isValueType@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@XmlNameValuePair@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
