// roc 2008-06 00601750  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601750
//
// 00601750  6aff                 push -1
// 00601752  68abfd7b00           push 0x7bfdab
// 00601757  64a100000000         mov eax, dword ptr fs:[0]
// 0060175d  50                   push eax
// 0060175e  64892500000000       mov dword ptr fs:[0], esp
// 00601765  51                   push ecx
// 00601766  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060176a  53                   push ebx
// 0060176b  55                   push ebp
// 0060176c  8be9                 mov ebp, ecx
// 0060176e  56                   push esi
// 0060176f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00601773  50                   push eax
// 00601774  8d5d04               lea ebx, [ebp + 4]
// 00601777  56                   push esi
// 00601778  8bcb                 mov ecx, ebx
// 0060177a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0060177e  897500               mov dword ptr [ebp], esi
// 00601781  e80af3ffff           call 0x600a90
// 00601786  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0060178e  85f6                 test esi, esi
// 00601790  7453                 je 0x6017e5
// 00601792  57                   push edi
// 00601793  8dbee4000000         lea edi, [esi + 0xe4]
// 00601799  85ff                 test edi, edi
// 0060179b  7431                 je 0x6017ce
// 0060179d  8937                 mov dword ptr [edi], esi
// 0060179f  8b33                 mov esi, dword ptr [ebx]
// 006017a1  85f6                 test esi, esi
// 006017a3  740c                 je 0x6017b1
// 006017a5  8d4e08               lea ecx, [esi + 8]
// 006017a8  ba01000000           mov edx, 1
// 006017ad  f00fc111             lock xadd dword ptr [ecx], edx
// 006017b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 006017b4  85c9                 test ecx, ecx
// 006017b6  7413                 je 0x6017cb
// 006017b8  8d4108               lea eax, [ecx + 8]
// 006017bb  83caff               or edx, 0xffffffff
// 006017be  f00fc110             lock xadd dword ptr [eax], edx
// 006017c2  7507                 jne 0x6017cb
// 006017c4  8b01                 mov eax, dword ptr [ecx]
// 006017c6  8b5008               mov edx, dword ptr [eax + 8]
// 006017c9  ffd2                 call edx
// 006017cb  897704               mov dword ptr [edi + 4], esi
// 006017ce  5f                   pop edi
// 006017cf  5e                   pop esi
// 006017d0  8bc5                 mov eax, ebp
// 006017d2  5d                   pop ebp
// 006017d3  5b                   pop ebx
// 006017d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006017d8  64890d00000000       mov dword ptr fs:[0], ecx
// 006017df  83c410               add esp, 0x10
// 006017e2  c20800               ret 8
// 006017e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006017e9  5e                   pop esi
// 006017ea  8bc5                 mov eax, ebp
// 006017ec  5d                   pop ebp
// 006017ed  5b                   pop ebx
// 006017ee  64890d00000000       mov dword ptr fs:[0], ecx
// 006017f5  83c410               add esp, 0x10
// 006017f8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
