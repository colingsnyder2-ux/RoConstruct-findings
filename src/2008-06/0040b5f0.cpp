// roc 2008-06 0040b5f0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b5f0
//
// 0040b5f0  6aff                 push -1
// 0040b5f2  68abfd7b00           push 0x7bfdab
// 0040b5f7  64a100000000         mov eax, dword ptr fs:[0]
// 0040b5fd  50                   push eax
// 0040b5fe  64892500000000       mov dword ptr fs:[0], esp
// 0040b605  51                   push ecx
// 0040b606  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040b60a  53                   push ebx
// 0040b60b  55                   push ebp
// 0040b60c  8be9                 mov ebp, ecx
// 0040b60e  56                   push esi
// 0040b60f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040b613  50                   push eax
// 0040b614  8d5d04               lea ebx, [ebp + 4]
// 0040b617  56                   push esi
// 0040b618  8bcb                 mov ecx, ebx
// 0040b61a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0040b61e  897500               mov dword ptr [ebp], esi
// 0040b621  e83affffff           call 0x40b560
// 0040b626  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0040b62e  85f6                 test esi, esi
// 0040b630  7453                 je 0x40b685
// 0040b632  57                   push edi
// 0040b633  8dbee4000000         lea edi, [esi + 0xe4]
// 0040b639  85ff                 test edi, edi
// 0040b63b  7431                 je 0x40b66e
// 0040b63d  8937                 mov dword ptr [edi], esi
// 0040b63f  8b33                 mov esi, dword ptr [ebx]
// 0040b641  85f6                 test esi, esi
// 0040b643  740c                 je 0x40b651
// 0040b645  8d4e08               lea ecx, [esi + 8]
// 0040b648  ba01000000           mov edx, 1
// 0040b64d  f00fc111             lock xadd dword ptr [ecx], edx
// 0040b651  8b4f04               mov ecx, dword ptr [edi + 4]
// 0040b654  85c9                 test ecx, ecx
// 0040b656  7413                 je 0x40b66b
// 0040b658  8d4108               lea eax, [ecx + 8]
// 0040b65b  83caff               or edx, 0xffffffff
// 0040b65e  f00fc110             lock xadd dword ptr [eax], edx
// 0040b662  7507                 jne 0x40b66b
// 0040b664  8b01                 mov eax, dword ptr [ecx]
// 0040b666  8b5008               mov edx, dword ptr [eax + 8]
// 0040b669  ffd2                 call edx
// 0040b66b  897704               mov dword ptr [edi + 4], esi
// 0040b66e  5f                   pop edi
// 0040b66f  5e                   pop esi
// 0040b670  8bc5                 mov eax, ebp
// 0040b672  5d                   pop ebp
// 0040b673  5b                   pop ebx
// 0040b674  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040b678  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b67f  83c410               add esp, 0x10
// 0040b682  c20800               ret 8
// 0040b685  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040b689  5e                   pop esi
// 0040b68a  8bc5                 mov eax, ebp
// 0040b68c  5d                   pop ebp
// 0040b68d  5b                   pop ebx
// 0040b68e  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b695  83c410               add esp, 0x10
// 0040b698  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
