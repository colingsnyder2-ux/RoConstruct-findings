// roc 2007-08 006233c0  unit: RBX::ArrowPanel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006233c0
//
// 006233c0  6aff                 push -1
// 006233c2  687b6b7500           push 0x756b7b
// 006233c7  64a100000000         mov eax, dword ptr fs:[0]
// 006233cd  50                   push eax
// 006233ce  64892500000000       mov dword ptr fs:[0], esp
// 006233d5  51                   push ecx
// 006233d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006233da  53                   push ebx
// 006233db  55                   push ebp
// 006233dc  8be9                 mov ebp, ecx
// 006233de  56                   push esi
// 006233df  8b742420             mov esi, dword ptr [esp + 0x20]
// 006233e3  50                   push eax
// 006233e4  8d5d04               lea ebx, [ebp + 4]
// 006233e7  56                   push esi
// 006233e8  8bcb                 mov ecx, ebx
// 006233ea  896c2414             mov dword ptr [esp + 0x14], ebp
// 006233ee  897500               mov dword ptr [ebp], esi
// 006233f1  e83afeffff           call 0x623230
// 006233f6  85f6                 test esi, esi
// 006233f8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00623400  7453                 je 0x623455
// 00623402  57                   push edi
// 00623403  8dbea4000000         lea edi, [esi + 0xa4]
// 00623409  85ff                 test edi, edi
// 0062340b  7431                 je 0x62343e
// 0062340d  8937                 mov dword ptr [edi], esi
// 0062340f  8b33                 mov esi, dword ptr [ebx]
// 00623411  85f6                 test esi, esi
// 00623413  740c                 je 0x623421
// 00623415  8d4e08               lea ecx, [esi + 8]
// 00623418  ba01000000           mov edx, 1
// 0062341d  f00fc111             lock xadd dword ptr [ecx], edx
// 00623421  8b4f04               mov ecx, dword ptr [edi + 4]
// 00623424  85c9                 test ecx, ecx
// 00623426  7413                 je 0x62343b
// 00623428  8d4108               lea eax, [ecx + 8]
// 0062342b  83caff               or edx, 0xffffffff
// 0062342e  f00fc110             lock xadd dword ptr [eax], edx
// 00623432  7507                 jne 0x62343b
// 00623434  8b01                 mov eax, dword ptr [ecx]
// 00623436  8b5008               mov edx, dword ptr [eax + 8]
// 00623439  ffd2                 call edx
// 0062343b  897704               mov dword ptr [edi + 4], esi
// 0062343e  5f                   pop edi
// 0062343f  5e                   pop esi
// 00623440  8bc5                 mov eax, ebp
// 00623442  5d                   pop ebp
// 00623443  5b                   pop ebx
// 00623444  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00623448  64890d00000000       mov dword ptr fs:[0], ecx
// 0062344f  83c410               add esp, 0x10
// 00623452  c20800               ret 8
// 00623455  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00623459  5e                   pop esi
// 0062345a  8bc5                 mov eax, ebp
// 0062345c  5d                   pop ebp
// 0062345d  5b                   pop ebx
// 0062345e  64890d00000000       mov dword ptr fs:[0], ecx
// 00623465  83c410               add esp, 0x10
// 00623468  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
