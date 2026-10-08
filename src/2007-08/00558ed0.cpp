// roc 2007-08 00558ed0  unit: RBX::DataModel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00558ed0
//
// 00558ed0  6aff                 push -1
// 00558ed2  687b6b7500           push 0x756b7b
// 00558ed7  64a100000000         mov eax, dword ptr fs:[0]
// 00558edd  50                   push eax
// 00558ede  64892500000000       mov dword ptr fs:[0], esp
// 00558ee5  51                   push ecx
// 00558ee6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00558eea  53                   push ebx
// 00558eeb  55                   push ebp
// 00558eec  8be9                 mov ebp, ecx
// 00558eee  56                   push esi
// 00558eef  8b742420             mov esi, dword ptr [esp + 0x20]
// 00558ef3  50                   push eax
// 00558ef4  8d5d04               lea ebx, [ebp + 4]
// 00558ef7  56                   push esi
// 00558ef8  8bcb                 mov ecx, ebx
// 00558efa  896c2414             mov dword ptr [esp + 0x14], ebp
// 00558efe  897500               mov dword ptr [ebp], esi
// 00558f01  e89af8ffff           call 0x5587a0
// 00558f06  85f6                 test esi, esi
// 00558f08  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00558f10  7453                 je 0x558f65
// 00558f12  57                   push edi
// 00558f13  8dbea4000000         lea edi, [esi + 0xa4]
// 00558f19  85ff                 test edi, edi
// 00558f1b  7431                 je 0x558f4e
// 00558f1d  8937                 mov dword ptr [edi], esi
// 00558f1f  8b33                 mov esi, dword ptr [ebx]
// 00558f21  85f6                 test esi, esi
// 00558f23  740c                 je 0x558f31
// 00558f25  8d4e08               lea ecx, [esi + 8]
// 00558f28  ba01000000           mov edx, 1
// 00558f2d  f00fc111             lock xadd dword ptr [ecx], edx
// 00558f31  8b4f04               mov ecx, dword ptr [edi + 4]
// 00558f34  85c9                 test ecx, ecx
// 00558f36  7413                 je 0x558f4b
// 00558f38  8d4108               lea eax, [ecx + 8]
// 00558f3b  83caff               or edx, 0xffffffff
// 00558f3e  f00fc110             lock xadd dword ptr [eax], edx
// 00558f42  7507                 jne 0x558f4b
// 00558f44  8b01                 mov eax, dword ptr [ecx]
// 00558f46  8b5008               mov edx, dword ptr [eax + 8]
// 00558f49  ffd2                 call edx
// 00558f4b  897704               mov dword ptr [edi + 4], esi
// 00558f4e  5f                   pop edi
// 00558f4f  5e                   pop esi
// 00558f50  8bc5                 mov eax, ebp
// 00558f52  5d                   pop ebp
// 00558f53  5b                   pop ebx
// 00558f54  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00558f58  64890d00000000       mov dword ptr fs:[0], ecx
// 00558f5f  83c410               add esp, 0x10
// 00558f62  c20800               ret 8
// 00558f65  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00558f69  5e                   pop esi
// 00558f6a  8bc5                 mov eax, ebp
// 00558f6c  5d                   pop ebp
// 00558f6d  5b                   pop ebx
// 00558f6e  64890d00000000       mov dword ptr fs:[0], ecx
// 00558f75  83c410               add esp, 0x10
// 00558f78  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
