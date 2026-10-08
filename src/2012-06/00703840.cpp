// roc 2012-06 00703840  unit: TextXmlWriter  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00703840
//
// 00703840  56                   push esi
// 00703841  57                   push edi
// 00703842  8bf9                 mov edi, ecx
// 00703844  8d7704               lea esi, [edi + 4]
// 00703847  8bce                 mov ecx, esi
// 00703849  e89238e6ff           call 0x5670e0
// 0070384e  894604               mov dword ptr [esi + 4], eax
// 00703851  c6401901             mov byte ptr [eax + 0x19], 1
// 00703855  8b4604               mov eax, dword ptr [esi + 4]
// 00703858  894004               mov dword ptr [eax + 4], eax
// 0070385b  8b4604               mov eax, dword ptr [esi + 4]
// 0070385e  8900                 mov dword ptr [eax], eax
// 00703860  8b4604               mov eax, dword ptr [esi + 4]
// 00703863  894008               mov dword ptr [eax + 8], eax
// 00703866  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0070386a  c7460800000000       mov dword ptr [esi + 8], 0
// 00703871  894710               mov dword ptr [edi + 0x10], eax
// 00703874  8bc7                 mov eax, edi
// 00703876  5f                   pop edi
// 00703877  5e                   pop esi
// 00703878  c20400               ret 4
// library rbxgs/v8xml\XmlSerializer.cpp (function ??0XmlWriter@@IAE@AAV?$basic_ostream@DU?$char_traits@D@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlSerializer.cpp
