// roc 2008-06 004a37a0  unit: RBX::Network::Server  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a37a0
//
// 004a37a0  6aff                 push -1
// 004a37a2  68abfd7b00           push 0x7bfdab
// 004a37a7  64a100000000         mov eax, dword ptr fs:[0]
// 004a37ad  50                   push eax
// 004a37ae  64892500000000       mov dword ptr fs:[0], esp
// 004a37b5  51                   push ecx
// 004a37b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004a37ba  53                   push ebx
// 004a37bb  55                   push ebp
// 004a37bc  8be9                 mov ebp, ecx
// 004a37be  56                   push esi
// 004a37bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 004a37c3  50                   push eax
// 004a37c4  8d5d04               lea ebx, [ebp + 4]
// 004a37c7  56                   push esi
// 004a37c8  8bcb                 mov ecx, ebx
// 004a37ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 004a37ce  897500               mov dword ptr [ebp], esi
// 004a37d1  e83affffff           call 0x4a3710
// 004a37d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004a37de  85f6                 test esi, esi
// 004a37e0  7453                 je 0x4a3835
// 004a37e2  57                   push edi
// 004a37e3  8dbee4000000         lea edi, [esi + 0xe4]
// 004a37e9  85ff                 test edi, edi
// 004a37eb  7431                 je 0x4a381e
// 004a37ed  8937                 mov dword ptr [edi], esi
// 004a37ef  8b33                 mov esi, dword ptr [ebx]
// 004a37f1  85f6                 test esi, esi
// 004a37f3  740c                 je 0x4a3801
// 004a37f5  8d4e08               lea ecx, [esi + 8]
// 004a37f8  ba01000000           mov edx, 1
// 004a37fd  f00fc111             lock xadd dword ptr [ecx], edx
// 004a3801  8b4f04               mov ecx, dword ptr [edi + 4]
// 004a3804  85c9                 test ecx, ecx
// 004a3806  7413                 je 0x4a381b
// 004a3808  8d4108               lea eax, [ecx + 8]
// 004a380b  83caff               or edx, 0xffffffff
// 004a380e  f00fc110             lock xadd dword ptr [eax], edx
// 004a3812  7507                 jne 0x4a381b
// 004a3814  8b01                 mov eax, dword ptr [ecx]
// 004a3816  8b5008               mov edx, dword ptr [eax + 8]
// 004a3819  ffd2                 call edx
// 004a381b  897704               mov dword ptr [edi + 4], esi
// 004a381e  5f                   pop edi
// 004a381f  5e                   pop esi
// 004a3820  8bc5                 mov eax, ebp
// 004a3822  5d                   pop ebp
// 004a3823  5b                   pop ebx
// 004a3824  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a3828  64890d00000000       mov dword ptr fs:[0], ecx
// 004a382f  83c410               add esp, 0x10
// 004a3832  c20800               ret 8
// 004a3835  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a3839  5e                   pop esi
// 004a383a  8bc5                 mov eax, ebp
// 004a383c  5d                   pop ebp
// 004a383d  5b                   pop ebx
// 004a383e  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3845  83c410               add esp, 0x10
// 004a3848  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
