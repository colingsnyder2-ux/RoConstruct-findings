// roc 2008-06 005a1470  unit: RBX::PartTool  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1470
//
// 005a1470  6aff                 push -1
// 005a1472  68abfd7b00           push 0x7bfdab
// 005a1477  64a100000000         mov eax, dword ptr fs:[0]
// 005a147d  50                   push eax
// 005a147e  64892500000000       mov dword ptr fs:[0], esp
// 005a1485  51                   push ecx
// 005a1486  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a148a  53                   push ebx
// 005a148b  55                   push ebp
// 005a148c  8be9                 mov ebp, ecx
// 005a148e  56                   push esi
// 005a148f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a1493  50                   push eax
// 005a1494  8d5d04               lea ebx, [ebp + 4]
// 005a1497  56                   push esi
// 005a1498  8bcb                 mov ecx, ebx
// 005a149a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a149e  897500               mov dword ptr [ebp], esi
// 005a14a1  e8caf7ffff           call 0x5a0c70
// 005a14a6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a14ae  85f6                 test esi, esi
// 005a14b0  7453                 je 0x5a1505
// 005a14b2  57                   push edi
// 005a14b3  8dbee4000000         lea edi, [esi + 0xe4]
// 005a14b9  85ff                 test edi, edi
// 005a14bb  7431                 je 0x5a14ee
// 005a14bd  8937                 mov dword ptr [edi], esi
// 005a14bf  8b33                 mov esi, dword ptr [ebx]
// 005a14c1  85f6                 test esi, esi
// 005a14c3  740c                 je 0x5a14d1
// 005a14c5  8d4e08               lea ecx, [esi + 8]
// 005a14c8  ba01000000           mov edx, 1
// 005a14cd  f00fc111             lock xadd dword ptr [ecx], edx
// 005a14d1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a14d4  85c9                 test ecx, ecx
// 005a14d6  7413                 je 0x5a14eb
// 005a14d8  8d4108               lea eax, [ecx + 8]
// 005a14db  83caff               or edx, 0xffffffff
// 005a14de  f00fc110             lock xadd dword ptr [eax], edx
// 005a14e2  7507                 jne 0x5a14eb
// 005a14e4  8b01                 mov eax, dword ptr [ecx]
// 005a14e6  8b5008               mov edx, dword ptr [eax + 8]
// 005a14e9  ffd2                 call edx
// 005a14eb  897704               mov dword ptr [edi + 4], esi
// 005a14ee  5f                   pop edi
// 005a14ef  5e                   pop esi
// 005a14f0  8bc5                 mov eax, ebp
// 005a14f2  5d                   pop ebp
// 005a14f3  5b                   pop ebx
// 005a14f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a14f8  64890d00000000       mov dword ptr fs:[0], ecx
// 005a14ff  83c410               add esp, 0x10
// 005a1502  c20800               ret 8
// 005a1505  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a1509  5e                   pop esi
// 005a150a  8bc5                 mov eax, ebp
// 005a150c  5d                   pop ebp
// 005a150d  5b                   pop ebx
// 005a150e  64890d00000000       mov dword ptr fs:[0], ecx
// 005a1515  83c410               add esp, 0x10
// 005a1518  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
