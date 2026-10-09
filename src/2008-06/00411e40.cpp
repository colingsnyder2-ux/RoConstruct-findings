// roc 2008-06 00411e40  unit: ChatEnter  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00411e40
//
// 00411e40  6aff                 push -1
// 00411e42  68abfd7b00           push 0x7bfdab
// 00411e47  64a100000000         mov eax, dword ptr fs:[0]
// 00411e4d  50                   push eax
// 00411e4e  64892500000000       mov dword ptr fs:[0], esp
// 00411e55  51                   push ecx
// 00411e56  8b442418             mov eax, dword ptr [esp + 0x18]
// 00411e5a  53                   push ebx
// 00411e5b  55                   push ebp
// 00411e5c  8be9                 mov ebp, ecx
// 00411e5e  56                   push esi
// 00411e5f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00411e63  50                   push eax
// 00411e64  8d5d04               lea ebx, [ebp + 4]
// 00411e67  56                   push esi
// 00411e68  8bcb                 mov ecx, ebx
// 00411e6a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00411e6e  897500               mov dword ptr [ebp], esi
// 00411e71  e8cafaffff           call 0x411940
// 00411e76  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00411e7e  85f6                 test esi, esi
// 00411e80  7453                 je 0x411ed5
// 00411e82  57                   push edi
// 00411e83  8dbee4000000         lea edi, [esi + 0xe4]
// 00411e89  85ff                 test edi, edi
// 00411e8b  7431                 je 0x411ebe
// 00411e8d  8937                 mov dword ptr [edi], esi
// 00411e8f  8b33                 mov esi, dword ptr [ebx]
// 00411e91  85f6                 test esi, esi
// 00411e93  740c                 je 0x411ea1
// 00411e95  8d4e08               lea ecx, [esi + 8]
// 00411e98  ba01000000           mov edx, 1
// 00411e9d  f00fc111             lock xadd dword ptr [ecx], edx
// 00411ea1  8b4f04               mov ecx, dword ptr [edi + 4]
// 00411ea4  85c9                 test ecx, ecx
// 00411ea6  7413                 je 0x411ebb
// 00411ea8  8d4108               lea eax, [ecx + 8]
// 00411eab  83caff               or edx, 0xffffffff
// 00411eae  f00fc110             lock xadd dword ptr [eax], edx
// 00411eb2  7507                 jne 0x411ebb
// 00411eb4  8b01                 mov eax, dword ptr [ecx]
// 00411eb6  8b5008               mov edx, dword ptr [eax + 8]
// 00411eb9  ffd2                 call edx
// 00411ebb  897704               mov dword ptr [edi + 4], esi
// 00411ebe  5f                   pop edi
// 00411ebf  5e                   pop esi
// 00411ec0  8bc5                 mov eax, ebp
// 00411ec2  5d                   pop ebp
// 00411ec3  5b                   pop ebx
// 00411ec4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00411ec8  64890d00000000       mov dword ptr fs:[0], ecx
// 00411ecf  83c410               add esp, 0x10
// 00411ed2  c20800               ret 8
// 00411ed5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00411ed9  5e                   pop esi
// 00411eda  8bc5                 mov eax, ebp
// 00411edc  5d                   pop ebp
// 00411edd  5b                   pop ebx
// 00411ede  64890d00000000       mov dword ptr fs:[0], ecx
// 00411ee5  83c410               add esp, 0x10
// 00411ee8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
