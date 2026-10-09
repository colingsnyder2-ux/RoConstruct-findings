// roc 2008-06 00656eb0  unit: RBX::ArrowPanel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00656eb0
//
// 00656eb0  6aff                 push -1
// 00656eb2  68abfd7b00           push 0x7bfdab
// 00656eb7  64a100000000         mov eax, dword ptr fs:[0]
// 00656ebd  50                   push eax
// 00656ebe  64892500000000       mov dword ptr fs:[0], esp
// 00656ec5  51                   push ecx
// 00656ec6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00656eca  53                   push ebx
// 00656ecb  55                   push ebp
// 00656ecc  8be9                 mov ebp, ecx
// 00656ece  56                   push esi
// 00656ecf  8b742420             mov esi, dword ptr [esp + 0x20]
// 00656ed3  50                   push eax
// 00656ed4  8d5d04               lea ebx, [ebp + 4]
// 00656ed7  56                   push esi
// 00656ed8  8bcb                 mov ecx, ebx
// 00656eda  896c2414             mov dword ptr [esp + 0x14], ebp
// 00656ede  897500               mov dword ptr [ebp], esi
// 00656ee1  e83afeffff           call 0x656d20
// 00656ee6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00656eee  85f6                 test esi, esi
// 00656ef0  7453                 je 0x656f45
// 00656ef2  57                   push edi
// 00656ef3  8dbee4000000         lea edi, [esi + 0xe4]
// 00656ef9  85ff                 test edi, edi
// 00656efb  7431                 je 0x656f2e
// 00656efd  8937                 mov dword ptr [edi], esi
// 00656eff  8b33                 mov esi, dword ptr [ebx]
// 00656f01  85f6                 test esi, esi
// 00656f03  740c                 je 0x656f11
// 00656f05  8d4e08               lea ecx, [esi + 8]
// 00656f08  ba01000000           mov edx, 1
// 00656f0d  f00fc111             lock xadd dword ptr [ecx], edx
// 00656f11  8b4f04               mov ecx, dword ptr [edi + 4]
// 00656f14  85c9                 test ecx, ecx
// 00656f16  7413                 je 0x656f2b
// 00656f18  8d4108               lea eax, [ecx + 8]
// 00656f1b  83caff               or edx, 0xffffffff
// 00656f1e  f00fc110             lock xadd dword ptr [eax], edx
// 00656f22  7507                 jne 0x656f2b
// 00656f24  8b01                 mov eax, dword ptr [ecx]
// 00656f26  8b5008               mov edx, dword ptr [eax + 8]
// 00656f29  ffd2                 call edx
// 00656f2b  897704               mov dword ptr [edi + 4], esi
// 00656f2e  5f                   pop edi
// 00656f2f  5e                   pop esi
// 00656f30  8bc5                 mov eax, ebp
// 00656f32  5d                   pop ebp
// 00656f33  5b                   pop ebx
// 00656f34  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00656f38  64890d00000000       mov dword ptr fs:[0], ecx
// 00656f3f  83c410               add esp, 0x10
// 00656f42  c20800               ret 8
// 00656f45  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00656f49  5e                   pop esi
// 00656f4a  8bc5                 mov eax, ebp
// 00656f4c  5d                   pop ebp
// 00656f4d  5b                   pop ebx
// 00656f4e  64890d00000000       mov dword ptr fs:[0], ecx
// 00656f55  83c410               add esp, 0x10
// 00656f58  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
