// roc 2008-06 005c27f0  unit: RBX::VBodyAngularVelocity::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c27f0
//
// 005c27f0  6aff                 push -1
// 005c27f2  68abfd7b00           push 0x7bfdab
// 005c27f7  64a100000000         mov eax, dword ptr fs:[0]
// 005c27fd  50                   push eax
// 005c27fe  64892500000000       mov dword ptr fs:[0], esp
// 005c2805  51                   push ecx
// 005c2806  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c280a  53                   push ebx
// 005c280b  55                   push ebp
// 005c280c  8be9                 mov ebp, ecx
// 005c280e  56                   push esi
// 005c280f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c2813  50                   push eax
// 005c2814  8d5d04               lea ebx, [ebp + 4]
// 005c2817  56                   push esi
// 005c2818  8bcb                 mov ecx, ebx
// 005c281a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c281e  897500               mov dword ptr [ebp], esi
// 005c2821  e83affffff           call 0x5c2760
// 005c2826  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c282e  85f6                 test esi, esi
// 005c2830  7453                 je 0x5c2885
// 005c2832  57                   push edi
// 005c2833  8dbee4000000         lea edi, [esi + 0xe4]
// 005c2839  85ff                 test edi, edi
// 005c283b  7431                 je 0x5c286e
// 005c283d  8937                 mov dword ptr [edi], esi
// 005c283f  8b33                 mov esi, dword ptr [ebx]
// 005c2841  85f6                 test esi, esi
// 005c2843  740c                 je 0x5c2851
// 005c2845  8d4e08               lea ecx, [esi + 8]
// 005c2848  ba01000000           mov edx, 1
// 005c284d  f00fc111             lock xadd dword ptr [ecx], edx
// 005c2851  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c2854  85c9                 test ecx, ecx
// 005c2856  7413                 je 0x5c286b
// 005c2858  8d4108               lea eax, [ecx + 8]
// 005c285b  83caff               or edx, 0xffffffff
// 005c285e  f00fc110             lock xadd dword ptr [eax], edx
// 005c2862  7507                 jne 0x5c286b
// 005c2864  8b01                 mov eax, dword ptr [ecx]
// 005c2866  8b5008               mov edx, dword ptr [eax + 8]
// 005c2869  ffd2                 call edx
// 005c286b  897704               mov dword ptr [edi + 4], esi
// 005c286e  5f                   pop edi
// 005c286f  5e                   pop esi
// 005c2870  8bc5                 mov eax, ebp
// 005c2872  5d                   pop ebp
// 005c2873  5b                   pop ebx
// 005c2874  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c2878  64890d00000000       mov dword ptr fs:[0], ecx
// 005c287f  83c410               add esp, 0x10
// 005c2882  c20800               ret 8
// 005c2885  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c2889  5e                   pop esi
// 005c288a  8bc5                 mov eax, ebp
// 005c288c  5d                   pop ebp
// 005c288d  5b                   pop ebx
// 005c288e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2895  83c410               add esp, 0x10
// 005c2898  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
