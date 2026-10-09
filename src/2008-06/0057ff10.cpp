// roc 2008-06 0057ff10  unit: RBX::VModelInstance::?$FilteredSelection  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057ff10
//
// 0057ff10  6aff                 push -1
// 0057ff12  68abfd7b00           push 0x7bfdab
// 0057ff17  64a100000000         mov eax, dword ptr fs:[0]
// 0057ff1d  50                   push eax
// 0057ff1e  64892500000000       mov dword ptr fs:[0], esp
// 0057ff25  51                   push ecx
// 0057ff26  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057ff2a  53                   push ebx
// 0057ff2b  55                   push ebp
// 0057ff2c  8be9                 mov ebp, ecx
// 0057ff2e  56                   push esi
// 0057ff2f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057ff33  50                   push eax
// 0057ff34  8d5d04               lea ebx, [ebp + 4]
// 0057ff37  56                   push esi
// 0057ff38  8bcb                 mov ecx, ebx
// 0057ff3a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057ff3e  897500               mov dword ptr [ebp], esi
// 0057ff41  e83affffff           call 0x57fe80
// 0057ff46  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057ff4e  85f6                 test esi, esi
// 0057ff50  7453                 je 0x57ffa5
// 0057ff52  57                   push edi
// 0057ff53  8dbee4000000         lea edi, [esi + 0xe4]
// 0057ff59  85ff                 test edi, edi
// 0057ff5b  7431                 je 0x57ff8e
// 0057ff5d  8937                 mov dword ptr [edi], esi
// 0057ff5f  8b33                 mov esi, dword ptr [ebx]
// 0057ff61  85f6                 test esi, esi
// 0057ff63  740c                 je 0x57ff71
// 0057ff65  8d4e08               lea ecx, [esi + 8]
// 0057ff68  ba01000000           mov edx, 1
// 0057ff6d  f00fc111             lock xadd dword ptr [ecx], edx
// 0057ff71  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057ff74  85c9                 test ecx, ecx
// 0057ff76  7413                 je 0x57ff8b
// 0057ff78  8d4108               lea eax, [ecx + 8]
// 0057ff7b  83caff               or edx, 0xffffffff
// 0057ff7e  f00fc110             lock xadd dword ptr [eax], edx
// 0057ff82  7507                 jne 0x57ff8b
// 0057ff84  8b01                 mov eax, dword ptr [ecx]
// 0057ff86  8b5008               mov edx, dword ptr [eax + 8]
// 0057ff89  ffd2                 call edx
// 0057ff8b  897704               mov dword ptr [edi + 4], esi
// 0057ff8e  5f                   pop edi
// 0057ff8f  5e                   pop esi
// 0057ff90  8bc5                 mov eax, ebp
// 0057ff92  5d                   pop ebp
// 0057ff93  5b                   pop ebx
// 0057ff94  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057ff98  64890d00000000       mov dword ptr fs:[0], ecx
// 0057ff9f  83c410               add esp, 0x10
// 0057ffa2  c20800               ret 8
// 0057ffa5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057ffa9  5e                   pop esi
// 0057ffaa  8bc5                 mov eax, ebp
// 0057ffac  5d                   pop ebp
// 0057ffad  5b                   pop ebx
// 0057ffae  64890d00000000       mov dword ptr fs:[0], ecx
// 0057ffb5  83c410               add esp, 0x10
// 0057ffb8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
