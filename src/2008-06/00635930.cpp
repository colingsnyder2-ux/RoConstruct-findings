// roc 2008-06 00635930  unit: std::D::DU?$char_traits::V?$basic_string::V?$Value::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00635930
//
// 00635930  6aff                 push -1
// 00635932  68abfd7b00           push 0x7bfdab
// 00635937  64a100000000         mov eax, dword ptr fs:[0]
// 0063593d  50                   push eax
// 0063593e  64892500000000       mov dword ptr fs:[0], esp
// 00635945  51                   push ecx
// 00635946  8b442418             mov eax, dword ptr [esp + 0x18]
// 0063594a  53                   push ebx
// 0063594b  55                   push ebp
// 0063594c  8be9                 mov ebp, ecx
// 0063594e  56                   push esi
// 0063594f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00635953  50                   push eax
// 00635954  8d5d04               lea ebx, [ebp + 4]
// 00635957  56                   push esi
// 00635958  8bcb                 mov ecx, ebx
// 0063595a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0063595e  897500               mov dword ptr [ebp], esi
// 00635961  e83affffff           call 0x6358a0
// 00635966  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063596e  85f6                 test esi, esi
// 00635970  7453                 je 0x6359c5
// 00635972  57                   push edi
// 00635973  8dbee4000000         lea edi, [esi + 0xe4]
// 00635979  85ff                 test edi, edi
// 0063597b  7431                 je 0x6359ae
// 0063597d  8937                 mov dword ptr [edi], esi
// 0063597f  8b33                 mov esi, dword ptr [ebx]
// 00635981  85f6                 test esi, esi
// 00635983  740c                 je 0x635991
// 00635985  8d4e08               lea ecx, [esi + 8]
// 00635988  ba01000000           mov edx, 1
// 0063598d  f00fc111             lock xadd dword ptr [ecx], edx
// 00635991  8b4f04               mov ecx, dword ptr [edi + 4]
// 00635994  85c9                 test ecx, ecx
// 00635996  7413                 je 0x6359ab
// 00635998  8d4108               lea eax, [ecx + 8]
// 0063599b  83caff               or edx, 0xffffffff
// 0063599e  f00fc110             lock xadd dword ptr [eax], edx
// 006359a2  7507                 jne 0x6359ab
// 006359a4  8b01                 mov eax, dword ptr [ecx]
// 006359a6  8b5008               mov edx, dword ptr [eax + 8]
// 006359a9  ffd2                 call edx
// 006359ab  897704               mov dword ptr [edi + 4], esi
// 006359ae  5f                   pop edi
// 006359af  5e                   pop esi
// 006359b0  8bc5                 mov eax, ebp
// 006359b2  5d                   pop ebp
// 006359b3  5b                   pop ebx
// 006359b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006359b8  64890d00000000       mov dword ptr fs:[0], ecx
// 006359bf  83c410               add esp, 0x10
// 006359c2  c20800               ret 8
// 006359c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006359c9  5e                   pop esi
// 006359ca  8bc5                 mov eax, ebp
// 006359cc  5d                   pop ebp
// 006359cd  5b                   pop ebx
// 006359ce  64890d00000000       mov dword ptr fs:[0], ecx
// 006359d5  83c410               add esp, 0x10
// 006359d8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
