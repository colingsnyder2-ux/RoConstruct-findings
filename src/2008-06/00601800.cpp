// roc 2008-06 00601800  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601800
//
// 00601800  6aff                 push -1
// 00601802  68abfd7b00           push 0x7bfdab
// 00601807  64a100000000         mov eax, dword ptr fs:[0]
// 0060180d  50                   push eax
// 0060180e  64892500000000       mov dword ptr fs:[0], esp
// 00601815  51                   push ecx
// 00601816  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060181a  53                   push ebx
// 0060181b  55                   push ebp
// 0060181c  8be9                 mov ebp, ecx
// 0060181e  56                   push esi
// 0060181f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00601823  50                   push eax
// 00601824  8d5d04               lea ebx, [ebp + 4]
// 00601827  56                   push esi
// 00601828  8bcb                 mov ecx, ebx
// 0060182a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0060182e  897500               mov dword ptr [ebp], esi
// 00601831  e8eaf2ffff           call 0x600b20
// 00601836  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0060183e  85f6                 test esi, esi
// 00601840  7453                 je 0x601895
// 00601842  57                   push edi
// 00601843  8dbee4000000         lea edi, [esi + 0xe4]
// 00601849  85ff                 test edi, edi
// 0060184b  7431                 je 0x60187e
// 0060184d  8937                 mov dword ptr [edi], esi
// 0060184f  8b33                 mov esi, dword ptr [ebx]
// 00601851  85f6                 test esi, esi
// 00601853  740c                 je 0x601861
// 00601855  8d4e08               lea ecx, [esi + 8]
// 00601858  ba01000000           mov edx, 1
// 0060185d  f00fc111             lock xadd dword ptr [ecx], edx
// 00601861  8b4f04               mov ecx, dword ptr [edi + 4]
// 00601864  85c9                 test ecx, ecx
// 00601866  7413                 je 0x60187b
// 00601868  8d4108               lea eax, [ecx + 8]
// 0060186b  83caff               or edx, 0xffffffff
// 0060186e  f00fc110             lock xadd dword ptr [eax], edx
// 00601872  7507                 jne 0x60187b
// 00601874  8b01                 mov eax, dword ptr [ecx]
// 00601876  8b5008               mov edx, dword ptr [eax + 8]
// 00601879  ffd2                 call edx
// 0060187b  897704               mov dword ptr [edi + 4], esi
// 0060187e  5f                   pop edi
// 0060187f  5e                   pop esi
// 00601880  8bc5                 mov eax, ebp
// 00601882  5d                   pop ebp
// 00601883  5b                   pop ebx
// 00601884  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601888  64890d00000000       mov dword ptr fs:[0], ecx
// 0060188f  83c410               add esp, 0x10
// 00601892  c20800               ret 8
// 00601895  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00601899  5e                   pop esi
// 0060189a  8bc5                 mov eax, ebp
// 0060189c  5d                   pop ebp
// 0060189d  5b                   pop ebx
// 0060189e  64890d00000000       mov dword ptr fs:[0], ecx
// 006018a5  83c410               add esp, 0x10
// 006018a8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
