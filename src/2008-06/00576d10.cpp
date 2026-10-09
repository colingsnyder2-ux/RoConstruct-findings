// roc 2008-06 00576d10  unit: RBX::DataModel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576d10
//
// 00576d10  6aff                 push -1
// 00576d12  68abfd7b00           push 0x7bfdab
// 00576d17  64a100000000         mov eax, dword ptr fs:[0]
// 00576d1d  50                   push eax
// 00576d1e  64892500000000       mov dword ptr fs:[0], esp
// 00576d25  51                   push ecx
// 00576d26  8b442418             mov eax, dword ptr [esp + 0x18]
// 00576d2a  53                   push ebx
// 00576d2b  55                   push ebp
// 00576d2c  8be9                 mov ebp, ecx
// 00576d2e  56                   push esi
// 00576d2f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00576d33  50                   push eax
// 00576d34  8d5d04               lea ebx, [ebp + 4]
// 00576d37  56                   push esi
// 00576d38  8bcb                 mov ecx, ebx
// 00576d3a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00576d3e  897500               mov dword ptr [ebp], esi
// 00576d41  e8cafaffff           call 0x576810
// 00576d46  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00576d4e  85f6                 test esi, esi
// 00576d50  7453                 je 0x576da5
// 00576d52  57                   push edi
// 00576d53  8dbee4000000         lea edi, [esi + 0xe4]
// 00576d59  85ff                 test edi, edi
// 00576d5b  7431                 je 0x576d8e
// 00576d5d  8937                 mov dword ptr [edi], esi
// 00576d5f  8b33                 mov esi, dword ptr [ebx]
// 00576d61  85f6                 test esi, esi
// 00576d63  740c                 je 0x576d71
// 00576d65  8d4e08               lea ecx, [esi + 8]
// 00576d68  ba01000000           mov edx, 1
// 00576d6d  f00fc111             lock xadd dword ptr [ecx], edx
// 00576d71  8b4f04               mov ecx, dword ptr [edi + 4]
// 00576d74  85c9                 test ecx, ecx
// 00576d76  7413                 je 0x576d8b
// 00576d78  8d4108               lea eax, [ecx + 8]
// 00576d7b  83caff               or edx, 0xffffffff
// 00576d7e  f00fc110             lock xadd dword ptr [eax], edx
// 00576d82  7507                 jne 0x576d8b
// 00576d84  8b01                 mov eax, dword ptr [ecx]
// 00576d86  8b5008               mov edx, dword ptr [eax + 8]
// 00576d89  ffd2                 call edx
// 00576d8b  897704               mov dword ptr [edi + 4], esi
// 00576d8e  5f                   pop edi
// 00576d8f  5e                   pop esi
// 00576d90  8bc5                 mov eax, ebp
// 00576d92  5d                   pop ebp
// 00576d93  5b                   pop ebx
// 00576d94  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00576d98  64890d00000000       mov dword ptr fs:[0], ecx
// 00576d9f  83c410               add esp, 0x10
// 00576da2  c20800               ret 8
// 00576da5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00576da9  5e                   pop esi
// 00576daa  8bc5                 mov eax, ebp
// 00576dac  5d                   pop ebp
// 00576dad  5b                   pop ebx
// 00576dae  64890d00000000       mov dword ptr fs:[0], ecx
// 00576db5  83c410               add esp, 0x10
// 00576db8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
