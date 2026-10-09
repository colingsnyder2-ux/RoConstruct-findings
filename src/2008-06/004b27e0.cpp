// roc 2008-06 004b27e0  unit: RBX::VWeld::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b27e0
//
// 004b27e0  6aff                 push -1
// 004b27e2  68abfd7b00           push 0x7bfdab
// 004b27e7  64a100000000         mov eax, dword ptr fs:[0]
// 004b27ed  50                   push eax
// 004b27ee  64892500000000       mov dword ptr fs:[0], esp
// 004b27f5  51                   push ecx
// 004b27f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b27fa  53                   push ebx
// 004b27fb  55                   push ebp
// 004b27fc  8be9                 mov ebp, ecx
// 004b27fe  56                   push esi
// 004b27ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 004b2803  50                   push eax
// 004b2804  8d5d04               lea ebx, [ebp + 4]
// 004b2807  56                   push esi
// 004b2808  8bcb                 mov ecx, ebx
// 004b280a  896c2414             mov dword ptr [esp + 0x14], ebp
// 004b280e  897500               mov dword ptr [ebp], esi
// 004b2811  e83affffff           call 0x4b2750
// 004b2816  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004b281e  85f6                 test esi, esi
// 004b2820  7453                 je 0x4b2875
// 004b2822  57                   push edi
// 004b2823  8dbee4000000         lea edi, [esi + 0xe4]
// 004b2829  85ff                 test edi, edi
// 004b282b  7431                 je 0x4b285e
// 004b282d  8937                 mov dword ptr [edi], esi
// 004b282f  8b33                 mov esi, dword ptr [ebx]
// 004b2831  85f6                 test esi, esi
// 004b2833  740c                 je 0x4b2841
// 004b2835  8d4e08               lea ecx, [esi + 8]
// 004b2838  ba01000000           mov edx, 1
// 004b283d  f00fc111             lock xadd dword ptr [ecx], edx
// 004b2841  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b2844  85c9                 test ecx, ecx
// 004b2846  7413                 je 0x4b285b
// 004b2848  8d4108               lea eax, [ecx + 8]
// 004b284b  83caff               or edx, 0xffffffff
// 004b284e  f00fc110             lock xadd dword ptr [eax], edx
// 004b2852  7507                 jne 0x4b285b
// 004b2854  8b01                 mov eax, dword ptr [ecx]
// 004b2856  8b5008               mov edx, dword ptr [eax + 8]
// 004b2859  ffd2                 call edx
// 004b285b  897704               mov dword ptr [edi + 4], esi
// 004b285e  5f                   pop edi
// 004b285f  5e                   pop esi
// 004b2860  8bc5                 mov eax, ebp
// 004b2862  5d                   pop ebp
// 004b2863  5b                   pop ebx
// 004b2864  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b2868  64890d00000000       mov dword ptr fs:[0], ecx
// 004b286f  83c410               add esp, 0x10
// 004b2872  c20800               ret 8
// 004b2875  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b2879  5e                   pop esi
// 004b287a  8bc5                 mov eax, ebp
// 004b287c  5d                   pop ebp
// 004b287d  5b                   pop ebx
// 004b287e  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2885  83c410               add esp, 0x10
// 004b2888  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
