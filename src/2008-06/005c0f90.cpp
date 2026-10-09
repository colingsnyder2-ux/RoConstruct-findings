// roc 2008-06 005c0f90  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c0f90
//
// 005c0f90  6aff                 push -1
// 005c0f92  68abfd7b00           push 0x7bfdab
// 005c0f97  64a100000000         mov eax, dword ptr fs:[0]
// 005c0f9d  50                   push eax
// 005c0f9e  64892500000000       mov dword ptr fs:[0], esp
// 005c0fa5  51                   push ecx
// 005c0fa6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c0faa  53                   push ebx
// 005c0fab  55                   push ebp
// 005c0fac  8be9                 mov ebp, ecx
// 005c0fae  56                   push esi
// 005c0faf  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c0fb3  50                   push eax
// 005c0fb4  8d5d04               lea ebx, [ebp + 4]
// 005c0fb7  56                   push esi
// 005c0fb8  8bcb                 mov ecx, ebx
// 005c0fba  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c0fbe  897500               mov dword ptr [ebp], esi
// 005c0fc1  e83affffff           call 0x5c0f00
// 005c0fc6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c0fce  85f6                 test esi, esi
// 005c0fd0  7453                 je 0x5c1025
// 005c0fd2  57                   push edi
// 005c0fd3  8dbee4000000         lea edi, [esi + 0xe4]
// 005c0fd9  85ff                 test edi, edi
// 005c0fdb  7431                 je 0x5c100e
// 005c0fdd  8937                 mov dword ptr [edi], esi
// 005c0fdf  8b33                 mov esi, dword ptr [ebx]
// 005c0fe1  85f6                 test esi, esi
// 005c0fe3  740c                 je 0x5c0ff1
// 005c0fe5  8d4e08               lea ecx, [esi + 8]
// 005c0fe8  ba01000000           mov edx, 1
// 005c0fed  f00fc111             lock xadd dword ptr [ecx], edx
// 005c0ff1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c0ff4  85c9                 test ecx, ecx
// 005c0ff6  7413                 je 0x5c100b
// 005c0ff8  8d4108               lea eax, [ecx + 8]
// 005c0ffb  83caff               or edx, 0xffffffff
// 005c0ffe  f00fc110             lock xadd dword ptr [eax], edx
// 005c1002  7507                 jne 0x5c100b
// 005c1004  8b01                 mov eax, dword ptr [ecx]
// 005c1006  8b5008               mov edx, dword ptr [eax + 8]
// 005c1009  ffd2                 call edx
// 005c100b  897704               mov dword ptr [edi + 4], esi
// 005c100e  5f                   pop edi
// 005c100f  5e                   pop esi
// 005c1010  8bc5                 mov eax, ebp
// 005c1012  5d                   pop ebp
// 005c1013  5b                   pop ebx
// 005c1014  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c1018  64890d00000000       mov dword ptr fs:[0], ecx
// 005c101f  83c410               add esp, 0x10
// 005c1022  c20800               ret 8
// 005c1025  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c1029  5e                   pop esi
// 005c102a  8bc5                 mov eax, ebp
// 005c102c  5d                   pop ebp
// 005c102d  5b                   pop ebx
// 005c102e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1035  83c410               add esp, 0x10
// 005c1038  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
