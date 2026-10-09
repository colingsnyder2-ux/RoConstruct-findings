// roc 2008-06 005b7d00  unit: VStockSound::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7d00
//
// 005b7d00  6aff                 push -1
// 005b7d02  68abfd7b00           push 0x7bfdab
// 005b7d07  64a100000000         mov eax, dword ptr fs:[0]
// 005b7d0d  50                   push eax
// 005b7d0e  64892500000000       mov dword ptr fs:[0], esp
// 005b7d15  51                   push ecx
// 005b7d16  8b442418             mov eax, dword ptr [esp + 0x18]
// 005b7d1a  53                   push ebx
// 005b7d1b  55                   push ebp
// 005b7d1c  8be9                 mov ebp, ecx
// 005b7d1e  56                   push esi
// 005b7d1f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005b7d23  50                   push eax
// 005b7d24  8d5d04               lea ebx, [ebp + 4]
// 005b7d27  56                   push esi
// 005b7d28  8bcb                 mov ecx, ebx
// 005b7d2a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005b7d2e  897500               mov dword ptr [ebp], esi
// 005b7d31  e8daf7ffff           call 0x5b7510
// 005b7d36  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b7d3e  85f6                 test esi, esi
// 005b7d40  7453                 je 0x5b7d95
// 005b7d42  57                   push edi
// 005b7d43  8dbee4000000         lea edi, [esi + 0xe4]
// 005b7d49  85ff                 test edi, edi
// 005b7d4b  7431                 je 0x5b7d7e
// 005b7d4d  8937                 mov dword ptr [edi], esi
// 005b7d4f  8b33                 mov esi, dword ptr [ebx]
// 005b7d51  85f6                 test esi, esi
// 005b7d53  740c                 je 0x5b7d61
// 005b7d55  8d4e08               lea ecx, [esi + 8]
// 005b7d58  ba01000000           mov edx, 1
// 005b7d5d  f00fc111             lock xadd dword ptr [ecx], edx
// 005b7d61  8b4f04               mov ecx, dword ptr [edi + 4]
// 005b7d64  85c9                 test ecx, ecx
// 005b7d66  7413                 je 0x5b7d7b
// 005b7d68  8d4108               lea eax, [ecx + 8]
// 005b7d6b  83caff               or edx, 0xffffffff
// 005b7d6e  f00fc110             lock xadd dword ptr [eax], edx
// 005b7d72  7507                 jne 0x5b7d7b
// 005b7d74  8b01                 mov eax, dword ptr [ecx]
// 005b7d76  8b5008               mov edx, dword ptr [eax + 8]
// 005b7d79  ffd2                 call edx
// 005b7d7b  897704               mov dword ptr [edi + 4], esi
// 005b7d7e  5f                   pop edi
// 005b7d7f  5e                   pop esi
// 005b7d80  8bc5                 mov eax, ebp
// 005b7d82  5d                   pop ebp
// 005b7d83  5b                   pop ebx
// 005b7d84  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b7d88  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7d8f  83c410               add esp, 0x10
// 005b7d92  c20800               ret 8
// 005b7d95  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b7d99  5e                   pop esi
// 005b7d9a  8bc5                 mov eax, ebp
// 005b7d9c  5d                   pop ebp
// 005b7d9d  5b                   pop ebx
// 005b7d9e  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7da5  83c410               add esp, 0x10
// 005b7da8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
