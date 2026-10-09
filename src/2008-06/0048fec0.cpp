// roc 2008-06 0048fec0  unit: RBX::VShirt::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fec0
//
// 0048fec0  6aff                 push -1
// 0048fec2  68abfd7b00           push 0x7bfdab
// 0048fec7  64a100000000         mov eax, dword ptr fs:[0]
// 0048fecd  50                   push eax
// 0048fece  64892500000000       mov dword ptr fs:[0], esp
// 0048fed5  51                   push ecx
// 0048fed6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048feda  53                   push ebx
// 0048fedb  55                   push ebp
// 0048fedc  8be9                 mov ebp, ecx
// 0048fede  56                   push esi
// 0048fedf  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048fee3  50                   push eax
// 0048fee4  8d5d04               lea ebx, [ebp + 4]
// 0048fee7  56                   push esi
// 0048fee8  8bcb                 mov ecx, ebx
// 0048feea  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048feee  897500               mov dword ptr [ebp], esi
// 0048fef1  e83affffff           call 0x48fe30
// 0048fef6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048fefe  85f6                 test esi, esi
// 0048ff00  7453                 je 0x48ff55
// 0048ff02  57                   push edi
// 0048ff03  8dbee4000000         lea edi, [esi + 0xe4]
// 0048ff09  85ff                 test edi, edi
// 0048ff0b  7431                 je 0x48ff3e
// 0048ff0d  8937                 mov dword ptr [edi], esi
// 0048ff0f  8b33                 mov esi, dword ptr [ebx]
// 0048ff11  85f6                 test esi, esi
// 0048ff13  740c                 je 0x48ff21
// 0048ff15  8d4e08               lea ecx, [esi + 8]
// 0048ff18  ba01000000           mov edx, 1
// 0048ff1d  f00fc111             lock xadd dword ptr [ecx], edx
// 0048ff21  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048ff24  85c9                 test ecx, ecx
// 0048ff26  7413                 je 0x48ff3b
// 0048ff28  8d4108               lea eax, [ecx + 8]
// 0048ff2b  83caff               or edx, 0xffffffff
// 0048ff2e  f00fc110             lock xadd dword ptr [eax], edx
// 0048ff32  7507                 jne 0x48ff3b
// 0048ff34  8b01                 mov eax, dword ptr [ecx]
// 0048ff36  8b5008               mov edx, dword ptr [eax + 8]
// 0048ff39  ffd2                 call edx
// 0048ff3b  897704               mov dword ptr [edi + 4], esi
// 0048ff3e  5f                   pop edi
// 0048ff3f  5e                   pop esi
// 0048ff40  8bc5                 mov eax, ebp
// 0048ff42  5d                   pop ebp
// 0048ff43  5b                   pop ebx
// 0048ff44  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048ff48  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ff4f  83c410               add esp, 0x10
// 0048ff52  c20800               ret 8
// 0048ff55  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048ff59  5e                   pop esi
// 0048ff5a  8bc5                 mov eax, ebp
// 0048ff5c  5d                   pop ebp
// 0048ff5d  5b                   pop ebx
// 0048ff5e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ff65  83c410               add esp, 0x10
// 0048ff68  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
