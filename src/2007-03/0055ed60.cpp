// roc 2007-03 0055ed60  unit: seg_00550000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055ed60
//
// 0055ed60  33c0                 xor eax, eax
// 0055ed62  83790402             cmp dword ptr [ecx + 4], 2
// 0055ed66  0f94c0               sete al
// 0055ed69  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??$isValueType@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@XmlNameValuePair@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
