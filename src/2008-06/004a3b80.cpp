// roc 2008-06 004a3b80  unit: RBX::VHint::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3b80
//
// 004a3b80  6aff                 push -1
// 004a3b82  68abfd7b00           push 0x7bfdab
// 004a3b87  64a100000000         mov eax, dword ptr fs:[0]
// 004a3b8d  50                   push eax
// 004a3b8e  64892500000000       mov dword ptr fs:[0], esp
// 004a3b95  51                   push ecx
// 004a3b96  8b442418             mov eax, dword ptr [esp + 0x18]
// 004a3b9a  53                   push ebx
// 004a3b9b  55                   push ebp
// 004a3b9c  8be9                 mov ebp, ecx
// 004a3b9e  56                   push esi
// 004a3b9f  8b742420             mov esi, dword ptr [esp + 0x20]
// 004a3ba3  50                   push eax
// 004a3ba4  8d5d04               lea ebx, [ebp + 4]
// 004a3ba7  56                   push esi
// 004a3ba8  8bcb                 mov ecx, ebx
// 004a3baa  896c2414             mov dword ptr [esp + 0x14], ebp
// 004a3bae  897500               mov dword ptr [ebp], esi
// 004a3bb1  e84afeffff           call 0x4a3a00
// 004a3bb6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004a3bbe  85f6                 test esi, esi
// 004a3bc0  7453                 je 0x4a3c15
// 004a3bc2  57                   push edi
// 004a3bc3  8dbee4000000         lea edi, [esi + 0xe4]
// 004a3bc9  85ff                 test edi, edi
// 004a3bcb  7431                 je 0x4a3bfe
// 004a3bcd  8937                 mov dword ptr [edi], esi
// 004a3bcf  8b33                 mov esi, dword ptr [ebx]
// 004a3bd1  85f6                 test esi, esi
// 004a3bd3  740c                 je 0x4a3be1
// 004a3bd5  8d4e08               lea ecx, [esi + 8]
// 004a3bd8  ba01000000           mov edx, 1
// 004a3bdd  f00fc111             lock xadd dword ptr [ecx], edx
// 004a3be1  8b4f04               mov ecx, dword ptr [edi + 4]
// 004a3be4  85c9                 test ecx, ecx
// 004a3be6  7413                 je 0x4a3bfb
// 004a3be8  8d4108               lea eax, [ecx + 8]
// 004a3beb  83caff               or edx, 0xffffffff
// 004a3bee  f00fc110             lock xadd dword ptr [eax], edx
// 004a3bf2  7507                 jne 0x4a3bfb
// 004a3bf4  8b01                 mov eax, dword ptr [ecx]
// 004a3bf6  8b5008               mov edx, dword ptr [eax + 8]
// 004a3bf9  ffd2                 call edx
// 004a3bfb  897704               mov dword ptr [edi + 4], esi
// 004a3bfe  5f                   pop edi
// 004a3bff  5e                   pop esi
// 004a3c00  8bc5                 mov eax, ebp
// 004a3c02  5d                   pop ebp
// 004a3c03  5b                   pop ebx
// 004a3c04  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a3c08  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3c0f  83c410               add esp, 0x10
// 004a3c12  c20800               ret 8
// 004a3c15  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a3c19  5e                   pop esi
// 004a3c1a  8bc5                 mov eax, ebp
// 004a3c1c  5d                   pop ebp
// 004a3c1d  5b                   pop ebx
// 004a3c1e  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3c25  83c410               add esp, 0x10
// 004a3c28  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
