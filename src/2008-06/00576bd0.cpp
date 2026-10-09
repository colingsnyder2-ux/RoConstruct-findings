// roc 2008-06 00576bd0  unit: RBX::DataModel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00576bd0
//
// 00576bd0  6aff                 push -1
// 00576bd2  68abfd7b00           push 0x7bfdab
// 00576bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00576bdd  50                   push eax
// 00576bde  64892500000000       mov dword ptr fs:[0], esp
// 00576be5  51                   push ecx
// 00576be6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00576bea  53                   push ebx
// 00576beb  55                   push ebp
// 00576bec  8be9                 mov ebp, ecx
// 00576bee  56                   push esi
// 00576bef  8b742420             mov esi, dword ptr [esp + 0x20]
// 00576bf3  50                   push eax
// 00576bf4  8d5d04               lea ebx, [ebp + 4]
// 00576bf7  56                   push esi
// 00576bf8  8bcb                 mov ecx, ebx
// 00576bfa  896c2414             mov dword ptr [esp + 0x14], ebp
// 00576bfe  897500               mov dword ptr [ebp], esi
// 00576c01  e84afbffff           call 0x576750
// 00576c06  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00576c0e  85f6                 test esi, esi
// 00576c10  7453                 je 0x576c65
// 00576c12  57                   push edi
// 00576c13  8dbee4000000         lea edi, [esi + 0xe4]
// 00576c19  85ff                 test edi, edi
// 00576c1b  7431                 je 0x576c4e
// 00576c1d  8937                 mov dword ptr [edi], esi
// 00576c1f  8b33                 mov esi, dword ptr [ebx]
// 00576c21  85f6                 test esi, esi
// 00576c23  740c                 je 0x576c31
// 00576c25  8d4e08               lea ecx, [esi + 8]
// 00576c28  ba01000000           mov edx, 1
// 00576c2d  f00fc111             lock xadd dword ptr [ecx], edx
// 00576c31  8b4f04               mov ecx, dword ptr [edi + 4]
// 00576c34  85c9                 test ecx, ecx
// 00576c36  7413                 je 0x576c4b
// 00576c38  8d4108               lea eax, [ecx + 8]
// 00576c3b  83caff               or edx, 0xffffffff
// 00576c3e  f00fc110             lock xadd dword ptr [eax], edx
// 00576c42  7507                 jne 0x576c4b
// 00576c44  8b01                 mov eax, dword ptr [ecx]
// 00576c46  8b5008               mov edx, dword ptr [eax + 8]
// 00576c49  ffd2                 call edx
// 00576c4b  897704               mov dword ptr [edi + 4], esi
// 00576c4e  5f                   pop edi
// 00576c4f  5e                   pop esi
// 00576c50  8bc5                 mov eax, ebp
// 00576c52  5d                   pop ebp
// 00576c53  5b                   pop ebx
// 00576c54  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00576c58  64890d00000000       mov dword ptr fs:[0], ecx
// 00576c5f  83c410               add esp, 0x10
// 00576c62  c20800               ret 8
// 00576c65  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00576c69  5e                   pop esi
// 00576c6a  8bc5                 mov eax, ebp
// 00576c6c  5d                   pop ebp
// 00576c6d  5b                   pop ebx
// 00576c6e  64890d00000000       mov dword ptr fs:[0], ecx
// 00576c75  83c410               add esp, 0x10
// 00576c78  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
