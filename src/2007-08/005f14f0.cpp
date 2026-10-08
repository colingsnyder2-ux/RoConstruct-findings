// roc 2007-08 005f14f0  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f14f0
//
// 005f14f0  6aff                 push -1
// 005f14f2  687b6b7500           push 0x756b7b
// 005f14f7  64a100000000         mov eax, dword ptr fs:[0]
// 005f14fd  50                   push eax
// 005f14fe  64892500000000       mov dword ptr fs:[0], esp
// 005f1505  51                   push ecx
// 005f1506  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f150a  53                   push ebx
// 005f150b  55                   push ebp
// 005f150c  8be9                 mov ebp, ecx
// 005f150e  56                   push esi
// 005f150f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f1513  50                   push eax
// 005f1514  8d5d04               lea ebx, [ebp + 4]
// 005f1517  56                   push esi
// 005f1518  8bcb                 mov ecx, ebx
// 005f151a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005f151e  897500               mov dword ptr [ebp], esi
// 005f1521  e84afaffff           call 0x5f0f70
// 005f1526  85f6                 test esi, esi
// 005f1528  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005f1530  7453                 je 0x5f1585
// 005f1532  57                   push edi
// 005f1533  8dbea4000000         lea edi, [esi + 0xa4]
// 005f1539  85ff                 test edi, edi
// 005f153b  7431                 je 0x5f156e
// 005f153d  8937                 mov dword ptr [edi], esi
// 005f153f  8b33                 mov esi, dword ptr [ebx]
// 005f1541  85f6                 test esi, esi
// 005f1543  740c                 je 0x5f1551
// 005f1545  8d4e08               lea ecx, [esi + 8]
// 005f1548  ba01000000           mov edx, 1
// 005f154d  f00fc111             lock xadd dword ptr [ecx], edx
// 005f1551  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f1554  85c9                 test ecx, ecx
// 005f1556  7413                 je 0x5f156b
// 005f1558  8d4108               lea eax, [ecx + 8]
// 005f155b  83caff               or edx, 0xffffffff
// 005f155e  f00fc110             lock xadd dword ptr [eax], edx
// 005f1562  7507                 jne 0x5f156b
// 005f1564  8b01                 mov eax, dword ptr [ecx]
// 005f1566  8b5008               mov edx, dword ptr [eax + 8]
// 005f1569  ffd2                 call edx
// 005f156b  897704               mov dword ptr [edi + 4], esi
// 005f156e  5f                   pop edi
// 005f156f  5e                   pop esi
// 005f1570  8bc5                 mov eax, ebp
// 005f1572  5d                   pop ebp
// 005f1573  5b                   pop ebx
// 005f1574  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f1578  64890d00000000       mov dword ptr fs:[0], ecx
// 005f157f  83c410               add esp, 0x10
// 005f1582  c20800               ret 8
// 005f1585  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f1589  5e                   pop esi
// 005f158a  8bc5                 mov eax, ebp
// 005f158c  5d                   pop ebp
// 005f158d  5b                   pop ebx
// 005f158e  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1595  83c410               add esp, 0x10
// 005f1598  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
