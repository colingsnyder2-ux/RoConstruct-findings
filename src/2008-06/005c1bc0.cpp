// roc 2008-06 005c1bc0  unit: RBX::VBodyGyro::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1bc0
//
// 005c1bc0  6aff                 push -1
// 005c1bc2  68abfd7b00           push 0x7bfdab
// 005c1bc7  64a100000000         mov eax, dword ptr fs:[0]
// 005c1bcd  50                   push eax
// 005c1bce  64892500000000       mov dword ptr fs:[0], esp
// 005c1bd5  51                   push ecx
// 005c1bd6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c1bda  53                   push ebx
// 005c1bdb  55                   push ebp
// 005c1bdc  8be9                 mov ebp, ecx
// 005c1bde  56                   push esi
// 005c1bdf  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c1be3  50                   push eax
// 005c1be4  8d5d04               lea ebx, [ebp + 4]
// 005c1be7  56                   push esi
// 005c1be8  8bcb                 mov ecx, ebx
// 005c1bea  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c1bee  897500               mov dword ptr [ebp], esi
// 005c1bf1  e83affffff           call 0x5c1b30
// 005c1bf6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c1bfe  85f6                 test esi, esi
// 005c1c00  7453                 je 0x5c1c55
// 005c1c02  57                   push edi
// 005c1c03  8dbee4000000         lea edi, [esi + 0xe4]
// 005c1c09  85ff                 test edi, edi
// 005c1c0b  7431                 je 0x5c1c3e
// 005c1c0d  8937                 mov dword ptr [edi], esi
// 005c1c0f  8b33                 mov esi, dword ptr [ebx]
// 005c1c11  85f6                 test esi, esi
// 005c1c13  740c                 je 0x5c1c21
// 005c1c15  8d4e08               lea ecx, [esi + 8]
// 005c1c18  ba01000000           mov edx, 1
// 005c1c1d  f00fc111             lock xadd dword ptr [ecx], edx
// 005c1c21  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c1c24  85c9                 test ecx, ecx
// 005c1c26  7413                 je 0x5c1c3b
// 005c1c28  8d4108               lea eax, [ecx + 8]
// 005c1c2b  83caff               or edx, 0xffffffff
// 005c1c2e  f00fc110             lock xadd dword ptr [eax], edx
// 005c1c32  7507                 jne 0x5c1c3b
// 005c1c34  8b01                 mov eax, dword ptr [ecx]
// 005c1c36  8b5008               mov edx, dword ptr [eax + 8]
// 005c1c39  ffd2                 call edx
// 005c1c3b  897704               mov dword ptr [edi + 4], esi
// 005c1c3e  5f                   pop edi
// 005c1c3f  5e                   pop esi
// 005c1c40  8bc5                 mov eax, ebp
// 005c1c42  5d                   pop ebp
// 005c1c43  5b                   pop ebx
// 005c1c44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c1c48  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1c4f  83c410               add esp, 0x10
// 005c1c52  c20800               ret 8
// 005c1c55  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c1c59  5e                   pop esi
// 005c1c5a  8bc5                 mov eax, ebp
// 005c1c5c  5d                   pop ebp
// 005c1c5d  5b                   pop ebx
// 005c1c5e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1c65  83c410               add esp, 0x10
// 005c1c68  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
