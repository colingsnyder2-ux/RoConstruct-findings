// roc 2008-06 005c2d60  unit: RBX::VObjectValue::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2d60
//
// 005c2d60  6aff                 push -1
// 005c2d62  68abfd7b00           push 0x7bfdab
// 005c2d67  64a100000000         mov eax, dword ptr fs:[0]
// 005c2d6d  50                   push eax
// 005c2d6e  64892500000000       mov dword ptr fs:[0], esp
// 005c2d75  51                   push ecx
// 005c2d76  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c2d7a  53                   push ebx
// 005c2d7b  55                   push ebp
// 005c2d7c  8be9                 mov ebp, ecx
// 005c2d7e  56                   push esi
// 005c2d7f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c2d83  50                   push eax
// 005c2d84  8d5d04               lea ebx, [ebp + 4]
// 005c2d87  56                   push esi
// 005c2d88  8bcb                 mov ecx, ebx
// 005c2d8a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c2d8e  897500               mov dword ptr [ebp], esi
// 005c2d91  e83affffff           call 0x5c2cd0
// 005c2d96  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c2d9e  85f6                 test esi, esi
// 005c2da0  7453                 je 0x5c2df5
// 005c2da2  57                   push edi
// 005c2da3  8dbee4000000         lea edi, [esi + 0xe4]
// 005c2da9  85ff                 test edi, edi
// 005c2dab  7431                 je 0x5c2dde
// 005c2dad  8937                 mov dword ptr [edi], esi
// 005c2daf  8b33                 mov esi, dword ptr [ebx]
// 005c2db1  85f6                 test esi, esi
// 005c2db3  740c                 je 0x5c2dc1
// 005c2db5  8d4e08               lea ecx, [esi + 8]
// 005c2db8  ba01000000           mov edx, 1
// 005c2dbd  f00fc111             lock xadd dword ptr [ecx], edx
// 005c2dc1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c2dc4  85c9                 test ecx, ecx
// 005c2dc6  7413                 je 0x5c2ddb
// 005c2dc8  8d4108               lea eax, [ecx + 8]
// 005c2dcb  83caff               or edx, 0xffffffff
// 005c2dce  f00fc110             lock xadd dword ptr [eax], edx
// 005c2dd2  7507                 jne 0x5c2ddb
// 005c2dd4  8b01                 mov eax, dword ptr [ecx]
// 005c2dd6  8b5008               mov edx, dword ptr [eax + 8]
// 005c2dd9  ffd2                 call edx
// 005c2ddb  897704               mov dword ptr [edi + 4], esi
// 005c2dde  5f                   pop edi
// 005c2ddf  5e                   pop esi
// 005c2de0  8bc5                 mov eax, ebp
// 005c2de2  5d                   pop ebp
// 005c2de3  5b                   pop ebx
// 005c2de4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c2de8  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2def  83c410               add esp, 0x10
// 005c2df2  c20800               ret 8
// 005c2df5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c2df9  5e                   pop esi
// 005c2dfa  8bc5                 mov eax, ebp
// 005c2dfc  5d                   pop ebp
// 005c2dfd  5b                   pop ebx
// 005c2dfe  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2e05  83c410               add esp, 0x10
// 005c2e08  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
