// roc 2010-06 005dfc50  unit: RBX::GlobalSettings  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005dfc50
//
// 005dfc50  33c0                 xor eax, eax
// 005dfc52  83790403             cmp dword ptr [ecx + 4], 3
// 005dfc56  0f94c0               sete al
// 005dfc59  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??$isValueType@VContentId@RBX@@@XmlNameValuePair@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
