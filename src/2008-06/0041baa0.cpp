// roc 2008-06 0041baa0  unit: VDHTMLWindowService::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041baa0
//
// 0041baa0  6aff                 push -1
// 0041baa2  68abfd7b00           push 0x7bfdab
// 0041baa7  64a100000000         mov eax, dword ptr fs:[0]
// 0041baad  50                   push eax
// 0041baae  64892500000000       mov dword ptr fs:[0], esp
// 0041bab5  51                   push ecx
// 0041bab6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0041baba  53                   push ebx
// 0041babb  55                   push ebp
// 0041babc  8be9                 mov ebp, ecx
// 0041babe  56                   push esi
// 0041babf  8b742420             mov esi, dword ptr [esp + 0x20]
// 0041bac3  50                   push eax
// 0041bac4  8d5d04               lea ebx, [ebp + 4]
// 0041bac7  56                   push esi
// 0041bac8  8bcb                 mov ecx, ebx
// 0041baca  896c2414             mov dword ptr [esp + 0x14], ebp
// 0041bace  897500               mov dword ptr [ebp], esi
// 0041bad1  e82affffff           call 0x41ba00
// 0041bad6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041bade  85f6                 test esi, esi
// 0041bae0  7453                 je 0x41bb35
// 0041bae2  57                   push edi
// 0041bae3  8dbee4000000         lea edi, [esi + 0xe4]
// 0041bae9  85ff                 test edi, edi
// 0041baeb  7431                 je 0x41bb1e
// 0041baed  8937                 mov dword ptr [edi], esi
// 0041baef  8b33                 mov esi, dword ptr [ebx]
// 0041baf1  85f6                 test esi, esi
// 0041baf3  740c                 je 0x41bb01
// 0041baf5  8d4e08               lea ecx, [esi + 8]
// 0041baf8  ba01000000           mov edx, 1
// 0041bafd  f00fc111             lock xadd dword ptr [ecx], edx
// 0041bb01  8b4f04               mov ecx, dword ptr [edi + 4]
// 0041bb04  85c9                 test ecx, ecx
// 0041bb06  7413                 je 0x41bb1b
// 0041bb08  8d4108               lea eax, [ecx + 8]
// 0041bb0b  83caff               or edx, 0xffffffff
// 0041bb0e  f00fc110             lock xadd dword ptr [eax], edx
// 0041bb12  7507                 jne 0x41bb1b
// 0041bb14  8b01                 mov eax, dword ptr [ecx]
// 0041bb16  8b5008               mov edx, dword ptr [eax + 8]
// 0041bb19  ffd2                 call edx
// 0041bb1b  897704               mov dword ptr [edi + 4], esi
// 0041bb1e  5f                   pop edi
// 0041bb1f  5e                   pop esi
// 0041bb20  8bc5                 mov eax, ebp
// 0041bb22  5d                   pop ebp
// 0041bb23  5b                   pop ebx
// 0041bb24  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0041bb28  64890d00000000       mov dword ptr fs:[0], ecx
// 0041bb2f  83c410               add esp, 0x10
// 0041bb32  c20800               ret 8
// 0041bb35  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041bb39  5e                   pop esi
// 0041bb3a  8bc5                 mov eax, ebp
// 0041bb3c  5d                   pop ebp
// 0041bb3d  5b                   pop ebx
// 0041bb3e  64890d00000000       mov dword ptr fs:[0], ecx
// 0041bb45  83c410               add esp, 0x10
// 0041bb48  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
