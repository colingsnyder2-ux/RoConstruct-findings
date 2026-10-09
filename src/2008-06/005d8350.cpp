// roc 2008-06 005d8350  unit: RBX::Humanoid  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d8350
//
// 005d8350  6aff                 push -1
// 005d8352  68abfd7b00           push 0x7bfdab
// 005d8357  64a100000000         mov eax, dword ptr fs:[0]
// 005d835d  50                   push eax
// 005d835e  64892500000000       mov dword ptr fs:[0], esp
// 005d8365  51                   push ecx
// 005d8366  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d836a  53                   push ebx
// 005d836b  55                   push ebp
// 005d836c  8be9                 mov ebp, ecx
// 005d836e  56                   push esi
// 005d836f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005d8373  50                   push eax
// 005d8374  8d5d04               lea ebx, [ebp + 4]
// 005d8377  56                   push esi
// 005d8378  8bcb                 mov ecx, ebx
// 005d837a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005d837e  897500               mov dword ptr [ebp], esi
// 005d8381  e8faf8ffff           call 0x5d7c80
// 005d8386  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d838e  85f6                 test esi, esi
// 005d8390  7453                 je 0x5d83e5
// 005d8392  57                   push edi
// 005d8393  8dbee4000000         lea edi, [esi + 0xe4]
// 005d8399  85ff                 test edi, edi
// 005d839b  7431                 je 0x5d83ce
// 005d839d  8937                 mov dword ptr [edi], esi
// 005d839f  8b33                 mov esi, dword ptr [ebx]
// 005d83a1  85f6                 test esi, esi
// 005d83a3  740c                 je 0x5d83b1
// 005d83a5  8d4e08               lea ecx, [esi + 8]
// 005d83a8  ba01000000           mov edx, 1
// 005d83ad  f00fc111             lock xadd dword ptr [ecx], edx
// 005d83b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005d83b4  85c9                 test ecx, ecx
// 005d83b6  7413                 je 0x5d83cb
// 005d83b8  8d4108               lea eax, [ecx + 8]
// 005d83bb  83caff               or edx, 0xffffffff
// 005d83be  f00fc110             lock xadd dword ptr [eax], edx
// 005d83c2  7507                 jne 0x5d83cb
// 005d83c4  8b01                 mov eax, dword ptr [ecx]
// 005d83c6  8b5008               mov edx, dword ptr [eax + 8]
// 005d83c9  ffd2                 call edx
// 005d83cb  897704               mov dword ptr [edi + 4], esi
// 005d83ce  5f                   pop edi
// 005d83cf  5e                   pop esi
// 005d83d0  8bc5                 mov eax, ebp
// 005d83d2  5d                   pop ebp
// 005d83d3  5b                   pop ebx
// 005d83d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005d83d8  64890d00000000       mov dword ptr fs:[0], ecx
// 005d83df  83c410               add esp, 0x10
// 005d83e2  c20800               ret 8
// 005d83e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d83e9  5e                   pop esi
// 005d83ea  8bc5                 mov eax, ebp
// 005d83ec  5d                   pop ebp
// 005d83ed  5b                   pop ebx
// 005d83ee  64890d00000000       mov dword ptr fs:[0], ecx
// 005d83f5  83c410               add esp, 0x10
// 005d83f8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
