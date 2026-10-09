// roc 2008-06 0045c250  unit: CRobloxWnd  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c250
//
// 0045c250  6aff                 push -1
// 0045c252  68abfd7b00           push 0x7bfdab
// 0045c257  64a100000000         mov eax, dword ptr fs:[0]
// 0045c25d  50                   push eax
// 0045c25e  64892500000000       mov dword ptr fs:[0], esp
// 0045c265  51                   push ecx
// 0045c266  8b442418             mov eax, dword ptr [esp + 0x18]
// 0045c26a  53                   push ebx
// 0045c26b  55                   push ebp
// 0045c26c  8be9                 mov ebp, ecx
// 0045c26e  56                   push esi
// 0045c26f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0045c273  50                   push eax
// 0045c274  8d5d04               lea ebx, [ebp + 4]
// 0045c277  56                   push esi
// 0045c278  8bcb                 mov ecx, ebx
// 0045c27a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0045c27e  897500               mov dword ptr [ebp], esi
// 0045c281  e8aaf5ffff           call 0x45b830
// 0045c286  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0045c28e  85f6                 test esi, esi
// 0045c290  7453                 je 0x45c2e5
// 0045c292  57                   push edi
// 0045c293  8dbee4000000         lea edi, [esi + 0xe4]
// 0045c299  85ff                 test edi, edi
// 0045c29b  7431                 je 0x45c2ce
// 0045c29d  8937                 mov dword ptr [edi], esi
// 0045c29f  8b33                 mov esi, dword ptr [ebx]
// 0045c2a1  85f6                 test esi, esi
// 0045c2a3  740c                 je 0x45c2b1
// 0045c2a5  8d4e08               lea ecx, [esi + 8]
// 0045c2a8  ba01000000           mov edx, 1
// 0045c2ad  f00fc111             lock xadd dword ptr [ecx], edx
// 0045c2b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0045c2b4  85c9                 test ecx, ecx
// 0045c2b6  7413                 je 0x45c2cb
// 0045c2b8  8d4108               lea eax, [ecx + 8]
// 0045c2bb  83caff               or edx, 0xffffffff
// 0045c2be  f00fc110             lock xadd dword ptr [eax], edx
// 0045c2c2  7507                 jne 0x45c2cb
// 0045c2c4  8b01                 mov eax, dword ptr [ecx]
// 0045c2c6  8b5008               mov edx, dword ptr [eax + 8]
// 0045c2c9  ffd2                 call edx
// 0045c2cb  897704               mov dword ptr [edi + 4], esi
// 0045c2ce  5f                   pop edi
// 0045c2cf  5e                   pop esi
// 0045c2d0  8bc5                 mov eax, ebp
// 0045c2d2  5d                   pop ebp
// 0045c2d3  5b                   pop ebx
// 0045c2d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045c2d8  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c2df  83c410               add esp, 0x10
// 0045c2e2  c20800               ret 8
// 0045c2e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045c2e9  5e                   pop esi
// 0045c2ea  8bc5                 mov eax, ebp
// 0045c2ec  5d                   pop ebp
// 0045c2ed  5b                   pop ebx
// 0045c2ee  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c2f5  83c410               add esp, 0x10
// 0045c2f8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
