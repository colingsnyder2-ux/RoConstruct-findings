// roc 2011-06 004166a0  unit: CopyVerb  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004166a0
//
// 004166a0  56                   push esi
// 004166a1  8d7108               lea esi, [ecx + 8]
// 004166a4  8bce                 mov ecx, esi
// 004166a6  e8d5905400           call 0x95f780
// 004166ab  8b06                 mov eax, dword ptr [esi]
// 004166ad  50                   push eax
// 004166ae  e8a5393f00           call 0x80a058
// 004166b3  83c404               add esp, 4
// 004166b6  5e                   pop esi
// 004166b7  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??1XmlParser@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
