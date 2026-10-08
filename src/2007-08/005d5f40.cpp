// roc 2007-08 005d5f40  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d5f40
//
// 005d5f40  6aff                 push -1
// 005d5f42  687b6b7500           push 0x756b7b
// 005d5f47  64a100000000         mov eax, dword ptr fs:[0]
// 005d5f4d  50                   push eax
// 005d5f4e  64892500000000       mov dword ptr fs:[0], esp
// 005d5f55  51                   push ecx
// 005d5f56  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d5f5a  53                   push ebx
// 005d5f5b  55                   push ebp
// 005d5f5c  8be9                 mov ebp, ecx
// 005d5f5e  56                   push esi
// 005d5f5f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d5f63  50                   push eax
// 005d5f64  8d5d04               lea ebx, [ebp + 4]
// 005d5f67  56                   push esi
// 005d5f68  8bcb                 mov ecx, ebx
// 005d5f6a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d5f6e  897500               mov dword ptr [ebp], esi
// 005d5f71  e8faf2ffff           call 0x5d5270
// 005d5f76  85f6                 test esi, esi
// 005d5f78  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d5f80  7453                 je 0x5d5fd5
// 005d5f82  57                   push edi
// 005d5f83  8dbea4000000         lea edi, [esi + 0xa4]
// 005d5f89  85ff                 test edi, edi
// 005d5f8b  7431                 je 0x5d5fbe
// 005d5f8d  8937                 mov dword ptr [edi], esi
// 005d5f8f  8b33                 mov esi, dword ptr [ebx]
// 005d5f91  85f6                 test esi, esi
// 005d5f93  740c                 je 0x5d5fa1
// 005d5f95  8d4e08               lea ecx, [esi + 8]
// 005d5f98  ba01000000           mov edx, 1
// 005d5f9d  f00fc111             lock xadd dword ptr [ecx], edx
// 005d5fa1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d5fa4  85c9                 test ecx, ecx
// 005d5fa6  7413                 je 0x5d5fbb
// 005d5fa8  8d4108               lea eax, [ecx + 8]
// 005d5fab  83caff               or edx, 0xffffffff
// 005d5fae  f00fc110             lock xadd dword ptr [eax], edx
// 005d5fb2  7507                 jne 0x5d5fbb
// 005d5fb4  8b01                 mov eax, dword ptr [ecx]
// 005d5fb6  8b5008               mov edx, dword ptr [eax + 8]
// 005d5fb9  ffd2                 call edx
// 005d5fbb  897704               mov dword ptr [edi + 4], esi
// 005d5fbe  5f                   pop edi
// 005d5fbf  5e                   pop esi
// 005d5fc0  8bc5                 mov eax, ebp
// 005d5fc2  5d                   pop ebp
// 005d5fc3  5b                   pop ebx
// 005d5fc4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d5fc8  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5fcf  83c410               add esp, 0x10
// 005d5fd2  c20800               ret 8
// 005d5fd5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d5fd9  5e                   pop esi
// 005d5fda  8bc5                 mov eax, ebp
// 005d5fdc  5d                   pop ebp
// 005d5fdd  5b                   pop ebx
// 005d5fde  64890d00000000       mov dword ptr fs:[0], ecx
// 005d5fe5  83c410               add esp, 0x10
// 005d5fe8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
