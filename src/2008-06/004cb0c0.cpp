// roc 2008-06 004cb0c0  unit: RBX::Network::RoundRobinPhysicsSender  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb0c0
//
// 004cb0c0  6aff                 push -1
// 004cb0c2  68abfd7b00           push 0x7bfdab
// 004cb0c7  64a100000000         mov eax, dword ptr fs:[0]
// 004cb0cd  50                   push eax
// 004cb0ce  64892500000000       mov dword ptr fs:[0], esp
// 004cb0d5  51                   push ecx
// 004cb0d6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cb0da  53                   push ebx
// 004cb0db  55                   push ebp
// 004cb0dc  8be9                 mov ebp, ecx
// 004cb0de  56                   push esi
// 004cb0df  8b742420             mov esi, dword ptr [esp + 0x20]
// 004cb0e3  50                   push eax
// 004cb0e4  8d5d04               lea ebx, [ebp + 4]
// 004cb0e7  56                   push esi
// 004cb0e8  8bcb                 mov ecx, ebx
// 004cb0ea  896c2414             mov dword ptr [esp + 0x14], ebp
// 004cb0ee  897500               mov dword ptr [ebp], esi
// 004cb0f1  e8caf2ffff           call 0x4ca3c0
// 004cb0f6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004cb0fe  85f6                 test esi, esi
// 004cb100  7453                 je 0x4cb155
// 004cb102  57                   push edi
// 004cb103  8dbee4000000         lea edi, [esi + 0xe4]
// 004cb109  85ff                 test edi, edi
// 004cb10b  7431                 je 0x4cb13e
// 004cb10d  8937                 mov dword ptr [edi], esi
// 004cb10f  8b33                 mov esi, dword ptr [ebx]
// 004cb111  85f6                 test esi, esi
// 004cb113  740c                 je 0x4cb121
// 004cb115  8d4e08               lea ecx, [esi + 8]
// 004cb118  ba01000000           mov edx, 1
// 004cb11d  f00fc111             lock xadd dword ptr [ecx], edx
// 004cb121  8b4f04               mov ecx, dword ptr [edi + 4]
// 004cb124  85c9                 test ecx, ecx
// 004cb126  7413                 je 0x4cb13b
// 004cb128  8d4108               lea eax, [ecx + 8]
// 004cb12b  83caff               or edx, 0xffffffff
// 004cb12e  f00fc110             lock xadd dword ptr [eax], edx
// 004cb132  7507                 jne 0x4cb13b
// 004cb134  8b01                 mov eax, dword ptr [ecx]
// 004cb136  8b5008               mov edx, dword ptr [eax + 8]
// 004cb139  ffd2                 call edx
// 004cb13b  897704               mov dword ptr [edi + 4], esi
// 004cb13e  5f                   pop edi
// 004cb13f  5e                   pop esi
// 004cb140  8bc5                 mov eax, ebp
// 004cb142  5d                   pop ebp
// 004cb143  5b                   pop ebx
// 004cb144  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004cb148  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb14f  83c410               add esp, 0x10
// 004cb152  c20800               ret 8
// 004cb155  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004cb159  5e                   pop esi
// 004cb15a  8bc5                 mov eax, ebp
// 004cb15c  5d                   pop ebp
// 004cb15d  5b                   pop ebx
// 004cb15e  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb165  83c410               add esp, 0x10
// 004cb168  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
