// roc 2007-03 005cccd0  unit: seg_005c0000  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005cccd0
//
// 005cccd0  8b01                 mov eax, dword ptr [ecx]
// 005cccd2  8b400c               mov eax, dword ptr [eax + 0xc]
// 005cccd5  ffe0                 jmp eax
// library rbxgs/v8xml\SerializerV2.cpp (function ?announceID@MergeBinder@RBX@@UAEXPBVXmlNameValuePair@@PAVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
