// roc 2008-06 0049a130  unit: RBX::VInstance::?$SignalDesc  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a130
//
// 0049a130  6aff                 push -1
// 0049a132  68abfd7b00           push 0x7bfdab
// 0049a137  64a100000000         mov eax, dword ptr fs:[0]
// 0049a13d  50                   push eax
// 0049a13e  64892500000000       mov dword ptr fs:[0], esp
// 0049a145  51                   push ecx
// 0049a146  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049a14a  53                   push ebx
// 0049a14b  55                   push ebp
// 0049a14c  8be9                 mov ebp, ecx
// 0049a14e  56                   push esi
// 0049a14f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0049a153  50                   push eax
// 0049a154  8d5d04               lea ebx, [ebp + 4]
// 0049a157  56                   push esi
// 0049a158  8bcb                 mov ecx, ebx
// 0049a15a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0049a15e  897500               mov dword ptr [ebp], esi
// 0049a161  e83affffff           call 0x49a0a0
// 0049a166  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049a16e  85f6                 test esi, esi
// 0049a170  7453                 je 0x49a1c5
// 0049a172  57                   push edi
// 0049a173  8dbee4000000         lea edi, [esi + 0xe4]
// 0049a179  85ff                 test edi, edi
// 0049a17b  7431                 je 0x49a1ae
// 0049a17d  8937                 mov dword ptr [edi], esi
// 0049a17f  8b33                 mov esi, dword ptr [ebx]
// 0049a181  85f6                 test esi, esi
// 0049a183  740c                 je 0x49a191
// 0049a185  8d4e08               lea ecx, [esi + 8]
// 0049a188  ba01000000           mov edx, 1
// 0049a18d  f00fc111             lock xadd dword ptr [ecx], edx
// 0049a191  8b4f04               mov ecx, dword ptr [edi + 4]
// 0049a194  85c9                 test ecx, ecx
// 0049a196  7413                 je 0x49a1ab
// 0049a198  8d4108               lea eax, [ecx + 8]
// 0049a19b  83caff               or edx, 0xffffffff
// 0049a19e  f00fc110             lock xadd dword ptr [eax], edx
// 0049a1a2  7507                 jne 0x49a1ab
// 0049a1a4  8b01                 mov eax, dword ptr [ecx]
// 0049a1a6  8b5008               mov edx, dword ptr [eax + 8]
// 0049a1a9  ffd2                 call edx
// 0049a1ab  897704               mov dword ptr [edi + 4], esi
// 0049a1ae  5f                   pop edi
// 0049a1af  5e                   pop esi
// 0049a1b0  8bc5                 mov eax, ebp
// 0049a1b2  5d                   pop ebp
// 0049a1b3  5b                   pop ebx
// 0049a1b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049a1b8  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a1bf  83c410               add esp, 0x10
// 0049a1c2  c20800               ret 8
// 0049a1c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049a1c9  5e                   pop esi
// 0049a1ca  8bc5                 mov eax, ebp
// 0049a1cc  5d                   pop ebp
// 0049a1cd  5b                   pop ebx
// 0049a1ce  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a1d5  83c410               add esp, 0x10
// 0049a1d8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
