// roc 2008-06 0048b5e0  unit: boost::any::placeholder  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b5e0
//
// 0048b5e0  6aff                 push -1
// 0048b5e2  68abfd7b00           push 0x7bfdab
// 0048b5e7  64a100000000         mov eax, dword ptr fs:[0]
// 0048b5ed  50                   push eax
// 0048b5ee  64892500000000       mov dword ptr fs:[0], esp
// 0048b5f5  51                   push ecx
// 0048b5f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048b5fa  53                   push ebx
// 0048b5fb  55                   push ebp
// 0048b5fc  8be9                 mov ebp, ecx
// 0048b5fe  56                   push esi
// 0048b5ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048b603  50                   push eax
// 0048b604  8d5d04               lea ebx, [ebp + 4]
// 0048b607  56                   push esi
// 0048b608  8bcb                 mov ecx, ebx
// 0048b60a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048b60e  897500               mov dword ptr [ebp], esi
// 0048b611  e8aaf6ffff           call 0x48acc0
// 0048b616  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048b61e  85f6                 test esi, esi
// 0048b620  7453                 je 0x48b675
// 0048b622  57                   push edi
// 0048b623  8dbee4000000         lea edi, [esi + 0xe4]
// 0048b629  85ff                 test edi, edi
// 0048b62b  7431                 je 0x48b65e
// 0048b62d  8937                 mov dword ptr [edi], esi
// 0048b62f  8b33                 mov esi, dword ptr [ebx]
// 0048b631  85f6                 test esi, esi
// 0048b633  740c                 je 0x48b641
// 0048b635  8d4e08               lea ecx, [esi + 8]
// 0048b638  ba01000000           mov edx, 1
// 0048b63d  f00fc111             lock xadd dword ptr [ecx], edx
// 0048b641  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048b644  85c9                 test ecx, ecx
// 0048b646  7413                 je 0x48b65b
// 0048b648  8d4108               lea eax, [ecx + 8]
// 0048b64b  83caff               or edx, 0xffffffff
// 0048b64e  f00fc110             lock xadd dword ptr [eax], edx
// 0048b652  7507                 jne 0x48b65b
// 0048b654  8b01                 mov eax, dword ptr [ecx]
// 0048b656  8b5008               mov edx, dword ptr [eax + 8]
// 0048b659  ffd2                 call edx
// 0048b65b  897704               mov dword ptr [edi + 4], esi
// 0048b65e  5f                   pop edi
// 0048b65f  5e                   pop esi
// 0048b660  8bc5                 mov eax, ebp
// 0048b662  5d                   pop ebp
// 0048b663  5b                   pop ebx
// 0048b664  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048b668  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b66f  83c410               add esp, 0x10
// 0048b672  c20800               ret 8
// 0048b675  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048b679  5e                   pop esi
// 0048b67a  8bc5                 mov eax, ebp
// 0048b67c  5d                   pop ebp
// 0048b67d  5b                   pop ebx
// 0048b67e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b685  83c410               add esp, 0x10
// 0048b688  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
