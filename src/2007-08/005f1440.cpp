// roc 2007-08 005f1440  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1440
//
// 005f1440  6aff                 push -1
// 005f1442  687b6b7500           push 0x756b7b
// 005f1447  64a100000000         mov eax, dword ptr fs:[0]
// 005f144d  50                   push eax
// 005f144e  64892500000000       mov dword ptr fs:[0], esp
// 005f1455  51                   push ecx
// 005f1456  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f145a  53                   push ebx
// 005f145b  55                   push ebp
// 005f145c  8be9                 mov ebp, ecx
// 005f145e  56                   push esi
// 005f145f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f1463  50                   push eax
// 005f1464  8d5d04               lea ebx, [ebp + 4]
// 005f1467  56                   push esi
// 005f1468  8bcb                 mov ecx, ebx
// 005f146a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005f146e  897500               mov dword ptr [ebp], esi
// 005f1471  e86afaffff           call 0x5f0ee0
// 005f1476  85f6                 test esi, esi
// 005f1478  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005f1480  7453                 je 0x5f14d5
// 005f1482  57                   push edi
// 005f1483  8dbea4000000         lea edi, [esi + 0xa4]
// 005f1489  85ff                 test edi, edi
// 005f148b  7431                 je 0x5f14be
// 005f148d  8937                 mov dword ptr [edi], esi
// 005f148f  8b33                 mov esi, dword ptr [ebx]
// 005f1491  85f6                 test esi, esi
// 005f1493  740c                 je 0x5f14a1
// 005f1495  8d4e08               lea ecx, [esi + 8]
// 005f1498  ba01000000           mov edx, 1
// 005f149d  f00fc111             lock xadd dword ptr [ecx], edx
// 005f14a1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f14a4  85c9                 test ecx, ecx
// 005f14a6  7413                 je 0x5f14bb
// 005f14a8  8d4108               lea eax, [ecx + 8]
// 005f14ab  83caff               or edx, 0xffffffff
// 005f14ae  f00fc110             lock xadd dword ptr [eax], edx
// 005f14b2  7507                 jne 0x5f14bb
// 005f14b4  8b01                 mov eax, dword ptr [ecx]
// 005f14b6  8b5008               mov edx, dword ptr [eax + 8]
// 005f14b9  ffd2                 call edx
// 005f14bb  897704               mov dword ptr [edi + 4], esi
// 005f14be  5f                   pop edi
// 005f14bf  5e                   pop esi
// 005f14c0  8bc5                 mov eax, ebp
// 005f14c2  5d                   pop ebp
// 005f14c3  5b                   pop ebx
// 005f14c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f14c8  64890d00000000       mov dword ptr fs:[0], ecx
// 005f14cf  83c410               add esp, 0x10
// 005f14d2  c20800               ret 8
// 005f14d5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f14d9  5e                   pop esi
// 005f14da  8bc5                 mov eax, ebp
// 005f14dc  5d                   pop ebp
// 005f14dd  5b                   pop ebx
// 005f14de  64890d00000000       mov dword ptr fs:[0], ecx
// 005f14e5  83c410               add esp, 0x10
// 005f14e8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
