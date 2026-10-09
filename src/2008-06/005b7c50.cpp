// roc 2008-06 005b7c50  unit: VStockSound::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7c50
//
// 005b7c50  6aff                 push -1
// 005b7c52  68abfd7b00           push 0x7bfdab
// 005b7c57  64a100000000         mov eax, dword ptr fs:[0]
// 005b7c5d  50                   push eax
// 005b7c5e  64892500000000       mov dword ptr fs:[0], esp
// 005b7c65  51                   push ecx
// 005b7c66  8b442418             mov eax, dword ptr [esp + 0x18]
// 005b7c6a  53                   push ebx
// 005b7c6b  55                   push ebp
// 005b7c6c  8be9                 mov ebp, ecx
// 005b7c6e  56                   push esi
// 005b7c6f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005b7c73  50                   push eax
// 005b7c74  8d5d04               lea ebx, [ebp + 4]
// 005b7c77  56                   push esi
// 005b7c78  8bcb                 mov ecx, ebx
// 005b7c7a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005b7c7e  897500               mov dword ptr [ebp], esi
// 005b7c81  e8faf7ffff           call 0x5b7480
// 005b7c86  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b7c8e  85f6                 test esi, esi
// 005b7c90  7453                 je 0x5b7ce5
// 005b7c92  57                   push edi
// 005b7c93  8dbee4000000         lea edi, [esi + 0xe4]
// 005b7c99  85ff                 test edi, edi
// 005b7c9b  7431                 je 0x5b7cce
// 005b7c9d  8937                 mov dword ptr [edi], esi
// 005b7c9f  8b33                 mov esi, dword ptr [ebx]
// 005b7ca1  85f6                 test esi, esi
// 005b7ca3  740c                 je 0x5b7cb1
// 005b7ca5  8d4e08               lea ecx, [esi + 8]
// 005b7ca8  ba01000000           mov edx, 1
// 005b7cad  f00fc111             lock xadd dword ptr [ecx], edx
// 005b7cb1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005b7cb4  85c9                 test ecx, ecx
// 005b7cb6  7413                 je 0x5b7ccb
// 005b7cb8  8d4108               lea eax, [ecx + 8]
// 005b7cbb  83caff               or edx, 0xffffffff
// 005b7cbe  f00fc110             lock xadd dword ptr [eax], edx
// 005b7cc2  7507                 jne 0x5b7ccb
// 005b7cc4  8b01                 mov eax, dword ptr [ecx]
// 005b7cc6  8b5008               mov edx, dword ptr [eax + 8]
// 005b7cc9  ffd2                 call edx
// 005b7ccb  897704               mov dword ptr [edi + 4], esi
// 005b7cce  5f                   pop edi
// 005b7ccf  5e                   pop esi
// 005b7cd0  8bc5                 mov eax, ebp
// 005b7cd2  5d                   pop ebp
// 005b7cd3  5b                   pop ebx
// 005b7cd4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b7cd8  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7cdf  83c410               add esp, 0x10
// 005b7ce2  c20800               ret 8
// 005b7ce5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b7ce9  5e                   pop esi
// 005b7cea  8bc5                 mov eax, ebp
// 005b7cec  5d                   pop ebp
// 005b7ced  5b                   pop ebx
// 005b7cee  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7cf5  83c410               add esp, 0x10
// 005b7cf8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
