// roc 2008-06 005c0d20  unit: RBX::VClickDetector::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0d20
//
// 005c0d20  6aff                 push -1
// 005c0d22  68abfd7b00           push 0x7bfdab
// 005c0d27  64a100000000         mov eax, dword ptr fs:[0]
// 005c0d2d  50                   push eax
// 005c0d2e  64892500000000       mov dword ptr fs:[0], esp
// 005c0d35  51                   push ecx
// 005c0d36  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c0d3a  53                   push ebx
// 005c0d3b  55                   push ebp
// 005c0d3c  8be9                 mov ebp, ecx
// 005c0d3e  56                   push esi
// 005c0d3f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c0d43  50                   push eax
// 005c0d44  8d5d04               lea ebx, [ebp + 4]
// 005c0d47  56                   push esi
// 005c0d48  8bcb                 mov ecx, ebx
// 005c0d4a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c0d4e  897500               mov dword ptr [ebp], esi
// 005c0d51  e83affffff           call 0x5c0c90
// 005c0d56  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c0d5e  85f6                 test esi, esi
// 005c0d60  7453                 je 0x5c0db5
// 005c0d62  57                   push edi
// 005c0d63  8dbee4000000         lea edi, [esi + 0xe4]
// 005c0d69  85ff                 test edi, edi
// 005c0d6b  7431                 je 0x5c0d9e
// 005c0d6d  8937                 mov dword ptr [edi], esi
// 005c0d6f  8b33                 mov esi, dword ptr [ebx]
// 005c0d71  85f6                 test esi, esi
// 005c0d73  740c                 je 0x5c0d81
// 005c0d75  8d4e08               lea ecx, [esi + 8]
// 005c0d78  ba01000000           mov edx, 1
// 005c0d7d  f00fc111             lock xadd dword ptr [ecx], edx
// 005c0d81  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c0d84  85c9                 test ecx, ecx
// 005c0d86  7413                 je 0x5c0d9b
// 005c0d88  8d4108               lea eax, [ecx + 8]
// 005c0d8b  83caff               or edx, 0xffffffff
// 005c0d8e  f00fc110             lock xadd dword ptr [eax], edx
// 005c0d92  7507                 jne 0x5c0d9b
// 005c0d94  8b01                 mov eax, dword ptr [ecx]
// 005c0d96  8b5008               mov edx, dword ptr [eax + 8]
// 005c0d99  ffd2                 call edx
// 005c0d9b  897704               mov dword ptr [edi + 4], esi
// 005c0d9e  5f                   pop edi
// 005c0d9f  5e                   pop esi
// 005c0da0  8bc5                 mov eax, ebp
// 005c0da2  5d                   pop ebp
// 005c0da3  5b                   pop ebx
// 005c0da4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c0da8  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0daf  83c410               add esp, 0x10
// 005c0db2  c20800               ret 8
// 005c0db5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c0db9  5e                   pop esi
// 005c0dba  8bc5                 mov eax, ebp
// 005c0dbc  5d                   pop ebp
// 005c0dbd  5b                   pop ebx
// 005c0dbe  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0dc5  83c410               add esp, 0x10
// 005c0dc8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
