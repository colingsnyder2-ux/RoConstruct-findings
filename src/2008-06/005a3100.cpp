// roc 2008-06 005a3100  unit: RBX::Workspace  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a3100
//
// 005a3100  6aff                 push -1
// 005a3102  68abfd7b00           push 0x7bfdab
// 005a3107  64a100000000         mov eax, dword ptr fs:[0]
// 005a310d  50                   push eax
// 005a310e  64892500000000       mov dword ptr fs:[0], esp
// 005a3115  51                   push ecx
// 005a3116  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a311a  53                   push ebx
// 005a311b  55                   push ebp
// 005a311c  8be9                 mov ebp, ecx
// 005a311e  56                   push esi
// 005a311f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a3123  50                   push eax
// 005a3124  8d5d04               lea ebx, [ebp + 4]
// 005a3127  56                   push esi
// 005a3128  8bcb                 mov ecx, ebx
// 005a312a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a312e  897500               mov dword ptr [ebp], esi
// 005a3131  e83affffff           call 0x5a3070
// 005a3136  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a313e  85f6                 test esi, esi
// 005a3140  7453                 je 0x5a3195
// 005a3142  57                   push edi
// 005a3143  8dbee4000000         lea edi, [esi + 0xe4]
// 005a3149  85ff                 test edi, edi
// 005a314b  7431                 je 0x5a317e
// 005a314d  8937                 mov dword ptr [edi], esi
// 005a314f  8b33                 mov esi, dword ptr [ebx]
// 005a3151  85f6                 test esi, esi
// 005a3153  740c                 je 0x5a3161
// 005a3155  8d4e08               lea ecx, [esi + 8]
// 005a3158  ba01000000           mov edx, 1
// 005a315d  f00fc111             lock xadd dword ptr [ecx], edx
// 005a3161  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a3164  85c9                 test ecx, ecx
// 005a3166  7413                 je 0x5a317b
// 005a3168  8d4108               lea eax, [ecx + 8]
// 005a316b  83caff               or edx, 0xffffffff
// 005a316e  f00fc110             lock xadd dword ptr [eax], edx
// 005a3172  7507                 jne 0x5a317b
// 005a3174  8b01                 mov eax, dword ptr [ecx]
// 005a3176  8b5008               mov edx, dword ptr [eax + 8]
// 005a3179  ffd2                 call edx
// 005a317b  897704               mov dword ptr [edi + 4], esi
// 005a317e  5f                   pop edi
// 005a317f  5e                   pop esi
// 005a3180  8bc5                 mov eax, ebp
// 005a3182  5d                   pop ebp
// 005a3183  5b                   pop ebx
// 005a3184  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a3188  64890d00000000       mov dword ptr fs:[0], ecx
// 005a318f  83c410               add esp, 0x10
// 005a3192  c20800               ret 8
// 005a3195  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a3199  5e                   pop esi
// 005a319a  8bc5                 mov eax, ebp
// 005a319c  5d                   pop ebp
// 005a319d  5b                   pop ebx
// 005a319e  64890d00000000       mov dword ptr fs:[0], ecx
// 005a31a5  83c410               add esp, 0x10
// 005a31a8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
