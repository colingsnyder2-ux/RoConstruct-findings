// roc 2010-06 005dfc60  unit: RBX::GlobalSettings  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dfc60
//
// 005dfc60  33c0                 xor eax, eax
// 005dfc62  83790402             cmp dword ptr [ecx + 4], 2
// 005dfc66  0f94c0               sete al
// 005dfc69  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??$isValueType@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@XmlNameValuePair@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
