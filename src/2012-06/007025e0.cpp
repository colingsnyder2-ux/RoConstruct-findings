// roc 2012-06 007025e0  unit: RBX::ChangeHistoryService  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007025e0
//
// 007025e0  64a100000000         mov eax, dword ptr fs:[0]
// 007025e6  6aff                 push -1
// 007025e8  689b34ad00           push 0xad349b
// 007025ed  50                   push eax
// 007025ee  64892500000000       mov dword ptr fs:[0], esp
// 007025f5  8b442410             mov eax, dword ptr [esp + 0x10]
// 007025f9  56                   push esi
// 007025fa  8bf1                 mov esi, ecx
// 007025fc  6a1c                 push 0x1c
// 007025fe  8906                 mov dword ptr [esi], eax
// 00702600  c7460402000000       mov dword ptr [esi + 4], 2
// 00702607  e80efb2700           call 0x98211a
// 0070260c  83c404               add esp, 4
// 0070260f  89442414             mov dword ptr [esp + 0x14], eax
// 00702613  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0070261b  85c0                 test eax, eax
// 0070261d  740f                 je 0x70262e
// 0070261f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00702623  51                   push ecx
// 00702624  8bc8                 mov ecx, eax
// 00702626  ff154826b200         call dword ptr [0xb22648]
// 0070262c  eb02                 jmp 0x702630
// 0070262e  33c0                 xor eax, eax
// 00702630  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00702634  894608               mov dword ptr [esi + 8], eax
// 00702637  8bc6                 mov eax, esi
// 00702639  64890d00000000       mov dword ptr fs:[0], ecx
// 00702640  5e                   pop esi
// 00702641  83c40c               add esp, 0xc
// 00702644  c20800               ret 8
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0XmlNameValuePair@@QAE@ABVName@RBX@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
