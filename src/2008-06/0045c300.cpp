// roc 2008-06 0045c300  unit: CRobloxWnd  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c300
//
// 0045c300  6aff                 push -1
// 0045c302  68abfd7b00           push 0x7bfdab
// 0045c307  64a100000000         mov eax, dword ptr fs:[0]
// 0045c30d  50                   push eax
// 0045c30e  64892500000000       mov dword ptr fs:[0], esp
// 0045c315  51                   push ecx
// 0045c316  8b442418             mov eax, dword ptr [esp + 0x18]
// 0045c31a  53                   push ebx
// 0045c31b  55                   push ebp
// 0045c31c  8be9                 mov ebp, ecx
// 0045c31e  56                   push esi
// 0045c31f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0045c323  50                   push eax
// 0045c324  8d5d04               lea ebx, [ebp + 4]
// 0045c327  56                   push esi
// 0045c328  8bcb                 mov ecx, ebx
// 0045c32a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0045c32e  897500               mov dword ptr [ebp], esi
// 0045c331  e88af5ffff           call 0x45b8c0
// 0045c336  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0045c33e  85f6                 test esi, esi
// 0045c340  7453                 je 0x45c395
// 0045c342  57                   push edi
// 0045c343  8dbee4000000         lea edi, [esi + 0xe4]
// 0045c349  85ff                 test edi, edi
// 0045c34b  7431                 je 0x45c37e
// 0045c34d  8937                 mov dword ptr [edi], esi
// 0045c34f  8b33                 mov esi, dword ptr [ebx]
// 0045c351  85f6                 test esi, esi
// 0045c353  740c                 je 0x45c361
// 0045c355  8d4e08               lea ecx, [esi + 8]
// 0045c358  ba01000000           mov edx, 1
// 0045c35d  f00fc111             lock xadd dword ptr [ecx], edx
// 0045c361  8b4f04               mov ecx, dword ptr [edi + 4]
// 0045c364  85c9                 test ecx, ecx
// 0045c366  7413                 je 0x45c37b
// 0045c368  8d4108               lea eax, [ecx + 8]
// 0045c36b  83caff               or edx, 0xffffffff
// 0045c36e  f00fc110             lock xadd dword ptr [eax], edx
// 0045c372  7507                 jne 0x45c37b
// 0045c374  8b01                 mov eax, dword ptr [ecx]
// 0045c376  8b5008               mov edx, dword ptr [eax + 8]
// 0045c379  ffd2                 call edx
// 0045c37b  897704               mov dword ptr [edi + 4], esi
// 0045c37e  5f                   pop edi
// 0045c37f  5e                   pop esi
// 0045c380  8bc5                 mov eax, ebp
// 0045c382  5d                   pop ebp
// 0045c383  5b                   pop ebx
// 0045c384  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045c388  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c38f  83c410               add esp, 0x10
// 0045c392  c20800               ret 8
// 0045c395  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045c399  5e                   pop esi
// 0045c39a  8bc5                 mov eax, ebp
// 0045c39c  5d                   pop ebp
// 0045c39d  5b                   pop ebx
// 0045c39e  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c3a5  83c410               add esp, 0x10
// 0045c3a8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
