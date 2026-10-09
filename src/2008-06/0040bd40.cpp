// roc 2008-06 0040bd40  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040bd40
//
// 0040bd40  6aff                 push -1
// 0040bd42  68abfd7b00           push 0x7bfdab
// 0040bd47  64a100000000         mov eax, dword ptr fs:[0]
// 0040bd4d  50                   push eax
// 0040bd4e  64892500000000       mov dword ptr fs:[0], esp
// 0040bd55  51                   push ecx
// 0040bd56  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040bd5a  53                   push ebx
// 0040bd5b  55                   push ebp
// 0040bd5c  8be9                 mov ebp, ecx
// 0040bd5e  56                   push esi
// 0040bd5f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040bd63  50                   push eax
// 0040bd64  8d5d04               lea ebx, [ebp + 4]
// 0040bd67  56                   push esi
// 0040bd68  8bcb                 mov ecx, ebx
// 0040bd6a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0040bd6e  897500               mov dword ptr [ebp], esi
// 0040bd71  e83affffff           call 0x40bcb0
// 0040bd76  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0040bd7e  85f6                 test esi, esi
// 0040bd80  7453                 je 0x40bdd5
// 0040bd82  57                   push edi
// 0040bd83  8dbee4000000         lea edi, [esi + 0xe4]
// 0040bd89  85ff                 test edi, edi
// 0040bd8b  7431                 je 0x40bdbe
// 0040bd8d  8937                 mov dword ptr [edi], esi
// 0040bd8f  8b33                 mov esi, dword ptr [ebx]
// 0040bd91  85f6                 test esi, esi
// 0040bd93  740c                 je 0x40bda1
// 0040bd95  8d4e08               lea ecx, [esi + 8]
// 0040bd98  ba01000000           mov edx, 1
// 0040bd9d  f00fc111             lock xadd dword ptr [ecx], edx
// 0040bda1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0040bda4  85c9                 test ecx, ecx
// 0040bda6  7413                 je 0x40bdbb
// 0040bda8  8d4108               lea eax, [ecx + 8]
// 0040bdab  83caff               or edx, 0xffffffff
// 0040bdae  f00fc110             lock xadd dword ptr [eax], edx
// 0040bdb2  7507                 jne 0x40bdbb
// 0040bdb4  8b01                 mov eax, dword ptr [ecx]
// 0040bdb6  8b5008               mov edx, dword ptr [eax + 8]
// 0040bdb9  ffd2                 call edx
// 0040bdbb  897704               mov dword ptr [edi + 4], esi
// 0040bdbe  5f                   pop edi
// 0040bdbf  5e                   pop esi
// 0040bdc0  8bc5                 mov eax, ebp
// 0040bdc2  5d                   pop ebp
// 0040bdc3  5b                   pop ebx
// 0040bdc4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040bdc8  64890d00000000       mov dword ptr fs:[0], ecx
// 0040bdcf  83c410               add esp, 0x10
// 0040bdd2  c20800               ret 8
// 0040bdd5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040bdd9  5e                   pop esi
// 0040bdda  8bc5                 mov eax, ebp
// 0040bddc  5d                   pop ebp
// 0040bddd  5b                   pop ebx
// 0040bdde  64890d00000000       mov dword ptr fs:[0], ecx
// 0040bde5  83c410               add esp, 0x10
// 0040bde8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
