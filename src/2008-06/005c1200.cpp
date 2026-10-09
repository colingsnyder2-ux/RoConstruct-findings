// roc 2008-06 005c1200  unit: RBX::VFlagStand::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1200
//
// 005c1200  6aff                 push -1
// 005c1202  68abfd7b00           push 0x7bfdab
// 005c1207  64a100000000         mov eax, dword ptr fs:[0]
// 005c120d  50                   push eax
// 005c120e  64892500000000       mov dword ptr fs:[0], esp
// 005c1215  51                   push ecx
// 005c1216  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c121a  53                   push ebx
// 005c121b  55                   push ebp
// 005c121c  8be9                 mov ebp, ecx
// 005c121e  56                   push esi
// 005c121f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c1223  50                   push eax
// 005c1224  8d5d04               lea ebx, [ebp + 4]
// 005c1227  56                   push esi
// 005c1228  8bcb                 mov ecx, ebx
// 005c122a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c122e  897500               mov dword ptr [ebp], esi
// 005c1231  e83affffff           call 0x5c1170
// 005c1236  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c123e  85f6                 test esi, esi
// 005c1240  7453                 je 0x5c1295
// 005c1242  57                   push edi
// 005c1243  8dbee4000000         lea edi, [esi + 0xe4]
// 005c1249  85ff                 test edi, edi
// 005c124b  7431                 je 0x5c127e
// 005c124d  8937                 mov dword ptr [edi], esi
// 005c124f  8b33                 mov esi, dword ptr [ebx]
// 005c1251  85f6                 test esi, esi
// 005c1253  740c                 je 0x5c1261
// 005c1255  8d4e08               lea ecx, [esi + 8]
// 005c1258  ba01000000           mov edx, 1
// 005c125d  f00fc111             lock xadd dword ptr [ecx], edx
// 005c1261  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c1264  85c9                 test ecx, ecx
// 005c1266  7413                 je 0x5c127b
// 005c1268  8d4108               lea eax, [ecx + 8]
// 005c126b  83caff               or edx, 0xffffffff
// 005c126e  f00fc110             lock xadd dword ptr [eax], edx
// 005c1272  7507                 jne 0x5c127b
// 005c1274  8b01                 mov eax, dword ptr [ecx]
// 005c1276  8b5008               mov edx, dword ptr [eax + 8]
// 005c1279  ffd2                 call edx
// 005c127b  897704               mov dword ptr [edi + 4], esi
// 005c127e  5f                   pop edi
// 005c127f  5e                   pop esi
// 005c1280  8bc5                 mov eax, ebp
// 005c1282  5d                   pop ebp
// 005c1283  5b                   pop ebx
// 005c1284  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c1288  64890d00000000       mov dword ptr fs:[0], ecx
// 005c128f  83c410               add esp, 0x10
// 005c1292  c20800               ret 8
// 005c1295  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c1299  5e                   pop esi
// 005c129a  8bc5                 mov eax, ebp
// 005c129c  5d                   pop ebp
// 005c129d  5b                   pop ebx
// 005c129e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c12a5  83c410               add esp, 0x10
// 005c12a8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
