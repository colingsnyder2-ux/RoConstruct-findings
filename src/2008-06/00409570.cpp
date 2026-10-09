// roc 2008-06 00409570  unit: RBX::Network::VPlayer::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409570
//
// 00409570  6aff                 push -1
// 00409572  68abfd7b00           push 0x7bfdab
// 00409577  64a100000000         mov eax, dword ptr fs:[0]
// 0040957d  50                   push eax
// 0040957e  64892500000000       mov dword ptr fs:[0], esp
// 00409585  51                   push ecx
// 00409586  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040958a  53                   push ebx
// 0040958b  55                   push ebp
// 0040958c  8be9                 mov ebp, ecx
// 0040958e  56                   push esi
// 0040958f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00409593  50                   push eax
// 00409594  8d5d04               lea ebx, [ebp + 4]
// 00409597  56                   push esi
// 00409598  8bcb                 mov ecx, ebx
// 0040959a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0040959e  897500               mov dword ptr [ebp], esi
// 004095a1  e83affffff           call 0x4094e0
// 004095a6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004095ae  85f6                 test esi, esi
// 004095b0  7453                 je 0x409605
// 004095b2  57                   push edi
// 004095b3  8dbee4000000         lea edi, [esi + 0xe4]
// 004095b9  85ff                 test edi, edi
// 004095bb  7431                 je 0x4095ee
// 004095bd  8937                 mov dword ptr [edi], esi
// 004095bf  8b33                 mov esi, dword ptr [ebx]
// 004095c1  85f6                 test esi, esi
// 004095c3  740c                 je 0x4095d1
// 004095c5  8d4e08               lea ecx, [esi + 8]
// 004095c8  ba01000000           mov edx, 1
// 004095cd  f00fc111             lock xadd dword ptr [ecx], edx
// 004095d1  8b4f04               mov ecx, dword ptr [edi + 4]
// 004095d4  85c9                 test ecx, ecx
// 004095d6  7413                 je 0x4095eb
// 004095d8  8d4108               lea eax, [ecx + 8]
// 004095db  83caff               or edx, 0xffffffff
// 004095de  f00fc110             lock xadd dword ptr [eax], edx
// 004095e2  7507                 jne 0x4095eb
// 004095e4  8b01                 mov eax, dword ptr [ecx]
// 004095e6  8b5008               mov edx, dword ptr [eax + 8]
// 004095e9  ffd2                 call edx
// 004095eb  897704               mov dword ptr [edi + 4], esi
// 004095ee  5f                   pop edi
// 004095ef  5e                   pop esi
// 004095f0  8bc5                 mov eax, ebp
// 004095f2  5d                   pop ebp
// 004095f3  5b                   pop ebx
// 004095f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004095f8  64890d00000000       mov dword ptr fs:[0], ecx
// 004095ff  83c410               add esp, 0x10
// 00409602  c20800               ret 8
// 00409605  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00409609  5e                   pop esi
// 0040960a  8bc5                 mov eax, ebp
// 0040960c  5d                   pop ebp
// 0040960d  5b                   pop ebx
// 0040960e  64890d00000000       mov dword ptr fs:[0], ecx
// 00409615  83c410               add esp, 0x10
// 00409618  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
