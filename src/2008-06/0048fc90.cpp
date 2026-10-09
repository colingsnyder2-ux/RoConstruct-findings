// roc 2008-06 0048fc90  unit: RBX::VPants::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048fc90
//
// 0048fc90  6aff                 push -1
// 0048fc92  68abfd7b00           push 0x7bfdab
// 0048fc97  64a100000000         mov eax, dword ptr fs:[0]
// 0048fc9d  50                   push eax
// 0048fc9e  64892500000000       mov dword ptr fs:[0], esp
// 0048fca5  51                   push ecx
// 0048fca6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048fcaa  53                   push ebx
// 0048fcab  55                   push ebp
// 0048fcac  8be9                 mov ebp, ecx
// 0048fcae  56                   push esi
// 0048fcaf  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048fcb3  50                   push eax
// 0048fcb4  8d5d04               lea ebx, [ebp + 4]
// 0048fcb7  56                   push esi
// 0048fcb8  8bcb                 mov ecx, ebx
// 0048fcba  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048fcbe  897500               mov dword ptr [ebp], esi
// 0048fcc1  e83affffff           call 0x48fc00
// 0048fcc6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048fcce  85f6                 test esi, esi
// 0048fcd0  7453                 je 0x48fd25
// 0048fcd2  57                   push edi
// 0048fcd3  8dbee4000000         lea edi, [esi + 0xe4]
// 0048fcd9  85ff                 test edi, edi
// 0048fcdb  7431                 je 0x48fd0e
// 0048fcdd  8937                 mov dword ptr [edi], esi
// 0048fcdf  8b33                 mov esi, dword ptr [ebx]
// 0048fce1  85f6                 test esi, esi
// 0048fce3  740c                 je 0x48fcf1
// 0048fce5  8d4e08               lea ecx, [esi + 8]
// 0048fce8  ba01000000           mov edx, 1
// 0048fced  f00fc111             lock xadd dword ptr [ecx], edx
// 0048fcf1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048fcf4  85c9                 test ecx, ecx
// 0048fcf6  7413                 je 0x48fd0b
// 0048fcf8  8d4108               lea eax, [ecx + 8]
// 0048fcfb  83caff               or edx, 0xffffffff
// 0048fcfe  f00fc110             lock xadd dword ptr [eax], edx
// 0048fd02  7507                 jne 0x48fd0b
// 0048fd04  8b01                 mov eax, dword ptr [ecx]
// 0048fd06  8b5008               mov edx, dword ptr [eax + 8]
// 0048fd09  ffd2                 call edx
// 0048fd0b  897704               mov dword ptr [edi + 4], esi
// 0048fd0e  5f                   pop edi
// 0048fd0f  5e                   pop esi
// 0048fd10  8bc5                 mov eax, ebp
// 0048fd12  5d                   pop ebp
// 0048fd13  5b                   pop ebx
// 0048fd14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048fd18  64890d00000000       mov dword ptr fs:[0], ecx
// 0048fd1f  83c410               add esp, 0x10
// 0048fd22  c20800               ret 8
// 0048fd25  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048fd29  5e                   pop esi
// 0048fd2a  8bc5                 mov eax, ebp
// 0048fd2c  5d                   pop ebp
// 0048fd2d  5b                   pop ebx
// 0048fd2e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048fd35  83c410               add esp, 0x10
// 0048fd38  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
