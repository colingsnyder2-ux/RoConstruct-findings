// roc 2008-06 0048e6e0  unit: RBX::VRunService::?$SignalDesc  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e6e0
//
// 0048e6e0  6aff                 push -1
// 0048e6e2  68abfd7b00           push 0x7bfdab
// 0048e6e7  64a100000000         mov eax, dword ptr fs:[0]
// 0048e6ed  50                   push eax
// 0048e6ee  64892500000000       mov dword ptr fs:[0], esp
// 0048e6f5  51                   push ecx
// 0048e6f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048e6fa  53                   push ebx
// 0048e6fb  55                   push ebp
// 0048e6fc  8be9                 mov ebp, ecx
// 0048e6fe  56                   push esi
// 0048e6ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048e703  50                   push eax
// 0048e704  8d5d04               lea ebx, [ebp + 4]
// 0048e707  56                   push esi
// 0048e708  8bcb                 mov ecx, ebx
// 0048e70a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048e70e  897500               mov dword ptr [ebp], esi
// 0048e711  e83affffff           call 0x48e650
// 0048e716  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048e71e  85f6                 test esi, esi
// 0048e720  7453                 je 0x48e775
// 0048e722  57                   push edi
// 0048e723  8dbee4000000         lea edi, [esi + 0xe4]
// 0048e729  85ff                 test edi, edi
// 0048e72b  7431                 je 0x48e75e
// 0048e72d  8937                 mov dword ptr [edi], esi
// 0048e72f  8b33                 mov esi, dword ptr [ebx]
// 0048e731  85f6                 test esi, esi
// 0048e733  740c                 je 0x48e741
// 0048e735  8d4e08               lea ecx, [esi + 8]
// 0048e738  ba01000000           mov edx, 1
// 0048e73d  f00fc111             lock xadd dword ptr [ecx], edx
// 0048e741  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048e744  85c9                 test ecx, ecx
// 0048e746  7413                 je 0x48e75b
// 0048e748  8d4108               lea eax, [ecx + 8]
// 0048e74b  83caff               or edx, 0xffffffff
// 0048e74e  f00fc110             lock xadd dword ptr [eax], edx
// 0048e752  7507                 jne 0x48e75b
// 0048e754  8b01                 mov eax, dword ptr [ecx]
// 0048e756  8b5008               mov edx, dword ptr [eax + 8]
// 0048e759  ffd2                 call edx
// 0048e75b  897704               mov dword ptr [edi + 4], esi
// 0048e75e  5f                   pop edi
// 0048e75f  5e                   pop esi
// 0048e760  8bc5                 mov eax, ebp
// 0048e762  5d                   pop ebp
// 0048e763  5b                   pop ebx
// 0048e764  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048e768  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e76f  83c410               add esp, 0x10
// 0048e772  c20800               ret 8
// 0048e775  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048e779  5e                   pop esi
// 0048e77a  8bc5                 mov eax, ebp
// 0048e77c  5d                   pop ebp
// 0048e77d  5b                   pop ebx
// 0048e77e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048e785  83c410               add esp, 0x10
// 0048e788  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
