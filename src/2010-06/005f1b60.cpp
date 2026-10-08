// roc 2010-06 005f1b60  unit: TextXmlWriterWithEmbeddedContent  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f1b60
//
// 005f1b60  56                   push esi
// 005f1b61  8bf1                 mov esi, ecx
// 005f1b63  8d442408             lea eax, [esp + 8]
// 005f1b67  50                   push eax
// 005f1b68  8d4c240c             lea ecx, [esp + 0xc]
// 005f1b6c  51                   push ecx
// 005f1b6d  8d4e04               lea ecx, [esi + 4]
// 005f1b70  e81b180300           call 0x623390
// 005f1b75  8b542408             mov edx, dword ptr [esp + 8]
// 005f1b79  895624               mov dword ptr [esi + 0x24], edx
// 005f1b7c  8bc6                 mov eax, esi
// 005f1b7e  5e                   pop esi
// 005f1b7f  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlWriter@@IAE@AAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
