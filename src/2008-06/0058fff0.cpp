// roc 2008-06 0058fff0  unit: TextXmlParser  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058fff0
//
// 0058fff0  56                   push esi
// 0058fff1  8bf1                 mov esi, ecx
// 0058fff3  8d442408             lea eax, [esp + 8]
// 0058fff7  50                   push eax
// 0058fff8  8d4c240c             lea ecx, [esp + 0xc]
// 0058fffc  51                   push ecx
// 0058fffd  8d4e04               lea ecx, [esi + 4]
// 00590000  e88b91ffff           call 0x589190
// 00590005  8b542408             mov edx, dword ptr [esp + 8]
// 00590009  895624               mov dword ptr [esi + 0x24], edx
// 0059000c  8bc6                 mov eax, esi
// 0059000e  5e                   pop esi
// 0059000f  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlWriter@@IAE@AAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
