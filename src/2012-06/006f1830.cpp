// roc 2012-06 006f1830  unit: RBX::DataModel  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006f1830
//
// 006f1830  33c0                 xor eax, eax
// 006f1832  83790403             cmp dword ptr [ecx + 4], 3
// 006f1836  0f94c0               sete al
// 006f1839  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??$isValueType@VContentId@RBX@@@XmlNameValuePair@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
