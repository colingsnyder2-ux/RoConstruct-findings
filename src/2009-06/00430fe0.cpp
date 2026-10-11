// roc 2009-06 00430fe0  unit: CStandardOutputView  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00430fe0
//
// 00430fe0  6aff                 push -1
// 00430fe2  68991c8700           push 0x871c99
// 00430fe7  64a100000000         mov eax, dword ptr fs:[0]
// 00430fed  50                   push eax
// 00430fee  64892500000000       mov dword ptr fs:[0], esp
// 00430ff5  51                   push ecx
// 00430ff6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00430ffa  56                   push esi
// 00430ffb  8bf1                 mov esi, ecx
// 00430ffd  50                   push eax
// 00430ffe  89742408             mov dword ptr [esp + 8], esi
// 00431002  ff15b4e48900         call dword ptr [0x89e4b4]
// 00431008  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00431010  e84bc91900           call 0x5cd960
// 00431015  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00431019  89461c               mov dword ptr [esi + 0x1c], eax
// 0043101c  8bc6                 mov eax, esi
// 0043101e  5e                   pop esi
// 0043101f  64890d00000000       mov dword ptr fs:[0], ecx
// 00431026  83c410               add esp, 0x10
// 00431029  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0ContentId@RBX@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
