// roc 2007-08 0057b830  unit: RBX::RootInstance  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057b830
//
// 0057b830  6aff                 push -1
// 0057b832  687b6b7500           push 0x756b7b
// 0057b837  64a100000000         mov eax, dword ptr fs:[0]
// 0057b83d  50                   push eax
// 0057b83e  64892500000000       mov dword ptr fs:[0], esp
// 0057b845  51                   push ecx
// 0057b846  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057b84a  53                   push ebx
// 0057b84b  55                   push ebp
// 0057b84c  8be9                 mov ebp, ecx
// 0057b84e  56                   push esi
// 0057b84f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057b853  50                   push eax
// 0057b854  8d5d04               lea ebx, [ebp + 4]
// 0057b857  56                   push esi
// 0057b858  8bcb                 mov ecx, ebx
// 0057b85a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057b85e  897500               mov dword ptr [ebp], esi
// 0057b861  e8bafaffff           call 0x57b320
// 0057b866  85f6                 test esi, esi
// 0057b868  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057b870  7453                 je 0x57b8c5
// 0057b872  57                   push edi
// 0057b873  8dbea4000000         lea edi, [esi + 0xa4]
// 0057b879  85ff                 test edi, edi
// 0057b87b  7431                 je 0x57b8ae
// 0057b87d  8937                 mov dword ptr [edi], esi
// 0057b87f  8b33                 mov esi, dword ptr [ebx]
// 0057b881  85f6                 test esi, esi
// 0057b883  740c                 je 0x57b891
// 0057b885  8d4e08               lea ecx, [esi + 8]
// 0057b888  ba01000000           mov edx, 1
// 0057b88d  f00fc111             lock xadd dword ptr [ecx], edx
// 0057b891  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057b894  85c9                 test ecx, ecx
// 0057b896  7413                 je 0x57b8ab
// 0057b898  8d4108               lea eax, [ecx + 8]
// 0057b89b  83caff               or edx, 0xffffffff
// 0057b89e  f00fc110             lock xadd dword ptr [eax], edx
// 0057b8a2  7507                 jne 0x57b8ab
// 0057b8a4  8b01                 mov eax, dword ptr [ecx]
// 0057b8a6  8b5008               mov edx, dword ptr [eax + 8]
// 0057b8a9  ffd2                 call edx
// 0057b8ab  897704               mov dword ptr [edi + 4], esi
// 0057b8ae  5f                   pop edi
// 0057b8af  5e                   pop esi
// 0057b8b0  8bc5                 mov eax, ebp
// 0057b8b2  5d                   pop ebp
// 0057b8b3  5b                   pop ebx
// 0057b8b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057b8b8  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b8bf  83c410               add esp, 0x10
// 0057b8c2  c20800               ret 8
// 0057b8c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057b8c9  5e                   pop esi
// 0057b8ca  8bc5                 mov eax, ebp
// 0057b8cc  5d                   pop ebp
// 0057b8cd  5b                   pop ebx
// 0057b8ce  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b8d5  83c410               add esp, 0x10
// 0057b8d8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
