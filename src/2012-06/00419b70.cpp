// roc 2012-06 00419b70  unit: CopyVerb  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00419b70
//
// 00419b70  56                   push esi
// 00419b71  8d7108               lea esi, [ecx + 8]
// 00419b74  8bce                 mov ecx, esi
// 00419b76  e8a5ab1500           call 0x574720
// 00419b7b  8b06                 mov eax, dword ptr [esi]
// 00419b7d  50                   push eax
// 00419b7e  e891855600           call 0x982114
// 00419b83  83c404               add esp, 4
// 00419b86  5e                   pop esi
// 00419b87  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??1XmlParser@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
