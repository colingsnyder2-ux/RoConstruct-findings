// roc 2008-06 0045c1a0  unit: CRobloxWnd  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c1a0
//
// 0045c1a0  6aff                 push -1
// 0045c1a2  68abfd7b00           push 0x7bfdab
// 0045c1a7  64a100000000         mov eax, dword ptr fs:[0]
// 0045c1ad  50                   push eax
// 0045c1ae  64892500000000       mov dword ptr fs:[0], esp
// 0045c1b5  51                   push ecx
// 0045c1b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0045c1ba  53                   push ebx
// 0045c1bb  55                   push ebp
// 0045c1bc  8be9                 mov ebp, ecx
// 0045c1be  56                   push esi
// 0045c1bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 0045c1c3  50                   push eax
// 0045c1c4  8d5d04               lea ebx, [ebp + 4]
// 0045c1c7  56                   push esi
// 0045c1c8  8bcb                 mov ecx, ebx
// 0045c1ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 0045c1ce  897500               mov dword ptr [ebp], esi
// 0045c1d1  e8baf5ffff           call 0x45b790
// 0045c1d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0045c1de  85f6                 test esi, esi
// 0045c1e0  7453                 je 0x45c235
// 0045c1e2  57                   push edi
// 0045c1e3  8dbee4000000         lea edi, [esi + 0xe4]
// 0045c1e9  85ff                 test edi, edi
// 0045c1eb  7431                 je 0x45c21e
// 0045c1ed  8937                 mov dword ptr [edi], esi
// 0045c1ef  8b33                 mov esi, dword ptr [ebx]
// 0045c1f1  85f6                 test esi, esi
// 0045c1f3  740c                 je 0x45c201
// 0045c1f5  8d4e08               lea ecx, [esi + 8]
// 0045c1f8  ba01000000           mov edx, 1
// 0045c1fd  f00fc111             lock xadd dword ptr [ecx], edx
// 0045c201  8b4f04               mov ecx, dword ptr [edi + 4]
// 0045c204  85c9                 test ecx, ecx
// 0045c206  7413                 je 0x45c21b
// 0045c208  8d4108               lea eax, [ecx + 8]
// 0045c20b  83caff               or edx, 0xffffffff
// 0045c20e  f00fc110             lock xadd dword ptr [eax], edx
// 0045c212  7507                 jne 0x45c21b
// 0045c214  8b01                 mov eax, dword ptr [ecx]
// 0045c216  8b5008               mov edx, dword ptr [eax + 8]
// 0045c219  ffd2                 call edx
// 0045c21b  897704               mov dword ptr [edi + 4], esi
// 0045c21e  5f                   pop edi
// 0045c21f  5e                   pop esi
// 0045c220  8bc5                 mov eax, ebp
// 0045c222  5d                   pop ebp
// 0045c223  5b                   pop ebx
// 0045c224  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045c228  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c22f  83c410               add esp, 0x10
// 0045c232  c20800               ret 8
// 0045c235  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045c239  5e                   pop esi
// 0045c23a  8bc5                 mov eax, ebp
// 0045c23c  5d                   pop ebp
// 0045c23d  5b                   pop ebx
// 0045c23e  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c245  83c410               add esp, 0x10
// 0045c248  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
