// roc 2008-06 00615440  unit: RBX::RevoluteLink  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00615440
//
// 00615440  6aff                 push -1
// 00615442  68496b7c00           push 0x7c6b49
// 00615447  64a100000000         mov eax, dword ptr fs:[0]
// 0061544d  50                   push eax
// 0061544e  64892500000000       mov dword ptr fs:[0], esp
// 00615455  51                   push ecx
// 00615456  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061545a  56                   push esi
// 0061545b  8bf1                 mov esi, ecx
// 0061545d  50                   push eax
// 0061545e  89742408             mov dword ptr [esp + 8], esi
// 00615462  ff155c248000         call dword ptr [0x80245c]
// 00615468  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00615470  e8fbedf3ff           call 0x554270
// 00615475  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00615479  89461c               mov dword ptr [esi + 0x1c], eax
// 0061547c  8bc6                 mov eax, esi
// 0061547e  5e                   pop esi
// 0061547f  64890d00000000       mov dword ptr fs:[0], ecx
// 00615486  83c410               add esp, 0x10
// 00615489  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0ContentId@RBX@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlElement.cpp
