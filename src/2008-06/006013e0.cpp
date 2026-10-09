// roc 2008-06 006013e0  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006013e0
//
// 006013e0  6aff                 push -1
// 006013e2  68abfd7b00           push 0x7bfdab
// 006013e7  64a100000000         mov eax, dword ptr fs:[0]
// 006013ed  50                   push eax
// 006013ee  64892500000000       mov dword ptr fs:[0], esp
// 006013f5  51                   push ecx
// 006013f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006013fa  53                   push ebx
// 006013fb  55                   push ebp
// 006013fc  8be9                 mov ebp, ecx
// 006013fe  56                   push esi
// 006013ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 00601403  50                   push eax
// 00601404  8d5d04               lea ebx, [ebp + 4]
// 00601407  56                   push esi
// 00601408  8bcb                 mov ecx, ebx
// 0060140a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0060140e  897500               mov dword ptr [ebp], esi
// 00601411  e8aaf3ffff           call 0x6007c0
// 00601416  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0060141e  85f6                 test esi, esi
// 00601420  7453                 je 0x601475
// 00601422  57                   push edi
// 00601423  8dbee4000000         lea edi, [esi + 0xe4]
// 00601429  85ff                 test edi, edi
// 0060142b  7431                 je 0x60145e
// 0060142d  8937                 mov dword ptr [edi], esi
// 0060142f  8b33                 mov esi, dword ptr [ebx]
// 00601431  85f6                 test esi, esi
// 00601433  740c                 je 0x601441
// 00601435  8d4e08               lea ecx, [esi + 8]
// 00601438  ba01000000           mov edx, 1
// 0060143d  f00fc111             lock xadd dword ptr [ecx], edx
// 00601441  8b4f04               mov ecx, dword ptr [edi + 4]
// 00601444  85c9                 test ecx, ecx
// 00601446  7413                 je 0x60145b
// 00601448  8d4108               lea eax, [ecx + 8]
// 0060144b  83caff               or edx, 0xffffffff
// 0060144e  f00fc110             lock xadd dword ptr [eax], edx
// 00601452  7507                 jne 0x60145b
// 00601454  8b01                 mov eax, dword ptr [ecx]
// 00601456  8b5008               mov edx, dword ptr [eax + 8]
// 00601459  ffd2                 call edx
// 0060145b  897704               mov dword ptr [edi + 4], esi
// 0060145e  5f                   pop edi
// 0060145f  5e                   pop esi
// 00601460  8bc5                 mov eax, ebp
// 00601462  5d                   pop ebp
// 00601463  5b                   pop ebx
// 00601464  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601468  64890d00000000       mov dword ptr fs:[0], ecx
// 0060146f  83c410               add esp, 0x10
// 00601472  c20800               ret 8
// 00601475  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00601479  5e                   pop esi
// 0060147a  8bc5                 mov eax, ebp
// 0060147c  5d                   pop ebp
// 0060147d  5b                   pop ebx
// 0060147e  64890d00000000       mov dword ptr fs:[0], ecx
// 00601485  83c410               add esp, 0x10
// 00601488  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
