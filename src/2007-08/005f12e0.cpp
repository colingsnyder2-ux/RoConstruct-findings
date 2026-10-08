// roc 2007-08 005f12e0  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f12e0
//
// 005f12e0  6aff                 push -1
// 005f12e2  687b6b7500           push 0x756b7b
// 005f12e7  64a100000000         mov eax, dword ptr fs:[0]
// 005f12ed  50                   push eax
// 005f12ee  64892500000000       mov dword ptr fs:[0], esp
// 005f12f5  51                   push ecx
// 005f12f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f12fa  53                   push ebx
// 005f12fb  55                   push ebp
// 005f12fc  8be9                 mov ebp, ecx
// 005f12fe  56                   push esi
// 005f12ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f1303  50                   push eax
// 005f1304  8d5d04               lea ebx, [ebp + 4]
// 005f1307  56                   push esi
// 005f1308  8bcb                 mov ecx, ebx
// 005f130a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005f130e  897500               mov dword ptr [ebp], esi
// 005f1311  e8aafaffff           call 0x5f0dc0
// 005f1316  85f6                 test esi, esi
// 005f1318  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005f1320  7453                 je 0x5f1375
// 005f1322  57                   push edi
// 005f1323  8dbea4000000         lea edi, [esi + 0xa4]
// 005f1329  85ff                 test edi, edi
// 005f132b  7431                 je 0x5f135e
// 005f132d  8937                 mov dword ptr [edi], esi
// 005f132f  8b33                 mov esi, dword ptr [ebx]
// 005f1331  85f6                 test esi, esi
// 005f1333  740c                 je 0x5f1341
// 005f1335  8d4e08               lea ecx, [esi + 8]
// 005f1338  ba01000000           mov edx, 1
// 005f133d  f00fc111             lock xadd dword ptr [ecx], edx
// 005f1341  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f1344  85c9                 test ecx, ecx
// 005f1346  7413                 je 0x5f135b
// 005f1348  8d4108               lea eax, [ecx + 8]
// 005f134b  83caff               or edx, 0xffffffff
// 005f134e  f00fc110             lock xadd dword ptr [eax], edx
// 005f1352  7507                 jne 0x5f135b
// 005f1354  8b01                 mov eax, dword ptr [ecx]
// 005f1356  8b5008               mov edx, dword ptr [eax + 8]
// 005f1359  ffd2                 call edx
// 005f135b  897704               mov dword ptr [edi + 4], esi
// 005f135e  5f                   pop edi
// 005f135f  5e                   pop esi
// 005f1360  8bc5                 mov eax, ebp
// 005f1362  5d                   pop ebp
// 005f1363  5b                   pop ebx
// 005f1364  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f1368  64890d00000000       mov dword ptr fs:[0], ecx
// 005f136f  83c410               add esp, 0x10
// 005f1372  c20800               ret 8
// 005f1375  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f1379  5e                   pop esi
// 005f137a  8bc5                 mov eax, ebp
// 005f137c  5d                   pop ebp
// 005f137d  5b                   pop ebx
// 005f137e  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1385  83c410               add esp, 0x10
// 005f1388  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
