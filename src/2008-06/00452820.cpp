// roc 2008-06 00452820  unit: CRobloxDoc  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00452820
//
// 00452820  6aff                 push -1
// 00452822  68abfd7b00           push 0x7bfdab
// 00452827  64a100000000         mov eax, dword ptr fs:[0]
// 0045282d  50                   push eax
// 0045282e  64892500000000       mov dword ptr fs:[0], esp
// 00452835  51                   push ecx
// 00452836  8b442418             mov eax, dword ptr [esp + 0x18]
// 0045283a  53                   push ebx
// 0045283b  55                   push ebp
// 0045283c  8be9                 mov ebp, ecx
// 0045283e  56                   push esi
// 0045283f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00452843  50                   push eax
// 00452844  8d5d04               lea ebx, [ebp + 4]
// 00452847  56                   push esi
// 00452848  8bcb                 mov ecx, ebx
// 0045284a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0045284e  897500               mov dword ptr [ebp], esi
// 00452851  e83affffff           call 0x452790
// 00452856  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0045285e  85f6                 test esi, esi
// 00452860  7453                 je 0x4528b5
// 00452862  57                   push edi
// 00452863  8dbee4000000         lea edi, [esi + 0xe4]
// 00452869  85ff                 test edi, edi
// 0045286b  7431                 je 0x45289e
// 0045286d  8937                 mov dword ptr [edi], esi
// 0045286f  8b33                 mov esi, dword ptr [ebx]
// 00452871  85f6                 test esi, esi
// 00452873  740c                 je 0x452881
// 00452875  8d4e08               lea ecx, [esi + 8]
// 00452878  ba01000000           mov edx, 1
// 0045287d  f00fc111             lock xadd dword ptr [ecx], edx
// 00452881  8b4f04               mov ecx, dword ptr [edi + 4]
// 00452884  85c9                 test ecx, ecx
// 00452886  7413                 je 0x45289b
// 00452888  8d4108               lea eax, [ecx + 8]
// 0045288b  83caff               or edx, 0xffffffff
// 0045288e  f00fc110             lock xadd dword ptr [eax], edx
// 00452892  7507                 jne 0x45289b
// 00452894  8b01                 mov eax, dword ptr [ecx]
// 00452896  8b5008               mov edx, dword ptr [eax + 8]
// 00452899  ffd2                 call edx
// 0045289b  897704               mov dword ptr [edi + 4], esi
// 0045289e  5f                   pop edi
// 0045289f  5e                   pop esi
// 004528a0  8bc5                 mov eax, ebp
// 004528a2  5d                   pop ebp
// 004528a3  5b                   pop ebx
// 004528a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004528a8  64890d00000000       mov dword ptr fs:[0], ecx
// 004528af  83c410               add esp, 0x10
// 004528b2  c20800               ret 8
// 004528b5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004528b9  5e                   pop esi
// 004528ba  8bc5                 mov eax, ebp
// 004528bc  5d                   pop ebp
// 004528bd  5b                   pop ebx
// 004528be  64890d00000000       mov dword ptr fs:[0], ecx
// 004528c5  83c410               add esp, 0x10
// 004528c8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
