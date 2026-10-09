// roc 2008-06 005a13c0  unit: RBX::PartTool  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a13c0
//
// 005a13c0  6aff                 push -1
// 005a13c2  68abfd7b00           push 0x7bfdab
// 005a13c7  64a100000000         mov eax, dword ptr fs:[0]
// 005a13cd  50                   push eax
// 005a13ce  64892500000000       mov dword ptr fs:[0], esp
// 005a13d5  51                   push ecx
// 005a13d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a13da  53                   push ebx
// 005a13db  55                   push ebp
// 005a13dc  8be9                 mov ebp, ecx
// 005a13de  56                   push esi
// 005a13df  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a13e3  50                   push eax
// 005a13e4  8d5d04               lea ebx, [ebp + 4]
// 005a13e7  56                   push esi
// 005a13e8  8bcb                 mov ecx, ebx
// 005a13ea  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a13ee  897500               mov dword ptr [ebp], esi
// 005a13f1  e8eaf7ffff           call 0x5a0be0
// 005a13f6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a13fe  85f6                 test esi, esi
// 005a1400  7453                 je 0x5a1455
// 005a1402  57                   push edi
// 005a1403  8dbee4000000         lea edi, [esi + 0xe4]
// 005a1409  85ff                 test edi, edi
// 005a140b  7431                 je 0x5a143e
// 005a140d  8937                 mov dword ptr [edi], esi
// 005a140f  8b33                 mov esi, dword ptr [ebx]
// 005a1411  85f6                 test esi, esi
// 005a1413  740c                 je 0x5a1421
// 005a1415  8d4e08               lea ecx, [esi + 8]
// 005a1418  ba01000000           mov edx, 1
// 005a141d  f00fc111             lock xadd dword ptr [ecx], edx
// 005a1421  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a1424  85c9                 test ecx, ecx
// 005a1426  7413                 je 0x5a143b
// 005a1428  8d4108               lea eax, [ecx + 8]
// 005a142b  83caff               or edx, 0xffffffff
// 005a142e  f00fc110             lock xadd dword ptr [eax], edx
// 005a1432  7507                 jne 0x5a143b
// 005a1434  8b01                 mov eax, dword ptr [ecx]
// 005a1436  8b5008               mov edx, dword ptr [eax + 8]
// 005a1439  ffd2                 call edx
// 005a143b  897704               mov dword ptr [edi + 4], esi
// 005a143e  5f                   pop edi
// 005a143f  5e                   pop esi
// 005a1440  8bc5                 mov eax, ebp
// 005a1442  5d                   pop ebp
// 005a1443  5b                   pop ebx
// 005a1444  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a1448  64890d00000000       mov dword ptr fs:[0], ecx
// 005a144f  83c410               add esp, 0x10
// 005a1452  c20800               ret 8
// 005a1455  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a1459  5e                   pop esi
// 005a145a  8bc5                 mov eax, ebp
// 005a145c  5d                   pop ebp
// 005a145d  5b                   pop ebx
// 005a145e  64890d00000000       mov dword ptr fs:[0], ecx
// 005a1465  83c410               add esp, 0x10
// 005a1468  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
