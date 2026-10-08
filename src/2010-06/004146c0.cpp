// roc 2010-06 004146c0  unit: CopyVerb  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004146c0
//
// 004146c0  56                   push esi
// 004146c1  8d7108               lea esi, [ecx + 8]
// 004146c4  8bce                 mov ecx, esi
// 004146c6  e8f5f6ffff           call 0x413dc0
// 004146cb  8b06                 mov eax, dword ptr [esi]
// 004146cd  50                   push eax
// 004146ce  e8c7323900           call 0x7a799a
// 004146d3  83c404               add esp, 4
// 004146d6  5e                   pop esi
// 004146d7  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??1XmlParser@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
