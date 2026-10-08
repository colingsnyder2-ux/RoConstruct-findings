// roc 2008-06 0057c1f0  unit: RBX::VInstance::?$SignalDesc  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c1f0
//
// 0057c1f0  33c0                 xor eax, eax
// 0057c1f2  83790403             cmp dword ptr [ecx + 4], 3
// 0057c1f6  0f94c0               sete al
// 0057c1f9  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??$isValueType@VContentId@RBX@@@XmlNameValuePair@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
