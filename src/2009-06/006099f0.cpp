// roc 2009-06 006099f0  unit: RBX::GlobalSettings  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006099f0
//
// 006099f0  33c0                 xor eax, eax
// 006099f2  83790403             cmp dword ptr [ecx + 4], 3
// 006099f6  0f94c0               sete al
// 006099f9  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??$isValueType@VContentId@RBX@@@XmlNameValuePair@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
