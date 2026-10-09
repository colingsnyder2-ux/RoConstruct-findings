// roc 2008-06 005c2fd0  unit: RBX::VDebrisService::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2fd0
//
// 005c2fd0  6aff                 push -1
// 005c2fd2  68abfd7b00           push 0x7bfdab
// 005c2fd7  64a100000000         mov eax, dword ptr fs:[0]
// 005c2fdd  50                   push eax
// 005c2fde  64892500000000       mov dword ptr fs:[0], esp
// 005c2fe5  51                   push ecx
// 005c2fe6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c2fea  53                   push ebx
// 005c2feb  55                   push ebp
// 005c2fec  8be9                 mov ebp, ecx
// 005c2fee  56                   push esi
// 005c2fef  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c2ff3  50                   push eax
// 005c2ff4  8d5d04               lea ebx, [ebp + 4]
// 005c2ff7  56                   push esi
// 005c2ff8  8bcb                 mov ecx, ebx
// 005c2ffa  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c2ffe  897500               mov dword ptr [ebp], esi
// 005c3001  e83affffff           call 0x5c2f40
// 005c3006  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c300e  85f6                 test esi, esi
// 005c3010  7453                 je 0x5c3065
// 005c3012  57                   push edi
// 005c3013  8dbee4000000         lea edi, [esi + 0xe4]
// 005c3019  85ff                 test edi, edi
// 005c301b  7431                 je 0x5c304e
// 005c301d  8937                 mov dword ptr [edi], esi
// 005c301f  8b33                 mov esi, dword ptr [ebx]
// 005c3021  85f6                 test esi, esi
// 005c3023  740c                 je 0x5c3031
// 005c3025  8d4e08               lea ecx, [esi + 8]
// 005c3028  ba01000000           mov edx, 1
// 005c302d  f00fc111             lock xadd dword ptr [ecx], edx
// 005c3031  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c3034  85c9                 test ecx, ecx
// 005c3036  7413                 je 0x5c304b
// 005c3038  8d4108               lea eax, [ecx + 8]
// 005c303b  83caff               or edx, 0xffffffff
// 005c303e  f00fc110             lock xadd dword ptr [eax], edx
// 005c3042  7507                 jne 0x5c304b
// 005c3044  8b01                 mov eax, dword ptr [ecx]
// 005c3046  8b5008               mov edx, dword ptr [eax + 8]
// 005c3049  ffd2                 call edx
// 005c304b  897704               mov dword ptr [edi + 4], esi
// 005c304e  5f                   pop edi
// 005c304f  5e                   pop esi
// 005c3050  8bc5                 mov eax, ebp
// 005c3052  5d                   pop ebp
// 005c3053  5b                   pop ebx
// 005c3054  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c3058  64890d00000000       mov dword ptr fs:[0], ecx
// 005c305f  83c410               add esp, 0x10
// 005c3062  c20800               ret 8
// 005c3065  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c3069  5e                   pop esi
// 005c306a  8bc5                 mov eax, ebp
// 005c306c  5d                   pop ebp
// 005c306d  5b                   pop ebx
// 005c306e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3075  83c410               add esp, 0x10
// 005c3078  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
