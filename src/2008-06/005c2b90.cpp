// roc 2008-06 005c2b90  unit: RBX::VObjectValue::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2b90
//
// 005c2b90  6aff                 push -1
// 005c2b92  68abfd7b00           push 0x7bfdab
// 005c2b97  64a100000000         mov eax, dword ptr fs:[0]
// 005c2b9d  50                   push eax
// 005c2b9e  64892500000000       mov dword ptr fs:[0], esp
// 005c2ba5  51                   push ecx
// 005c2ba6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c2baa  53                   push ebx
// 005c2bab  55                   push ebp
// 005c2bac  8be9                 mov ebp, ecx
// 005c2bae  56                   push esi
// 005c2baf  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c2bb3  50                   push eax
// 005c2bb4  8d5d04               lea ebx, [ebp + 4]
// 005c2bb7  56                   push esi
// 005c2bb8  8bcb                 mov ecx, ebx
// 005c2bba  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c2bbe  897500               mov dword ptr [ebp], esi
// 005c2bc1  e82affffff           call 0x5c2af0
// 005c2bc6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c2bce  85f6                 test esi, esi
// 005c2bd0  7453                 je 0x5c2c25
// 005c2bd2  57                   push edi
// 005c2bd3  8dbee4000000         lea edi, [esi + 0xe4]
// 005c2bd9  85ff                 test edi, edi
// 005c2bdb  7431                 je 0x5c2c0e
// 005c2bdd  8937                 mov dword ptr [edi], esi
// 005c2bdf  8b33                 mov esi, dword ptr [ebx]
// 005c2be1  85f6                 test esi, esi
// 005c2be3  740c                 je 0x5c2bf1
// 005c2be5  8d4e08               lea ecx, [esi + 8]
// 005c2be8  ba01000000           mov edx, 1
// 005c2bed  f00fc111             lock xadd dword ptr [ecx], edx
// 005c2bf1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c2bf4  85c9                 test ecx, ecx
// 005c2bf6  7413                 je 0x5c2c0b
// 005c2bf8  8d4108               lea eax, [ecx + 8]
// 005c2bfb  83caff               or edx, 0xffffffff
// 005c2bfe  f00fc110             lock xadd dword ptr [eax], edx
// 005c2c02  7507                 jne 0x5c2c0b
// 005c2c04  8b01                 mov eax, dword ptr [ecx]
// 005c2c06  8b5008               mov edx, dword ptr [eax + 8]
// 005c2c09  ffd2                 call edx
// 005c2c0b  897704               mov dword ptr [edi + 4], esi
// 005c2c0e  5f                   pop edi
// 005c2c0f  5e                   pop esi
// 005c2c10  8bc5                 mov eax, ebp
// 005c2c12  5d                   pop ebp
// 005c2c13  5b                   pop ebx
// 005c2c14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c2c18  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2c1f  83c410               add esp, 0x10
// 005c2c22  c20800               ret 8
// 005c2c25  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c2c29  5e                   pop esi
// 005c2c2a  8bc5                 mov eax, ebp
// 005c2c2c  5d                   pop ebp
// 005c2c2d  5b                   pop ebx
// 005c2c2e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2c35  83c410               add esp, 0x10
// 005c2c38  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
