// roc 2008-06 005b7f50  unit: VStockSound::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7f50
//
// 005b7f50  6aff                 push -1
// 005b7f52  68abfd7b00           push 0x7bfdab
// 005b7f57  64a100000000         mov eax, dword ptr fs:[0]
// 005b7f5d  50                   push eax
// 005b7f5e  64892500000000       mov dword ptr fs:[0], esp
// 005b7f65  51                   push ecx
// 005b7f66  8b442418             mov eax, dword ptr [esp + 0x18]
// 005b7f6a  53                   push ebx
// 005b7f6b  55                   push ebp
// 005b7f6c  8be9                 mov ebp, ecx
// 005b7f6e  56                   push esi
// 005b7f6f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005b7f73  50                   push eax
// 005b7f74  8d5d04               lea ebx, [ebp + 4]
// 005b7f77  56                   push esi
// 005b7f78  8bcb                 mov ecx, ebx
// 005b7f7a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005b7f7e  897500               mov dword ptr [ebp], esi
// 005b7f81  e81af6ffff           call 0x5b75a0
// 005b7f86  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005b7f8e  85f6                 test esi, esi
// 005b7f90  7453                 je 0x5b7fe5
// 005b7f92  57                   push edi
// 005b7f93  8dbee4000000         lea edi, [esi + 0xe4]
// 005b7f99  85ff                 test edi, edi
// 005b7f9b  7431                 je 0x5b7fce
// 005b7f9d  8937                 mov dword ptr [edi], esi
// 005b7f9f  8b33                 mov esi, dword ptr [ebx]
// 005b7fa1  85f6                 test esi, esi
// 005b7fa3  740c                 je 0x5b7fb1
// 005b7fa5  8d4e08               lea ecx, [esi + 8]
// 005b7fa8  ba01000000           mov edx, 1
// 005b7fad  f00fc111             lock xadd dword ptr [ecx], edx
// 005b7fb1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005b7fb4  85c9                 test ecx, ecx
// 005b7fb6  7413                 je 0x5b7fcb
// 005b7fb8  8d4108               lea eax, [ecx + 8]
// 005b7fbb  83caff               or edx, 0xffffffff
// 005b7fbe  f00fc110             lock xadd dword ptr [eax], edx
// 005b7fc2  7507                 jne 0x5b7fcb
// 005b7fc4  8b01                 mov eax, dword ptr [ecx]
// 005b7fc6  8b5008               mov edx, dword ptr [eax + 8]
// 005b7fc9  ffd2                 call edx
// 005b7fcb  897704               mov dword ptr [edi + 4], esi
// 005b7fce  5f                   pop edi
// 005b7fcf  5e                   pop esi
// 005b7fd0  8bc5                 mov eax, ebp
// 005b7fd2  5d                   pop ebp
// 005b7fd3  5b                   pop ebx
// 005b7fd4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005b7fd8  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7fdf  83c410               add esp, 0x10
// 005b7fe2  c20800               ret 8
// 005b7fe5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b7fe9  5e                   pop esi
// 005b7fea  8bc5                 mov eax, ebp
// 005b7fec  5d                   pop ebp
// 005b7fed  5b                   pop ebx
// 005b7fee  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7ff5  83c410               add esp, 0x10
// 005b7ff8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
