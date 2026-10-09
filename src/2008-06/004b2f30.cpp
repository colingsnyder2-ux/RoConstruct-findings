// roc 2008-06 004b2f30  unit: RBX::VRotateP::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2f30
//
// 004b2f30  6aff                 push -1
// 004b2f32  68abfd7b00           push 0x7bfdab
// 004b2f37  64a100000000         mov eax, dword ptr fs:[0]
// 004b2f3d  50                   push eax
// 004b2f3e  64892500000000       mov dword ptr fs:[0], esp
// 004b2f45  51                   push ecx
// 004b2f46  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b2f4a  53                   push ebx
// 004b2f4b  55                   push ebp
// 004b2f4c  8be9                 mov ebp, ecx
// 004b2f4e  56                   push esi
// 004b2f4f  8b742420             mov esi, dword ptr [esp + 0x20]
// 004b2f53  50                   push eax
// 004b2f54  8d5d04               lea ebx, [ebp + 4]
// 004b2f57  56                   push esi
// 004b2f58  8bcb                 mov ecx, ebx
// 004b2f5a  896c2414             mov dword ptr [esp + 0x14], ebp
// 004b2f5e  897500               mov dword ptr [ebp], esi
// 004b2f61  e83affffff           call 0x4b2ea0
// 004b2f66  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004b2f6e  85f6                 test esi, esi
// 004b2f70  7453                 je 0x4b2fc5
// 004b2f72  57                   push edi
// 004b2f73  8dbee4000000         lea edi, [esi + 0xe4]
// 004b2f79  85ff                 test edi, edi
// 004b2f7b  7431                 je 0x4b2fae
// 004b2f7d  8937                 mov dword ptr [edi], esi
// 004b2f7f  8b33                 mov esi, dword ptr [ebx]
// 004b2f81  85f6                 test esi, esi
// 004b2f83  740c                 je 0x4b2f91
// 004b2f85  8d4e08               lea ecx, [esi + 8]
// 004b2f88  ba01000000           mov edx, 1
// 004b2f8d  f00fc111             lock xadd dword ptr [ecx], edx
// 004b2f91  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b2f94  85c9                 test ecx, ecx
// 004b2f96  7413                 je 0x4b2fab
// 004b2f98  8d4108               lea eax, [ecx + 8]
// 004b2f9b  83caff               or edx, 0xffffffff
// 004b2f9e  f00fc110             lock xadd dword ptr [eax], edx
// 004b2fa2  7507                 jne 0x4b2fab
// 004b2fa4  8b01                 mov eax, dword ptr [ecx]
// 004b2fa6  8b5008               mov edx, dword ptr [eax + 8]
// 004b2fa9  ffd2                 call edx
// 004b2fab  897704               mov dword ptr [edi + 4], esi
// 004b2fae  5f                   pop edi
// 004b2faf  5e                   pop esi
// 004b2fb0  8bc5                 mov eax, ebp
// 004b2fb2  5d                   pop ebp
// 004b2fb3  5b                   pop ebx
// 004b2fb4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b2fb8  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2fbf  83c410               add esp, 0x10
// 004b2fc2  c20800               ret 8
// 004b2fc5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b2fc9  5e                   pop esi
// 004b2fca  8bc5                 mov eax, ebp
// 004b2fcc  5d                   pop ebp
// 004b2fcd  5b                   pop ebx
// 004b2fce  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2fd5  83c410               add esp, 0x10
// 004b2fd8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
