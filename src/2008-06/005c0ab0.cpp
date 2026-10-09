// roc 2008-06 005c0ab0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0ab0
//
// 005c0ab0  6aff                 push -1
// 005c0ab2  68abfd7b00           push 0x7bfdab
// 005c0ab7  64a100000000         mov eax, dword ptr fs:[0]
// 005c0abd  50                   push eax
// 005c0abe  64892500000000       mov dword ptr fs:[0], esp
// 005c0ac5  51                   push ecx
// 005c0ac6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c0aca  53                   push ebx
// 005c0acb  55                   push ebp
// 005c0acc  8be9                 mov ebp, ecx
// 005c0ace  56                   push esi
// 005c0acf  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c0ad3  50                   push eax
// 005c0ad4  8d5d04               lea ebx, [ebp + 4]
// 005c0ad7  56                   push esi
// 005c0ad8  8bcb                 mov ecx, ebx
// 005c0ada  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c0ade  897500               mov dword ptr [ebp], esi
// 005c0ae1  e83affffff           call 0x5c0a20
// 005c0ae6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c0aee  85f6                 test esi, esi
// 005c0af0  7453                 je 0x5c0b45
// 005c0af2  57                   push edi
// 005c0af3  8dbee4000000         lea edi, [esi + 0xe4]
// 005c0af9  85ff                 test edi, edi
// 005c0afb  7431                 je 0x5c0b2e
// 005c0afd  8937                 mov dword ptr [edi], esi
// 005c0aff  8b33                 mov esi, dword ptr [ebx]
// 005c0b01  85f6                 test esi, esi
// 005c0b03  740c                 je 0x5c0b11
// 005c0b05  8d4e08               lea ecx, [esi + 8]
// 005c0b08  ba01000000           mov edx, 1
// 005c0b0d  f00fc111             lock xadd dword ptr [ecx], edx
// 005c0b11  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c0b14  85c9                 test ecx, ecx
// 005c0b16  7413                 je 0x5c0b2b
// 005c0b18  8d4108               lea eax, [ecx + 8]
// 005c0b1b  83caff               or edx, 0xffffffff
// 005c0b1e  f00fc110             lock xadd dword ptr [eax], edx
// 005c0b22  7507                 jne 0x5c0b2b
// 005c0b24  8b01                 mov eax, dword ptr [ecx]
// 005c0b26  8b5008               mov edx, dword ptr [eax + 8]
// 005c0b29  ffd2                 call edx
// 005c0b2b  897704               mov dword ptr [edi + 4], esi
// 005c0b2e  5f                   pop edi
// 005c0b2f  5e                   pop esi
// 005c0b30  8bc5                 mov eax, ebp
// 005c0b32  5d                   pop ebp
// 005c0b33  5b                   pop ebx
// 005c0b34  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c0b38  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0b3f  83c410               add esp, 0x10
// 005c0b42  c20800               ret 8
// 005c0b45  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c0b49  5e                   pop esi
// 005c0b4a  8bc5                 mov eax, ebp
// 005c0b4c  5d                   pop ebp
// 005c0b4d  5b                   pop ebx
// 005c0b4e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c0b55  83c410               add esp, 0x10
// 005c0b58  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
