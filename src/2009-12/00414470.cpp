// roc 2009-12 00414470  unit: CopyVerb  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00414470
//
// 00414470  56                   push esi
// 00414471  8d7108               lea esi, [ecx + 8]
// 00414474  8bce                 mov ecx, esi
// 00414476  e885e62600           call 0x682b00
// 0041447b  8b06                 mov eax, dword ptr [esi]
// 0041447d  50                   push eax
// 0041447e  e8d7f33d00           call 0x7f385a
// 00414483  83c404               add esp, 4
// 00414486  5e                   pop esi
// 00414487  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??1XmlParser@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
