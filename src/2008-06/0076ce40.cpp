// from server: 100% by auto
// roc 2008-06 0076ce40  unit: CXTPShadowsManager::CShadowWnd  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076ce40
//
// 0076ce40  83ec10               sub esp, 0x10
// 0076ce43  57                   push edi
// 0076ce44  8b7908               mov edi, dword ptr [ecx + 8]
// 0076ce47  85ff                 test edi, edi
// 0076ce49  0f8496000000         je 0x76cee5
// 0076ce4f  55                   push ebp
// 0076ce50  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0076ce54  56                   push esi
// 0076ce55  8bc7                 mov eax, edi
// 0076ce57  8b7008               mov esi, dword ptr [eax + 8]
// 0076ce5a  8b3f                 mov edi, dword ptr [edi]
// 0076ce5c  3b6e68               cmp ebp, dword ptr [esi + 0x68]
// 0076ce5f  757a                 jne 0x76cedb
// 0076ce61  8b4620               mov eax, dword ptr [esi + 0x20]
// 0076ce64  85c0                 test eax, eax
// 0076ce66  7473                 je 0x76cedb
// 0076ce68  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 0076ce6c  756d                 jne 0x76cedb
// 0076ce6e  837e6000             cmp dword ptr [esi + 0x60], 0
// 0076ce72  7412                 je 0x76ce86
// 0076ce74  6a00                 push 0
// 0076ce76  6a00                 push 0
// 0076ce78  50                   push eax
// 0076ce79  ff15d42b8000         call dword ptr [0x802bd4]
// 0076ce7f  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0076ce86  56                   push esi
// 0076ce87  8d4c2410             lea ecx, [esp + 0x10]
// 0076ce8b  e840acf8ff           call 0x6f7ad0
// 0076ce90  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0076ce94  8b442410             mov eax, dword ptr [esp + 0x10]
// 0076ce98  8b542414             mov edx, dword ptr [esp + 0x14]
// 0076ce9c  2bc8                 sub ecx, eax
// 0076ce9e  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 0076cea2  6814020000           push 0x214
// 0076cea7  7415                 je 0x76cebe
// 0076cea9  51                   push ecx
// 0076ceaa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076ceae  2bd1                 sub edx, ecx
// 0076ceb0  0354242c             add edx, dword ptr [esp + 0x2c]
// 0076ceb4  52                   push edx
// 0076ceb5  8b542434             mov edx, dword ptr [esp + 0x34]
// 0076ceb9  03d0                 add edx, eax
// 0076cebb  52                   push edx
// 0076cebc  eb13                 jmp 0x76ced1
// 0076cebe  034c242c             add ecx, dword ptr [esp + 0x2c]
// 0076cec2  51                   push ecx
// 0076cec3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076cec7  2bd1                 sub edx, ecx
// 0076cec9  52                   push edx
// 0076ceca  50                   push eax
// 0076cecb  8b442434             mov eax, dword ptr [esp + 0x34]
// 0076cecf  03c8                 add ecx, eax
// 0076ced1  51                   push ecx
// 0076ced2  6a00                 push 0
// 0076ced4  8bce                 mov ecx, esi
// 0076ced6  e86b3bf3ff           call 0x6a0a46
// 0076cedb  85ff                 test edi, edi
// 0076cedd  0f8572ffffff         jne 0x76ce55
// 0076cee3  5e                   pop esi
// 0076cee4  5d                   pop ebp
// 0076cee5  5f                   pop edi
// 0076cee6  83c410               add esp, 0x10
// 0076cee9  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?OffsetShadow@CXTPShadowsManager@@QAEXPAVCXTPCommandBar@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
