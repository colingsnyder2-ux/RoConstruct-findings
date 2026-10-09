// roc 2008-06 005c1e30  unit: RBX::VBodyForce::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1e30
//
// 005c1e30  6aff                 push -1
// 005c1e32  68abfd7b00           push 0x7bfdab
// 005c1e37  64a100000000         mov eax, dword ptr fs:[0]
// 005c1e3d  50                   push eax
// 005c1e3e  64892500000000       mov dword ptr fs:[0], esp
// 005c1e45  51                   push ecx
// 005c1e46  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c1e4a  53                   push ebx
// 005c1e4b  55                   push ebp
// 005c1e4c  8be9                 mov ebp, ecx
// 005c1e4e  56                   push esi
// 005c1e4f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c1e53  50                   push eax
// 005c1e54  8d5d04               lea ebx, [ebp + 4]
// 005c1e57  56                   push esi
// 005c1e58  8bcb                 mov ecx, ebx
// 005c1e5a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c1e5e  897500               mov dword ptr [ebp], esi
// 005c1e61  e83affffff           call 0x5c1da0
// 005c1e66  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c1e6e  85f6                 test esi, esi
// 005c1e70  7453                 je 0x5c1ec5
// 005c1e72  57                   push edi
// 005c1e73  8dbee4000000         lea edi, [esi + 0xe4]
// 005c1e79  85ff                 test edi, edi
// 005c1e7b  7431                 je 0x5c1eae
// 005c1e7d  8937                 mov dword ptr [edi], esi
// 005c1e7f  8b33                 mov esi, dword ptr [ebx]
// 005c1e81  85f6                 test esi, esi
// 005c1e83  740c                 je 0x5c1e91
// 005c1e85  8d4e08               lea ecx, [esi + 8]
// 005c1e88  ba01000000           mov edx, 1
// 005c1e8d  f00fc111             lock xadd dword ptr [ecx], edx
// 005c1e91  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c1e94  85c9                 test ecx, ecx
// 005c1e96  7413                 je 0x5c1eab
// 005c1e98  8d4108               lea eax, [ecx + 8]
// 005c1e9b  83caff               or edx, 0xffffffff
// 005c1e9e  f00fc110             lock xadd dword ptr [eax], edx
// 005c1ea2  7507                 jne 0x5c1eab
// 005c1ea4  8b01                 mov eax, dword ptr [ecx]
// 005c1ea6  8b5008               mov edx, dword ptr [eax + 8]
// 005c1ea9  ffd2                 call edx
// 005c1eab  897704               mov dword ptr [edi + 4], esi
// 005c1eae  5f                   pop edi
// 005c1eaf  5e                   pop esi
// 005c1eb0  8bc5                 mov eax, ebp
// 005c1eb2  5d                   pop ebp
// 005c1eb3  5b                   pop ebx
// 005c1eb4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c1eb8  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1ebf  83c410               add esp, 0x10
// 005c1ec2  c20800               ret 8
// 005c1ec5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c1ec9  5e                   pop esi
// 005c1eca  8bc5                 mov eax, ebp
// 005c1ecc  5d                   pop ebp
// 005c1ecd  5b                   pop ebx
// 005c1ece  64890d00000000       mov dword ptr fs:[0], ecx
// 005c1ed5  83c410               add esp, 0x10
// 005c1ed8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
