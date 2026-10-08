// roc 2009-06 0061fe10  unit: TextXmlWriterWithEmbeddedContent  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061fe10
//
// 0061fe10  56                   push esi
// 0061fe11  8bf1                 mov esi, ecx
// 0061fe13  8d442408             lea eax, [esp + 8]
// 0061fe17  50                   push eax
// 0061fe18  8d4c240c             lea ecx, [esp + 0xc]
// 0061fe1c  51                   push ecx
// 0061fe1d  8d4e04               lea ecx, [esi + 4]
// 0061fe20  e87b86ecff           call 0x4e84a0
// 0061fe25  8b542408             mov edx, dword ptr [esp + 8]
// 0061fe29  895624               mov dword ptr [esi + 0x24], edx
// 0061fe2c  8bc6                 mov eax, esi
// 0061fe2e  5e                   pop esi
// 0061fe2f  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlWriter@@IAE@AAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
