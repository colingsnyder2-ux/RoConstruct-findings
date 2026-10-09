// roc 2008-06 0048f170  unit: RBX::VSpawnLocation::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048f170
//
// 0048f170  6aff                 push -1
// 0048f172  68abfd7b00           push 0x7bfdab
// 0048f177  64a100000000         mov eax, dword ptr fs:[0]
// 0048f17d  50                   push eax
// 0048f17e  64892500000000       mov dword ptr fs:[0], esp
// 0048f185  51                   push ecx
// 0048f186  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048f18a  53                   push ebx
// 0048f18b  55                   push ebp
// 0048f18c  8be9                 mov ebp, ecx
// 0048f18e  56                   push esi
// 0048f18f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048f193  50                   push eax
// 0048f194  8d5d04               lea ebx, [ebp + 4]
// 0048f197  56                   push esi
// 0048f198  8bcb                 mov ecx, ebx
// 0048f19a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048f19e  897500               mov dword ptr [ebp], esi
// 0048f1a1  e83affffff           call 0x48f0e0
// 0048f1a6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048f1ae  85f6                 test esi, esi
// 0048f1b0  7453                 je 0x48f205
// 0048f1b2  57                   push edi
// 0048f1b3  8dbee4000000         lea edi, [esi + 0xe4]
// 0048f1b9  85ff                 test edi, edi
// 0048f1bb  7431                 je 0x48f1ee
// 0048f1bd  8937                 mov dword ptr [edi], esi
// 0048f1bf  8b33                 mov esi, dword ptr [ebx]
// 0048f1c1  85f6                 test esi, esi
// 0048f1c3  740c                 je 0x48f1d1
// 0048f1c5  8d4e08               lea ecx, [esi + 8]
// 0048f1c8  ba01000000           mov edx, 1
// 0048f1cd  f00fc111             lock xadd dword ptr [ecx], edx
// 0048f1d1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048f1d4  85c9                 test ecx, ecx
// 0048f1d6  7413                 je 0x48f1eb
// 0048f1d8  8d4108               lea eax, [ecx + 8]
// 0048f1db  83caff               or edx, 0xffffffff
// 0048f1de  f00fc110             lock xadd dword ptr [eax], edx
// 0048f1e2  7507                 jne 0x48f1eb
// 0048f1e4  8b01                 mov eax, dword ptr [ecx]
// 0048f1e6  8b5008               mov edx, dword ptr [eax + 8]
// 0048f1e9  ffd2                 call edx
// 0048f1eb  897704               mov dword ptr [edi + 4], esi
// 0048f1ee  5f                   pop edi
// 0048f1ef  5e                   pop esi
// 0048f1f0  8bc5                 mov eax, ebp
// 0048f1f2  5d                   pop ebp
// 0048f1f3  5b                   pop ebx
// 0048f1f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048f1f8  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f1ff  83c410               add esp, 0x10
// 0048f202  c20800               ret 8
// 0048f205  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048f209  5e                   pop esi
// 0048f20a  8bc5                 mov eax, ebp
// 0048f20c  5d                   pop ebp
// 0048f20d  5b                   pop ebx
// 0048f20e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048f215  83c410               add esp, 0x10
// 0048f218  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
