// roc 2008-06 0045c0f0  unit: CRobloxWnd  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c0f0
//
// 0045c0f0  6aff                 push -1
// 0045c0f2  68abfd7b00           push 0x7bfdab
// 0045c0f7  64a100000000         mov eax, dword ptr fs:[0]
// 0045c0fd  50                   push eax
// 0045c0fe  64892500000000       mov dword ptr fs:[0], esp
// 0045c105  51                   push ecx
// 0045c106  8b442418             mov eax, dword ptr [esp + 0x18]
// 0045c10a  53                   push ebx
// 0045c10b  55                   push ebp
// 0045c10c  8be9                 mov ebp, ecx
// 0045c10e  56                   push esi
// 0045c10f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0045c113  50                   push eax
// 0045c114  8d5d04               lea ebx, [ebp + 4]
// 0045c117  56                   push esi
// 0045c118  8bcb                 mov ecx, ebx
// 0045c11a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0045c11e  897500               mov dword ptr [ebp], esi
// 0045c121  e8daf5ffff           call 0x45b700
// 0045c126  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0045c12e  85f6                 test esi, esi
// 0045c130  7453                 je 0x45c185
// 0045c132  57                   push edi
// 0045c133  8dbee4000000         lea edi, [esi + 0xe4]
// 0045c139  85ff                 test edi, edi
// 0045c13b  7431                 je 0x45c16e
// 0045c13d  8937                 mov dword ptr [edi], esi
// 0045c13f  8b33                 mov esi, dword ptr [ebx]
// 0045c141  85f6                 test esi, esi
// 0045c143  740c                 je 0x45c151
// 0045c145  8d4e08               lea ecx, [esi + 8]
// 0045c148  ba01000000           mov edx, 1
// 0045c14d  f00fc111             lock xadd dword ptr [ecx], edx
// 0045c151  8b4f04               mov ecx, dword ptr [edi + 4]
// 0045c154  85c9                 test ecx, ecx
// 0045c156  7413                 je 0x45c16b
// 0045c158  8d4108               lea eax, [ecx + 8]
// 0045c15b  83caff               or edx, 0xffffffff
// 0045c15e  f00fc110             lock xadd dword ptr [eax], edx
// 0045c162  7507                 jne 0x45c16b
// 0045c164  8b01                 mov eax, dword ptr [ecx]
// 0045c166  8b5008               mov edx, dword ptr [eax + 8]
// 0045c169  ffd2                 call edx
// 0045c16b  897704               mov dword ptr [edi + 4], esi
// 0045c16e  5f                   pop edi
// 0045c16f  5e                   pop esi
// 0045c170  8bc5                 mov eax, ebp
// 0045c172  5d                   pop ebp
// 0045c173  5b                   pop ebx
// 0045c174  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045c178  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c17f  83c410               add esp, 0x10
// 0045c182  c20800               ret 8
// 0045c185  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045c189  5e                   pop esi
// 0045c18a  8bc5                 mov eax, ebp
// 0045c18c  5d                   pop ebp
// 0045c18d  5b                   pop ebx
// 0045c18e  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c195  83c410               add esp, 0x10
// 0045c198  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
