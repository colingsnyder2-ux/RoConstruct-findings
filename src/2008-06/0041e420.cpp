// roc 2008-06 0041e420  unit: VDHTMLWindow::?$SignalDesc  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e420
//
// 0041e420  6aff                 push -1
// 0041e422  68abfd7b00           push 0x7bfdab
// 0041e427  64a100000000         mov eax, dword ptr fs:[0]
// 0041e42d  50                   push eax
// 0041e42e  64892500000000       mov dword ptr fs:[0], esp
// 0041e435  51                   push ecx
// 0041e436  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041e43a  53                   push ebx
// 0041e43b  55                   push ebp
// 0041e43c  8be9                 mov ebp, ecx
// 0041e43e  56                   push esi
// 0041e43f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0041e443  50                   push eax
// 0041e444  8d5d04               lea ebx, [ebp + 4]
// 0041e447  56                   push esi
// 0041e448  8bcb                 mov ecx, ebx
// 0041e44a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0041e44e  897500               mov dword ptr [ebp], esi
// 0041e451  e8dafdffff           call 0x41e230
// 0041e456  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041e45e  85f6                 test esi, esi
// 0041e460  7453                 je 0x41e4b5
// 0041e462  57                   push edi
// 0041e463  8dbee4000000         lea edi, [esi + 0xe4]
// 0041e469  85ff                 test edi, edi
// 0041e46b  7431                 je 0x41e49e
// 0041e46d  8937                 mov dword ptr [edi], esi
// 0041e46f  8b33                 mov esi, dword ptr [ebx]
// 0041e471  85f6                 test esi, esi
// 0041e473  740c                 je 0x41e481
// 0041e475  8d4e08               lea ecx, [esi + 8]
// 0041e478  ba01000000           mov edx, 1
// 0041e47d  f00fc111             lock xadd dword ptr [ecx], edx
// 0041e481  8b4f04               mov ecx, dword ptr [edi + 4]
// 0041e484  85c9                 test ecx, ecx
// 0041e486  7413                 je 0x41e49b
// 0041e488  8d4108               lea eax, [ecx + 8]
// 0041e48b  83caff               or edx, 0xffffffff
// 0041e48e  f00fc110             lock xadd dword ptr [eax], edx
// 0041e492  7507                 jne 0x41e49b
// 0041e494  8b01                 mov eax, dword ptr [ecx]
// 0041e496  8b5008               mov edx, dword ptr [eax + 8]
// 0041e499  ffd2                 call edx
// 0041e49b  897704               mov dword ptr [edi + 4], esi
// 0041e49e  5f                   pop edi
// 0041e49f  5e                   pop esi
// 0041e4a0  8bc5                 mov eax, ebp
// 0041e4a2  5d                   pop ebp
// 0041e4a3  5b                   pop ebx
// 0041e4a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041e4a8  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e4af  83c410               add esp, 0x10
// 0041e4b2  c20800               ret 8
// 0041e4b5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041e4b9  5e                   pop esi
// 0041e4ba  8bc5                 mov eax, ebp
// 0041e4bc  5d                   pop ebp
// 0041e4bd  5b                   pop ebx
// 0041e4be  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e4c5  83c410               add esp, 0x10
// 0041e4c8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
