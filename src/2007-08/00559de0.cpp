// roc 2007-08 00559de0  unit: RBX::DataModel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559de0
//
// 00559de0  6aff                 push -1
// 00559de2  687b6b7500           push 0x756b7b
// 00559de7  64a100000000         mov eax, dword ptr fs:[0]
// 00559ded  50                   push eax
// 00559dee  64892500000000       mov dword ptr fs:[0], esp
// 00559df5  51                   push ecx
// 00559df6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00559dfa  53                   push ebx
// 00559dfb  55                   push ebp
// 00559dfc  8be9                 mov ebp, ecx
// 00559dfe  56                   push esi
// 00559dff  8b742420             mov esi, dword ptr [esp + 0x20]
// 00559e03  50                   push eax
// 00559e04  8d5d04               lea ebx, [ebp + 4]
// 00559e07  56                   push esi
// 00559e08  8bcb                 mov ecx, ebx
// 00559e0a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00559e0e  897500               mov dword ptr [ebp], esi
// 00559e11  e83affffff           call 0x559d50
// 00559e16  85f6                 test esi, esi
// 00559e18  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00559e20  7453                 je 0x559e75
// 00559e22  57                   push edi
// 00559e23  8dbea4000000         lea edi, [esi + 0xa4]
// 00559e29  85ff                 test edi, edi
// 00559e2b  7431                 je 0x559e5e
// 00559e2d  8937                 mov dword ptr [edi], esi
// 00559e2f  8b33                 mov esi, dword ptr [ebx]
// 00559e31  85f6                 test esi, esi
// 00559e33  740c                 je 0x559e41
// 00559e35  8d4e08               lea ecx, [esi + 8]
// 00559e38  ba01000000           mov edx, 1
// 00559e3d  f00fc111             lock xadd dword ptr [ecx], edx
// 00559e41  8b4f04               mov ecx, dword ptr [edi + 4]
// 00559e44  85c9                 test ecx, ecx
// 00559e46  7413                 je 0x559e5b
// 00559e48  8d4108               lea eax, [ecx + 8]
// 00559e4b  83caff               or edx, 0xffffffff
// 00559e4e  f00fc110             lock xadd dword ptr [eax], edx
// 00559e52  7507                 jne 0x559e5b
// 00559e54  8b01                 mov eax, dword ptr [ecx]
// 00559e56  8b5008               mov edx, dword ptr [eax + 8]
// 00559e59  ffd2                 call edx
// 00559e5b  897704               mov dword ptr [edi + 4], esi
// 00559e5e  5f                   pop edi
// 00559e5f  5e                   pop esi
// 00559e60  8bc5                 mov eax, ebp
// 00559e62  5d                   pop ebp
// 00559e63  5b                   pop ebx
// 00559e64  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00559e68  64890d00000000       mov dword ptr fs:[0], ecx
// 00559e6f  83c410               add esp, 0x10
// 00559e72  c20800               ret 8
// 00559e75  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00559e79  5e                   pop esi
// 00559e7a  8bc5                 mov eax, ebp
// 00559e7c  5d                   pop ebp
// 00559e7d  5b                   pop ebx
// 00559e7e  64890d00000000       mov dword ptr fs:[0], ecx
// 00559e85  83c410               add esp, 0x10
// 00559e88  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
