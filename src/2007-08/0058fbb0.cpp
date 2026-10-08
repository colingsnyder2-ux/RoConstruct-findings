// roc 2007-08 0058fbb0  unit: RBX::VBodyVelocity::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058fbb0
//
// 0058fbb0  6aff                 push -1
// 0058fbb2  687b6b7500           push 0x756b7b
// 0058fbb7  64a100000000         mov eax, dword ptr fs:[0]
// 0058fbbd  50                   push eax
// 0058fbbe  64892500000000       mov dword ptr fs:[0], esp
// 0058fbc5  51                   push ecx
// 0058fbc6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058fbca  53                   push ebx
// 0058fbcb  55                   push ebp
// 0058fbcc  8be9                 mov ebp, ecx
// 0058fbce  56                   push esi
// 0058fbcf  8b742420             mov esi, dword ptr [esp + 0x20]
// 0058fbd3  50                   push eax
// 0058fbd4  8d5d04               lea ebx, [ebp + 4]
// 0058fbd7  56                   push esi
// 0058fbd8  8bcb                 mov ecx, ebx
// 0058fbda  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058fbde  897500               mov dword ptr [ebp], esi
// 0058fbe1  e83affffff           call 0x58fb20
// 0058fbe6  85f6                 test esi, esi
// 0058fbe8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058fbf0  7453                 je 0x58fc45
// 0058fbf2  57                   push edi
// 0058fbf3  8dbea4000000         lea edi, [esi + 0xa4]
// 0058fbf9  85ff                 test edi, edi
// 0058fbfb  7431                 je 0x58fc2e
// 0058fbfd  8937                 mov dword ptr [edi], esi
// 0058fbff  8b33                 mov esi, dword ptr [ebx]
// 0058fc01  85f6                 test esi, esi
// 0058fc03  740c                 je 0x58fc11
// 0058fc05  8d4e08               lea ecx, [esi + 8]
// 0058fc08  ba01000000           mov edx, 1
// 0058fc0d  f00fc111             lock xadd dword ptr [ecx], edx
// 0058fc11  8b4f04               mov ecx, dword ptr [edi + 4]
// 0058fc14  85c9                 test ecx, ecx
// 0058fc16  7413                 je 0x58fc2b
// 0058fc18  8d4108               lea eax, [ecx + 8]
// 0058fc1b  83caff               or edx, 0xffffffff
// 0058fc1e  f00fc110             lock xadd dword ptr [eax], edx
// 0058fc22  7507                 jne 0x58fc2b
// 0058fc24  8b01                 mov eax, dword ptr [ecx]
// 0058fc26  8b5008               mov edx, dword ptr [eax + 8]
// 0058fc29  ffd2                 call edx
// 0058fc2b  897704               mov dword ptr [edi + 4], esi
// 0058fc2e  5f                   pop edi
// 0058fc2f  5e                   pop esi
// 0058fc30  8bc5                 mov eax, ebp
// 0058fc32  5d                   pop ebp
// 0058fc33  5b                   pop ebx
// 0058fc34  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0058fc38  64890d00000000       mov dword ptr fs:[0], ecx
// 0058fc3f  83c410               add esp, 0x10
// 0058fc42  c20800               ret 8
// 0058fc45  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058fc49  5e                   pop esi
// 0058fc4a  8bc5                 mov eax, ebp
// 0058fc4c  5d                   pop ebp
// 0058fc4d  5b                   pop ebx
// 0058fc4e  64890d00000000       mov dword ptr fs:[0], ecx
// 0058fc55  83c410               add esp, 0x10
// 0058fc58  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
