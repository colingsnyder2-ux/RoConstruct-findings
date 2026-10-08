// roc 2007-08 005f1230  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1230
//
// 005f1230  6aff                 push -1
// 005f1232  687b6b7500           push 0x756b7b
// 005f1237  64a100000000         mov eax, dword ptr fs:[0]
// 005f123d  50                   push eax
// 005f123e  64892500000000       mov dword ptr fs:[0], esp
// 005f1245  51                   push ecx
// 005f1246  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f124a  53                   push ebx
// 005f124b  55                   push ebp
// 005f124c  8be9                 mov ebp, ecx
// 005f124e  56                   push esi
// 005f124f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f1253  50                   push eax
// 005f1254  8d5d04               lea ebx, [ebp + 4]
// 005f1257  56                   push esi
// 005f1258  8bcb                 mov ecx, ebx
// 005f125a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005f125e  897500               mov dword ptr [ebp], esi
// 005f1261  e8cafaffff           call 0x5f0d30
// 005f1266  85f6                 test esi, esi
// 005f1268  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005f1270  7453                 je 0x5f12c5
// 005f1272  57                   push edi
// 005f1273  8dbea4000000         lea edi, [esi + 0xa4]
// 005f1279  85ff                 test edi, edi
// 005f127b  7431                 je 0x5f12ae
// 005f127d  8937                 mov dword ptr [edi], esi
// 005f127f  8b33                 mov esi, dword ptr [ebx]
// 005f1281  85f6                 test esi, esi
// 005f1283  740c                 je 0x5f1291
// 005f1285  8d4e08               lea ecx, [esi + 8]
// 005f1288  ba01000000           mov edx, 1
// 005f128d  f00fc111             lock xadd dword ptr [ecx], edx
// 005f1291  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f1294  85c9                 test ecx, ecx
// 005f1296  7413                 je 0x5f12ab
// 005f1298  8d4108               lea eax, [ecx + 8]
// 005f129b  83caff               or edx, 0xffffffff
// 005f129e  f00fc110             lock xadd dword ptr [eax], edx
// 005f12a2  7507                 jne 0x5f12ab
// 005f12a4  8b01                 mov eax, dword ptr [ecx]
// 005f12a6  8b5008               mov edx, dword ptr [eax + 8]
// 005f12a9  ffd2                 call edx
// 005f12ab  897704               mov dword ptr [edi + 4], esi
// 005f12ae  5f                   pop edi
// 005f12af  5e                   pop esi
// 005f12b0  8bc5                 mov eax, ebp
// 005f12b2  5d                   pop ebp
// 005f12b3  5b                   pop ebx
// 005f12b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f12b8  64890d00000000       mov dword ptr fs:[0], ecx
// 005f12bf  83c410               add esp, 0x10
// 005f12c2  c20800               ret 8
// 005f12c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f12c9  5e                   pop esi
// 005f12ca  8bc5                 mov eax, ebp
// 005f12cc  5d                   pop ebp
// 005f12cd  5b                   pop ebx
// 005f12ce  64890d00000000       mov dword ptr fs:[0], ecx
// 005f12d5  83c410               add esp, 0x10
// 005f12d8  c20800               ret 8
// library rbxgs/humanoid\Humanoid.cpp (function ??$?0VMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VMotor@RBX@@@boost@@QAE@PAVMotor@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
