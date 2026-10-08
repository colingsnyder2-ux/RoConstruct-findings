// roc 2007-08 0055d2f0  unit: RBX::DataModel  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055d2f0
//
// 0055d2f0  33c0                 xor eax, eax
// 0055d2f2  83790403             cmp dword ptr [ecx + 4], 3
// 0055d2f6  0f94c0               sete al
// 0055d2f9  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??$isValueType@VContentId@RBX@@@XmlNameValuePair@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
