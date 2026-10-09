// roc 2008-06 005c1470  unit: RBX::VFlagStandService::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1470
//
// 005c1470  6aff                 push -1
// 005c1472  68abfd7b00           push 0x7bfdab
// 005c1477  64a100000000         mov eax, dword ptr fs:[0]
// 005c147d  50                   push eax
// 005c147e  64892500000000       mov dword ptr fs:[0], esp
// 005c1485  51                   push ecx
// 005c1486  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c148a  53                   push ebx
// 005c148b  55                   push ebp
// 005c148c  8be9                 mov ebp, ecx
// 005c148e  56                   push esi
// 005c148f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c1493  50                   push eax
// 005c1494  8d5d04               lea ebx, [ebp + 4]
// 005c1497  56                   push esi
// 005c1498  8bcb                 mov ecx, ebx
// 005c149a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c149e  897500               mov dword ptr [ebp], esi
// 005c14a1  e83affffff           call 0x5c13e0
// 005c14a6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c14ae  85f6                 test esi, esi
// 005c14b0  7453                 je 0x5c1505
// 005c14b2  57                   push edi
// 005c14b3  8dbee4000000         lea edi, [esi + 0xe4]
// 005c14b9  85ff                 test edi, edi
// 005c14bb  7431                 je 0x5c14ee
// 005c14bd  8937                 mov dword ptr [edi], esi
// 005c14bf  8b33                 mov esi, dword ptr [ebx]
// 005c14c1  85f6                 test esi, esi
// 005c14c3  740c                 je 0x5c14d1
// 005c14c5  8d4e08               lea ecx, [esi + 8]
// 005c14c8  ba01000000           mov edx, 1
// 005c14cd  f00fc111             lock xadd dword ptr [ecx], edx
// 005c14d1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c14d4  85c9                 test ecx, ecx
// 005c14d6  7413                 je 0x5c14eb
// 005c14d8  8d4108               lea eax, [ecx + 8]
// 005c14db  83caff               or edx, 0xffffffff
// 005c14de  f00fc110             lock xadd dword ptr [eax], edx
// 005c14e2  7507                 jne 0x5c14eb
// 005c14e4  8b01                 mov eax, dword ptr [ecx]
// 005c14e6  8b5008               mov edx, dword ptr [eax + 8]
// 005c14e9  ffd2                 call edx
// 005c14eb  897704               mov dword ptr [edi + 4], esi
// 005c14ee  5f                   pop edi
// 005c14ef  5e                   pop esi
// 005c14f0  8bc5                 mov eax, ebp
// 005c14f2  5d                   pop ebp
// 005c14f3  5b                   pop ebx
// 005c14f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c14f8  64890d00000000       mov dword ptr fs:[0], ecx
// 005c14ff  83c410               add esp, 0x10
// 005c1502  c20800               ret 8
// 005c1505  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c1509  5e                   pop esi
// 005c150a  8bc5                 mov eax, ebp
// 005c150c  5d                   pop ebp
// 005c150d  5b                   pop ebx
// 005c150e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1515  83c410               add esp, 0x10
// 005c1518  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
