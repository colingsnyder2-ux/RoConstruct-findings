// roc 2008-06 0048f3e0  unit: RBX::VSpawnerService::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f3e0
//
// 0048f3e0  6aff                 push -1
// 0048f3e2  68abfd7b00           push 0x7bfdab
// 0048f3e7  64a100000000         mov eax, dword ptr fs:[0]
// 0048f3ed  50                   push eax
// 0048f3ee  64892500000000       mov dword ptr fs:[0], esp
// 0048f3f5  51                   push ecx
// 0048f3f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048f3fa  53                   push ebx
// 0048f3fb  55                   push ebp
// 0048f3fc  8be9                 mov ebp, ecx
// 0048f3fe  56                   push esi
// 0048f3ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048f403  50                   push eax
// 0048f404  8d5d04               lea ebx, [ebp + 4]
// 0048f407  56                   push esi
// 0048f408  8bcb                 mov ecx, ebx
// 0048f40a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048f40e  897500               mov dword ptr [ebp], esi
// 0048f411  e83affffff           call 0x48f350
// 0048f416  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048f41e  85f6                 test esi, esi
// 0048f420  7453                 je 0x48f475
// 0048f422  57                   push edi
// 0048f423  8dbee4000000         lea edi, [esi + 0xe4]
// 0048f429  85ff                 test edi, edi
// 0048f42b  7431                 je 0x48f45e
// 0048f42d  8937                 mov dword ptr [edi], esi
// 0048f42f  8b33                 mov esi, dword ptr [ebx]
// 0048f431  85f6                 test esi, esi
// 0048f433  740c                 je 0x48f441
// 0048f435  8d4e08               lea ecx, [esi + 8]
// 0048f438  ba01000000           mov edx, 1
// 0048f43d  f00fc111             lock xadd dword ptr [ecx], edx
// 0048f441  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048f444  85c9                 test ecx, ecx
// 0048f446  7413                 je 0x48f45b
// 0048f448  8d4108               lea eax, [ecx + 8]
// 0048f44b  83caff               or edx, 0xffffffff
// 0048f44e  f00fc110             lock xadd dword ptr [eax], edx
// 0048f452  7507                 jne 0x48f45b
// 0048f454  8b01                 mov eax, dword ptr [ecx]
// 0048f456  8b5008               mov edx, dword ptr [eax + 8]
// 0048f459  ffd2                 call edx
// 0048f45b  897704               mov dword ptr [edi + 4], esi
// 0048f45e  5f                   pop edi
// 0048f45f  5e                   pop esi
// 0048f460  8bc5                 mov eax, ebp
// 0048f462  5d                   pop ebp
// 0048f463  5b                   pop ebx
// 0048f464  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048f468  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f46f  83c410               add esp, 0x10
// 0048f472  c20800               ret 8
// 0048f475  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048f479  5e                   pop esi
// 0048f47a  8bc5                 mov eax, ebp
// 0048f47c  5d                   pop ebp
// 0048f47d  5b                   pop ebx
// 0048f47e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f485  83c410               add esp, 0x10
// 0048f488  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
