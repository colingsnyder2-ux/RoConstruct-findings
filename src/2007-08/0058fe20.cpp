// roc 2007-08 0058fe20  unit: RBX::VRocket::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058fe20
//
// 0058fe20  6aff                 push -1
// 0058fe22  687b6b7500           push 0x756b7b
// 0058fe27  64a100000000         mov eax, dword ptr fs:[0]
// 0058fe2d  50                   push eax
// 0058fe2e  64892500000000       mov dword ptr fs:[0], esp
// 0058fe35  51                   push ecx
// 0058fe36  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058fe3a  53                   push ebx
// 0058fe3b  55                   push ebp
// 0058fe3c  8be9                 mov ebp, ecx
// 0058fe3e  56                   push esi
// 0058fe3f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058fe43  50                   push eax
// 0058fe44  8d5d04               lea ebx, [ebp + 4]
// 0058fe47  56                   push esi
// 0058fe48  8bcb                 mov ecx, ebx
// 0058fe4a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058fe4e  897500               mov dword ptr [ebp], esi
// 0058fe51  e83affffff           call 0x58fd90
// 0058fe56  85f6                 test esi, esi
// 0058fe58  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058fe60  7453                 je 0x58feb5
// 0058fe62  57                   push edi
// 0058fe63  8dbea4000000         lea edi, [esi + 0xa4]
// 0058fe69  85ff                 test edi, edi
// 0058fe6b  7431                 je 0x58fe9e
// 0058fe6d  8937                 mov dword ptr [edi], esi
// 0058fe6f  8b33                 mov esi, dword ptr [ebx]
// 0058fe71  85f6                 test esi, esi
// 0058fe73  740c                 je 0x58fe81
// 0058fe75  8d4e08               lea ecx, [esi + 8]
// 0058fe78  ba01000000           mov edx, 1
// 0058fe7d  f00fc111             lock xadd dword ptr [ecx], edx
// 0058fe81  8b4f04               mov ecx, dword ptr [edi + 4]
// 0058fe84  85c9                 test ecx, ecx
// 0058fe86  7413                 je 0x58fe9b
// 0058fe88  8d4108               lea eax, [ecx + 8]
// 0058fe8b  83caff               or edx, 0xffffffff
// 0058fe8e  f00fc110             lock xadd dword ptr [eax], edx
// 0058fe92  7507                 jne 0x58fe9b
// 0058fe94  8b01                 mov eax, dword ptr [ecx]
// 0058fe96  8b5008               mov edx, dword ptr [eax + 8]
// 0058fe99  ffd2                 call edx
// 0058fe9b  897704               mov dword ptr [edi + 4], esi
// 0058fe9e  5f                   pop edi
// 0058fe9f  5e                   pop esi
// 0058fea0  8bc5                 mov eax, ebp
// 0058fea2  5d                   pop ebp
// 0058fea3  5b                   pop ebx
// 0058fea4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058fea8  64890d00000000       mov dword ptr fs:[0], ecx
// 0058feaf  83c410               add esp, 0x10
// 0058feb2  c20800               ret 8
// 0058feb5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058feb9  5e                   pop esi
// 0058feba  8bc5                 mov eax, ebp
// 0058febc  5d                   pop ebp
// 0058febd  5b                   pop ebx
// 0058febe  64890d00000000       mov dword ptr fs:[0], ecx
// 0058fec5  83c410               add esp, 0x10
// 0058fec8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
