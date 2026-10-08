// roc 2008-06 0057c200  unit: RBX::VInstance::?$SignalDesc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c200
//
// 0057c200  33c0                 xor eax, eax
// 0057c202  83790402             cmp dword ptr [ecx + 4], 2
// 0057c206  0f94c0               sete al
// 0057c209  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??$isValueType@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@XmlNameValuePair@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
