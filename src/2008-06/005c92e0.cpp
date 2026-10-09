// roc 2008-06 005c92e0  unit: RBX::LaserTool  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c92e0
//
// 005c92e0  6aff                 push -1
// 005c92e2  68abfd7b00           push 0x7bfdab
// 005c92e7  64a100000000         mov eax, dword ptr fs:[0]
// 005c92ed  50                   push eax
// 005c92ee  64892500000000       mov dword ptr fs:[0], esp
// 005c92f5  51                   push ecx
// 005c92f6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c92fa  53                   push ebx
// 005c92fb  55                   push ebp
// 005c92fc  8be9                 mov ebp, ecx
// 005c92fe  56                   push esi
// 005c92ff  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c9303  50                   push eax
// 005c9304  8d5d04               lea ebx, [ebp + 4]
// 005c9307  56                   push esi
// 005c9308  8bcb                 mov ecx, ebx
// 005c930a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c930e  897500               mov dword ptr [ebp], esi
// 005c9311  e89afeffff           call 0x5c91b0
// 005c9316  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c931e  85f6                 test esi, esi
// 005c9320  7453                 je 0x5c9375
// 005c9322  57                   push edi
// 005c9323  8dbee4000000         lea edi, [esi + 0xe4]
// 005c9329  85ff                 test edi, edi
// 005c932b  7431                 je 0x5c935e
// 005c932d  8937                 mov dword ptr [edi], esi
// 005c932f  8b33                 mov esi, dword ptr [ebx]
// 005c9331  85f6                 test esi, esi
// 005c9333  740c                 je 0x5c9341
// 005c9335  8d4e08               lea ecx, [esi + 8]
// 005c9338  ba01000000           mov edx, 1
// 005c933d  f00fc111             lock xadd dword ptr [ecx], edx
// 005c9341  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c9344  85c9                 test ecx, ecx
// 005c9346  7413                 je 0x5c935b
// 005c9348  8d4108               lea eax, [ecx + 8]
// 005c934b  83caff               or edx, 0xffffffff
// 005c934e  f00fc110             lock xadd dword ptr [eax], edx
// 005c9352  7507                 jne 0x5c935b
// 005c9354  8b01                 mov eax, dword ptr [ecx]
// 005c9356  8b5008               mov edx, dword ptr [eax + 8]
// 005c9359  ffd2                 call edx
// 005c935b  897704               mov dword ptr [edi + 4], esi
// 005c935e  5f                   pop edi
// 005c935f  5e                   pop esi
// 005c9360  8bc5                 mov eax, ebp
// 005c9362  5d                   pop ebp
// 005c9363  5b                   pop ebx
// 005c9364  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c9368  64890d00000000       mov dword ptr fs:[0], ecx
// 005c936f  83c410               add esp, 0x10
// 005c9372  c20800               ret 8
// 005c9375  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c9379  5e                   pop esi
// 005c937a  8bc5                 mov eax, ebp
// 005c937c  5d                   pop ebp
// 005c937d  5b                   pop ebx
// 005c937e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9385  83c410               add esp, 0x10
// 005c9388  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
