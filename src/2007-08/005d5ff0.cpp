// roc 2007-08 005d5ff0  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d5ff0
//
// 005d5ff0  6aff                 push -1
// 005d5ff2  687b6b7500           push 0x756b7b
// 005d5ff7  64a100000000         mov eax, dword ptr fs:[0]
// 005d5ffd  50                   push eax
// 005d5ffe  64892500000000       mov dword ptr fs:[0], esp
// 005d6005  51                   push ecx
// 005d6006  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d600a  53                   push ebx
// 005d600b  55                   push ebp
// 005d600c  8be9                 mov ebp, ecx
// 005d600e  56                   push esi
// 005d600f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d6013  50                   push eax
// 005d6014  8d5d04               lea ebx, [ebp + 4]
// 005d6017  56                   push esi
// 005d6018  8bcb                 mov ecx, ebx
// 005d601a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d601e  897500               mov dword ptr [ebp], esi
// 005d6021  e8daf2ffff           call 0x5d5300
// 005d6026  85f6                 test esi, esi
// 005d6028  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d6030  7453                 je 0x5d6085
// 005d6032  57                   push edi
// 005d6033  8dbea4000000         lea edi, [esi + 0xa4]
// 005d6039  85ff                 test edi, edi
// 005d603b  7431                 je 0x5d606e
// 005d603d  8937                 mov dword ptr [edi], esi
// 005d603f  8b33                 mov esi, dword ptr [ebx]
// 005d6041  85f6                 test esi, esi
// 005d6043  740c                 je 0x5d6051
// 005d6045  8d4e08               lea ecx, [esi + 8]
// 005d6048  ba01000000           mov edx, 1
// 005d604d  f00fc111             lock xadd dword ptr [ecx], edx
// 005d6051  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d6054  85c9                 test ecx, ecx
// 005d6056  7413                 je 0x5d606b
// 005d6058  8d4108               lea eax, [ecx + 8]
// 005d605b  83caff               or edx, 0xffffffff
// 005d605e  f00fc110             lock xadd dword ptr [eax], edx
// 005d6062  7507                 jne 0x5d606b
// 005d6064  8b01                 mov eax, dword ptr [ecx]
// 005d6066  8b5008               mov edx, dword ptr [eax + 8]
// 005d6069  ffd2                 call edx
// 005d606b  897704               mov dword ptr [edi + 4], esi
// 005d606e  5f                   pop edi
// 005d606f  5e                   pop esi
// 005d6070  8bc5                 mov eax, ebp
// 005d6072  5d                   pop ebp
// 005d6073  5b                   pop ebx
// 005d6074  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d6078  64890d00000000       mov dword ptr fs:[0], ecx
// 005d607f  83c410               add esp, 0x10
// 005d6082  c20800               ret 8
// 005d6085  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d6089  5e                   pop esi
// 005d608a  8bc5                 mov eax, ebp
// 005d608c  5d                   pop ebp
// 005d608d  5b                   pop ebx
// 005d608e  64890d00000000       mov dword ptr fs:[0], ecx
// 005d6095  83c410               add esp, 0x10
// 005d6098  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
