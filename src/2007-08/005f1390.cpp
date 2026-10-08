// roc 2007-08 005f1390  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1390
//
// 005f1390  6aff                 push -1
// 005f1392  687b6b7500           push 0x756b7b
// 005f1397  64a100000000         mov eax, dword ptr fs:[0]
// 005f139d  50                   push eax
// 005f139e  64892500000000       mov dword ptr fs:[0], esp
// 005f13a5  51                   push ecx
// 005f13a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f13aa  53                   push ebx
// 005f13ab  55                   push ebp
// 005f13ac  8be9                 mov ebp, ecx
// 005f13ae  56                   push esi
// 005f13af  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f13b3  50                   push eax
// 005f13b4  8d5d04               lea ebx, [ebp + 4]
// 005f13b7  56                   push esi
// 005f13b8  8bcb                 mov ecx, ebx
// 005f13ba  896c2414             mov dword ptr [esp + 0x14], ebp
// 005f13be  897500               mov dword ptr [ebp], esi
// 005f13c1  e88afaffff           call 0x5f0e50
// 005f13c6  85f6                 test esi, esi
// 005f13c8  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005f13d0  7453                 je 0x5f1425
// 005f13d2  57                   push edi
// 005f13d3  8dbea4000000         lea edi, [esi + 0xa4]
// 005f13d9  85ff                 test edi, edi
// 005f13db  7431                 je 0x5f140e
// 005f13dd  8937                 mov dword ptr [edi], esi
// 005f13df  8b33                 mov esi, dword ptr [ebx]
// 005f13e1  85f6                 test esi, esi
// 005f13e3  740c                 je 0x5f13f1
// 005f13e5  8d4e08               lea ecx, [esi + 8]
// 005f13e8  ba01000000           mov edx, 1
// 005f13ed  f00fc111             lock xadd dword ptr [ecx], edx
// 005f13f1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f13f4  85c9                 test ecx, ecx
// 005f13f6  7413                 je 0x5f140b
// 005f13f8  8d4108               lea eax, [ecx + 8]
// 005f13fb  83caff               or edx, 0xffffffff
// 005f13fe  f00fc110             lock xadd dword ptr [eax], edx
// 005f1402  7507                 jne 0x5f140b
// 005f1404  8b01                 mov eax, dword ptr [ecx]
// 005f1406  8b5008               mov edx, dword ptr [eax + 8]
// 005f1409  ffd2                 call edx
// 005f140b  897704               mov dword ptr [edi + 4], esi
// 005f140e  5f                   pop edi
// 005f140f  5e                   pop esi
// 005f1410  8bc5                 mov eax, ebp
// 005f1412  5d                   pop ebp
// 005f1413  5b                   pop ebx
// 005f1414  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f1418  64890d00000000       mov dword ptr fs:[0], ecx
// 005f141f  83c410               add esp, 0x10
// 005f1422  c20800               ret 8
// 005f1425  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f1429  5e                   pop esi
// 005f142a  8bc5                 mov eax, ebp
// 005f142c  5d                   pop ebp
// 005f142d  5b                   pop ebx
// 005f142e  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1435  83c410               add esp, 0x10
// 005f1438  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
