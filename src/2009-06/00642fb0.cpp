// roc 2009-06 00642fb0  unit: RBX::WoodTool  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00642fb0
//
// 00642fb0  6aff                 push -1
// 00642fb2  68991c8700           push 0x871c99
// 00642fb7  64a100000000         mov eax, dword ptr fs:[0]
// 00642fbd  50                   push eax
// 00642fbe  64892500000000       mov dword ptr fs:[0], esp
// 00642fc5  51                   push ecx
// 00642fc6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00642fca  56                   push esi
// 00642fcb  8bf1                 mov esi, ecx
// 00642fcd  50                   push eax
// 00642fce  89742408             mov dword ptr [esp + 8], esi
// 00642fd2  ff15b8e48900         call dword ptr [0x89e4b8]
// 00642fd8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00642fe0  e87ba9f8ff           call 0x5cd960
// 00642fe5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00642fe9  89461c               mov dword ptr [esi + 0x1c], eax
// 00642fec  8bc6                 mov eax, esi
// 00642fee  5e                   pop esi
// 00642fef  64890d00000000       mov dword ptr fs:[0], ecx
// 00642ff6  83c410               add esp, 0x10
// 00642ff9  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0ContentId@RBX@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
