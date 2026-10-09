// roc 2008-06 005c16e0  unit: RBX::VForceField::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c16e0
//
// 005c16e0  6aff                 push -1
// 005c16e2  68abfd7b00           push 0x7bfdab
// 005c16e7  64a100000000         mov eax, dword ptr fs:[0]
// 005c16ed  50                   push eax
// 005c16ee  64892500000000       mov dword ptr fs:[0], esp
// 005c16f5  51                   push ecx
// 005c16f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c16fa  53                   push ebx
// 005c16fb  55                   push ebp
// 005c16fc  8be9                 mov ebp, ecx
// 005c16fe  56                   push esi
// 005c16ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c1703  50                   push eax
// 005c1704  8d5d04               lea ebx, [ebp + 4]
// 005c1707  56                   push esi
// 005c1708  8bcb                 mov ecx, ebx
// 005c170a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c170e  897500               mov dword ptr [ebp], esi
// 005c1711  e83affffff           call 0x5c1650
// 005c1716  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c171e  85f6                 test esi, esi
// 005c1720  7453                 je 0x5c1775
// 005c1722  57                   push edi
// 005c1723  8dbee4000000         lea edi, [esi + 0xe4]
// 005c1729  85ff                 test edi, edi
// 005c172b  7431                 je 0x5c175e
// 005c172d  8937                 mov dword ptr [edi], esi
// 005c172f  8b33                 mov esi, dword ptr [ebx]
// 005c1731  85f6                 test esi, esi
// 005c1733  740c                 je 0x5c1741
// 005c1735  8d4e08               lea ecx, [esi + 8]
// 005c1738  ba01000000           mov edx, 1
// 005c173d  f00fc111             lock xadd dword ptr [ecx], edx
// 005c1741  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c1744  85c9                 test ecx, ecx
// 005c1746  7413                 je 0x5c175b
// 005c1748  8d4108               lea eax, [ecx + 8]
// 005c174b  83caff               or edx, 0xffffffff
// 005c174e  f00fc110             lock xadd dword ptr [eax], edx
// 005c1752  7507                 jne 0x5c175b
// 005c1754  8b01                 mov eax, dword ptr [ecx]
// 005c1756  8b5008               mov edx, dword ptr [eax + 8]
// 005c1759  ffd2                 call edx
// 005c175b  897704               mov dword ptr [edi + 4], esi
// 005c175e  5f                   pop edi
// 005c175f  5e                   pop esi
// 005c1760  8bc5                 mov eax, ebp
// 005c1762  5d                   pop ebp
// 005c1763  5b                   pop ebx
// 005c1764  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c1768  64890d00000000       mov dword ptr fs:[0], ecx
// 005c176f  83c410               add esp, 0x10
// 005c1772  c20800               ret 8
// 005c1775  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c1779  5e                   pop esi
// 005c177a  8bc5                 mov eax, ebp
// 005c177c  5d                   pop ebp
// 005c177d  5b                   pop ebx
// 005c177e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1785  83c410               add esp, 0x10
// 005c1788  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
