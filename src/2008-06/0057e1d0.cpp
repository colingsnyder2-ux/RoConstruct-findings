// roc 2008-06 0057e1d0  unit: RBX::ClearBackpack  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057e1d0
//
// 0057e1d0  6aff                 push -1
// 0057e1d2  68abfd7b00           push 0x7bfdab
// 0057e1d7  64a100000000         mov eax, dword ptr fs:[0]
// 0057e1dd  50                   push eax
// 0057e1de  64892500000000       mov dword ptr fs:[0], esp
// 0057e1e5  51                   push ecx
// 0057e1e6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057e1ea  53                   push ebx
// 0057e1eb  55                   push ebp
// 0057e1ec  8be9                 mov ebp, ecx
// 0057e1ee  56                   push esi
// 0057e1ef  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057e1f3  50                   push eax
// 0057e1f4  8d5d04               lea ebx, [ebp + 4]
// 0057e1f7  56                   push esi
// 0057e1f8  8bcb                 mov ecx, ebx
// 0057e1fa  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057e1fe  897500               mov dword ptr [ebp], esi
// 0057e201  e8bafbffff           call 0x57ddc0
// 0057e206  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057e20e  85f6                 test esi, esi
// 0057e210  7453                 je 0x57e265
// 0057e212  57                   push edi
// 0057e213  8dbee4000000         lea edi, [esi + 0xe4]
// 0057e219  85ff                 test edi, edi
// 0057e21b  7431                 je 0x57e24e
// 0057e21d  8937                 mov dword ptr [edi], esi
// 0057e21f  8b33                 mov esi, dword ptr [ebx]
// 0057e221  85f6                 test esi, esi
// 0057e223  740c                 je 0x57e231
// 0057e225  8d4e08               lea ecx, [esi + 8]
// 0057e228  ba01000000           mov edx, 1
// 0057e22d  f00fc111             lock xadd dword ptr [ecx], edx
// 0057e231  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057e234  85c9                 test ecx, ecx
// 0057e236  7413                 je 0x57e24b
// 0057e238  8d4108               lea eax, [ecx + 8]
// 0057e23b  83caff               or edx, 0xffffffff
// 0057e23e  f00fc110             lock xadd dword ptr [eax], edx
// 0057e242  7507                 jne 0x57e24b
// 0057e244  8b01                 mov eax, dword ptr [ecx]
// 0057e246  8b5008               mov edx, dword ptr [eax + 8]
// 0057e249  ffd2                 call edx
// 0057e24b  897704               mov dword ptr [edi + 4], esi
// 0057e24e  5f                   pop edi
// 0057e24f  5e                   pop esi
// 0057e250  8bc5                 mov eax, ebp
// 0057e252  5d                   pop ebp
// 0057e253  5b                   pop ebx
// 0057e254  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057e258  64890d00000000       mov dword ptr fs:[0], ecx
// 0057e25f  83c410               add esp, 0x10
// 0057e262  c20800               ret 8
// 0057e265  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057e269  5e                   pop esi
// 0057e26a  8bc5                 mov eax, ebp
// 0057e26c  5d                   pop ebp
// 0057e26d  5b                   pop ebx
// 0057e26e  64890d00000000       mov dword ptr fs:[0], ecx
// 0057e275  83c410               add esp, 0x10
// 0057e278  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
