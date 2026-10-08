// roc 2009-06 00414a50  unit: CopyVerb  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00414a50
//
// 00414a50  56                   push esi
// 00414a51  8d7108               lea esi, [ecx + 8]
// 00414a54  8bce                 mov ecx, esi
// 00414a56  e8f5f6ffff           call 0x414150
// 00414a5b  8b06                 mov eax, dword ptr [esi]
// 00414a5d  50                   push eax
// 00414a5e  e8cf3f3000           call 0x718a32
// 00414a63  83c404               add esp, 4
// 00414a66  5e                   pop esi
// 00414a67  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ??1XmlParser@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
