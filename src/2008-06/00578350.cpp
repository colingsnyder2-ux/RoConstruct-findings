// roc 2008-06 00578350  unit: RBX::VLocalBackpack::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578350
//
// 00578350  6aff                 push -1
// 00578352  68abfd7b00           push 0x7bfdab
// 00578357  64a100000000         mov eax, dword ptr fs:[0]
// 0057835d  50                   push eax
// 0057835e  64892500000000       mov dword ptr fs:[0], esp
// 00578365  51                   push ecx
// 00578366  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057836a  53                   push ebx
// 0057836b  55                   push ebp
// 0057836c  8be9                 mov ebp, ecx
// 0057836e  56                   push esi
// 0057836f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00578373  50                   push eax
// 00578374  8d5d04               lea ebx, [ebp + 4]
// 00578377  56                   push esi
// 00578378  8bcb                 mov ecx, ebx
// 0057837a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057837e  897500               mov dword ptr [ebp], esi
// 00578381  e83affffff           call 0x5782c0
// 00578386  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057838e  85f6                 test esi, esi
// 00578390  7453                 je 0x5783e5
// 00578392  57                   push edi
// 00578393  8dbee4000000         lea edi, [esi + 0xe4]
// 00578399  85ff                 test edi, edi
// 0057839b  7431                 je 0x5783ce
// 0057839d  8937                 mov dword ptr [edi], esi
// 0057839f  8b33                 mov esi, dword ptr [ebx]
// 005783a1  85f6                 test esi, esi
// 005783a3  740c                 je 0x5783b1
// 005783a5  8d4e08               lea ecx, [esi + 8]
// 005783a8  ba01000000           mov edx, 1
// 005783ad  f00fc111             lock xadd dword ptr [ecx], edx
// 005783b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005783b4  85c9                 test ecx, ecx
// 005783b6  7413                 je 0x5783cb
// 005783b8  8d4108               lea eax, [ecx + 8]
// 005783bb  83caff               or edx, 0xffffffff
// 005783be  f00fc110             lock xadd dword ptr [eax], edx
// 005783c2  7507                 jne 0x5783cb
// 005783c4  8b01                 mov eax, dword ptr [ecx]
// 005783c6  8b5008               mov edx, dword ptr [eax + 8]
// 005783c9  ffd2                 call edx
// 005783cb  897704               mov dword ptr [edi + 4], esi
// 005783ce  5f                   pop edi
// 005783cf  5e                   pop esi
// 005783d0  8bc5                 mov eax, ebp
// 005783d2  5d                   pop ebp
// 005783d3  5b                   pop ebx
// 005783d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005783d8  64890d00000000       mov dword ptr fs:[0], ecx
// 005783df  83c410               add esp, 0x10
// 005783e2  c20800               ret 8
// 005783e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005783e9  5e                   pop esi
// 005783ea  8bc5                 mov eax, ebp
// 005783ec  5d                   pop ebp
// 005783ed  5b                   pop ebx
// 005783ee  64890d00000000       mov dword ptr fs:[0], ecx
// 005783f5  83c410               add esp, 0x10
// 005783f8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
