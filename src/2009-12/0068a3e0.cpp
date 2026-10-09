// roc 2009-12 0068a3e0  unit: TextXmlWriterWithEmbeddedContent  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068a3e0
//
// 0068a3e0  56                   push esi
// 0068a3e1  8bf1                 mov esi, ecx
// 0068a3e3  8d442408             lea eax, [esp + 8]
// 0068a3e7  50                   push eax
// 0068a3e8  8d4c240c             lea ecx, [esp + 0xc]
// 0068a3ec  51                   push ecx
// 0068a3ed  8d4e04               lea ecx, [esi + 4]
// 0068a3f0  e86b0d0000           call 0x68b160
// 0068a3f5  8b542408             mov edx, dword ptr [esp + 8]
// 0068a3f9  895624               mov dword ptr [esi + 0x24], edx
// 0068a3fc  8bc6                 mov eax, esi
// 0068a3fe  5e                   pop esi
// 0068a3ff  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlWriter@@IAE@AAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
