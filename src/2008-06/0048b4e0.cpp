// roc 2008-06 0048b4e0  unit: boost::any::placeholder  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b4e0
//
// 0048b4e0  6aff                 push -1
// 0048b4e2  68abfd7b00           push 0x7bfdab
// 0048b4e7  64a100000000         mov eax, dword ptr fs:[0]
// 0048b4ed  50                   push eax
// 0048b4ee  64892500000000       mov dword ptr fs:[0], esp
// 0048b4f5  51                   push ecx
// 0048b4f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048b4fa  53                   push ebx
// 0048b4fb  55                   push ebp
// 0048b4fc  8be9                 mov ebp, ecx
// 0048b4fe  56                   push esi
// 0048b4ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048b503  50                   push eax
// 0048b504  8d5d04               lea ebx, [ebp + 4]
// 0048b507  56                   push esi
// 0048b508  8bcb                 mov ecx, ebx
// 0048b50a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048b50e  897500               mov dword ptr [ebp], esi
// 0048b511  e81af7ffff           call 0x48ac30
// 0048b516  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048b51e  85f6                 test esi, esi
// 0048b520  7453                 je 0x48b575
// 0048b522  57                   push edi
// 0048b523  8dbee4000000         lea edi, [esi + 0xe4]
// 0048b529  85ff                 test edi, edi
// 0048b52b  7431                 je 0x48b55e
// 0048b52d  8937                 mov dword ptr [edi], esi
// 0048b52f  8b33                 mov esi, dword ptr [ebx]
// 0048b531  85f6                 test esi, esi
// 0048b533  740c                 je 0x48b541
// 0048b535  8d4e08               lea ecx, [esi + 8]
// 0048b538  ba01000000           mov edx, 1
// 0048b53d  f00fc111             lock xadd dword ptr [ecx], edx
// 0048b541  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048b544  85c9                 test ecx, ecx
// 0048b546  7413                 je 0x48b55b
// 0048b548  8d4108               lea eax, [ecx + 8]
// 0048b54b  83caff               or edx, 0xffffffff
// 0048b54e  f00fc110             lock xadd dword ptr [eax], edx
// 0048b552  7507                 jne 0x48b55b
// 0048b554  8b01                 mov eax, dword ptr [ecx]
// 0048b556  8b5008               mov edx, dword ptr [eax + 8]
// 0048b559  ffd2                 call edx
// 0048b55b  897704               mov dword ptr [edi + 4], esi
// 0048b55e  5f                   pop edi
// 0048b55f  5e                   pop esi
// 0048b560  8bc5                 mov eax, ebp
// 0048b562  5d                   pop ebp
// 0048b563  5b                   pop ebx
// 0048b564  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048b568  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b56f  83c410               add esp, 0x10
// 0048b572  c20800               ret 8
// 0048b575  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048b579  5e                   pop esi
// 0048b57a  8bc5                 mov eax, ebp
// 0048b57c  5d                   pop ebp
// 0048b57d  5b                   pop ebx
// 0048b57e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048b585  83c410               add esp, 0x10
// 0048b588  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
