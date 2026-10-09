// roc 2008-06 00415020  unit: boost::detail::sp_counted_base  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00415020
//
// 00415020  6aff                 push -1
// 00415022  68abfd7b00           push 0x7bfdab
// 00415027  64a100000000         mov eax, dword ptr fs:[0]
// 0041502d  50                   push eax
// 0041502e  64892500000000       mov dword ptr fs:[0], esp
// 00415035  51                   push ecx
// 00415036  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041503a  53                   push ebx
// 0041503b  55                   push ebp
// 0041503c  8be9                 mov ebp, ecx
// 0041503e  56                   push esi
// 0041503f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00415043  50                   push eax
// 00415044  8d5d04               lea ebx, [ebp + 4]
// 00415047  56                   push esi
// 00415048  8bcb                 mov ecx, ebx
// 0041504a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0041504e  897500               mov dword ptr [ebp], esi
// 00415051  e81affffff           call 0x414f70
// 00415056  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041505e  85f6                 test esi, esi
// 00415060  7453                 je 0x4150b5
// 00415062  57                   push edi
// 00415063  8dbee4000000         lea edi, [esi + 0xe4]
// 00415069  85ff                 test edi, edi
// 0041506b  7431                 je 0x41509e
// 0041506d  8937                 mov dword ptr [edi], esi
// 0041506f  8b33                 mov esi, dword ptr [ebx]
// 00415071  85f6                 test esi, esi
// 00415073  740c                 je 0x415081
// 00415075  8d4e08               lea ecx, [esi + 8]
// 00415078  ba01000000           mov edx, 1
// 0041507d  f00fc111             lock xadd dword ptr [ecx], edx
// 00415081  8b4f04               mov ecx, dword ptr [edi + 4]
// 00415084  85c9                 test ecx, ecx
// 00415086  7413                 je 0x41509b
// 00415088  8d4108               lea eax, [ecx + 8]
// 0041508b  83caff               or edx, 0xffffffff
// 0041508e  f00fc110             lock xadd dword ptr [eax], edx
// 00415092  7507                 jne 0x41509b
// 00415094  8b01                 mov eax, dword ptr [ecx]
// 00415096  8b5008               mov edx, dword ptr [eax + 8]
// 00415099  ffd2                 call edx
// 0041509b  897704               mov dword ptr [edi + 4], esi
// 0041509e  5f                   pop edi
// 0041509f  5e                   pop esi
// 004150a0  8bc5                 mov eax, ebp
// 004150a2  5d                   pop ebp
// 004150a3  5b                   pop ebx
// 004150a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004150a8  64890d00000000       mov dword ptr fs:[0], ecx
// 004150af  83c410               add esp, 0x10
// 004150b2  c20800               ret 8
// 004150b5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004150b9  5e                   pop esi
// 004150ba  8bc5                 mov eax, ebp
// 004150bc  5d                   pop ebp
// 004150bd  5b                   pop ebx
// 004150be  64890d00000000       mov dword ptr fs:[0], ecx
// 004150c5  83c410               add esp, 0x10
// 004150c8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
