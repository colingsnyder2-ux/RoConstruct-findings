// roc 2011-06 006131f0  unit: TextXmlWriter  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006131f0
//
// 006131f0  56                   push esi
// 006131f1  57                   push edi
// 006131f2  8bf9                 mov edi, ecx
// 006131f4  8d7704               lea esi, [edi + 4]
// 006131f7  8bce                 mov ecx, esi
// 006131f9  e8a234eeff           call 0x4f66a0
// 006131fe  894604               mov dword ptr [esi + 4], eax
// 00613201  c6401901             mov byte ptr [eax + 0x19], 1
// 00613205  8b4604               mov eax, dword ptr [esi + 4]
// 00613208  894004               mov dword ptr [eax + 4], eax
// 0061320b  8b4604               mov eax, dword ptr [esi + 4]
// 0061320e  8900                 mov dword ptr [eax], eax
// 00613210  8b4604               mov eax, dword ptr [esi + 4]
// 00613213  894008               mov dword ptr [eax + 8], eax
// 00613216  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0061321a  c7460800000000       mov dword ptr [esi + 8], 0
// 00613221  894710               mov dword ptr [edi + 0x10], eax
// 00613224  8bc7                 mov eax, edi
// 00613226  5f                   pop edi
// 00613227  5e                   pop esi
// 00613228  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlWriter@@IAE@AAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
