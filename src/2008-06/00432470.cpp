// roc 2008-06 00432470  unit: CMainFrame  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432470
//
// 00432470  6aff                 push -1
// 00432472  68abfd7b00           push 0x7bfdab
// 00432477  64a100000000         mov eax, dword ptr fs:[0]
// 0043247d  50                   push eax
// 0043247e  64892500000000       mov dword ptr fs:[0], esp
// 00432485  51                   push ecx
// 00432486  8b442418             mov eax, dword ptr [esp + 0x18]
// 0043248a  53                   push ebx
// 0043248b  55                   push ebp
// 0043248c  8be9                 mov ebp, ecx
// 0043248e  56                   push esi
// 0043248f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00432493  50                   push eax
// 00432494  8d5d04               lea ebx, [ebp + 4]
// 00432497  56                   push esi
// 00432498  8bcb                 mov ecx, ebx
// 0043249a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0043249e  897500               mov dword ptr [ebp], esi
// 004324a1  e83affffff           call 0x4323e0
// 004324a6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004324ae  85f6                 test esi, esi
// 004324b0  7453                 je 0x432505
// 004324b2  57                   push edi
// 004324b3  8dbee4000000         lea edi, [esi + 0xe4]
// 004324b9  85ff                 test edi, edi
// 004324bb  7431                 je 0x4324ee
// 004324bd  8937                 mov dword ptr [edi], esi
// 004324bf  8b33                 mov esi, dword ptr [ebx]
// 004324c1  85f6                 test esi, esi
// 004324c3  740c                 je 0x4324d1
// 004324c5  8d4e08               lea ecx, [esi + 8]
// 004324c8  ba01000000           mov edx, 1
// 004324cd  f00fc111             lock xadd dword ptr [ecx], edx
// 004324d1  8b4f04               mov ecx, dword ptr [edi + 4]
// 004324d4  85c9                 test ecx, ecx
// 004324d6  7413                 je 0x4324eb
// 004324d8  8d4108               lea eax, [ecx + 8]
// 004324db  83caff               or edx, 0xffffffff
// 004324de  f00fc110             lock xadd dword ptr [eax], edx
// 004324e2  7507                 jne 0x4324eb
// 004324e4  8b01                 mov eax, dword ptr [ecx]
// 004324e6  8b5008               mov edx, dword ptr [eax + 8]
// 004324e9  ffd2                 call edx
// 004324eb  897704               mov dword ptr [edi + 4], esi
// 004324ee  5f                   pop edi
// 004324ef  5e                   pop esi
// 004324f0  8bc5                 mov eax, ebp
// 004324f2  5d                   pop ebp
// 004324f3  5b                   pop ebx
// 004324f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004324f8  64890d00000000       mov dword ptr fs:[0], ecx
// 004324ff  83c410               add esp, 0x10
// 00432502  c20800               ret 8
// 00432505  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00432509  5e                   pop esi
// 0043250a  8bc5                 mov eax, ebp
// 0043250c  5d                   pop ebp
// 0043250d  5b                   pop ebx
// 0043250e  64890d00000000       mov dword ptr fs:[0], ecx
// 00432515  83c410               add esp, 0x10
// 00432518  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
