// roc 2008-06 004b2300  unit: RBX::VLighting::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2300
//
// 004b2300  6aff                 push -1
// 004b2302  68abfd7b00           push 0x7bfdab
// 004b2307  64a100000000         mov eax, dword ptr fs:[0]
// 004b230d  50                   push eax
// 004b230e  64892500000000       mov dword ptr fs:[0], esp
// 004b2315  51                   push ecx
// 004b2316  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b231a  53                   push ebx
// 004b231b  55                   push ebp
// 004b231c  8be9                 mov ebp, ecx
// 004b231e  56                   push esi
// 004b231f  8b742420             mov esi, dword ptr [esp + 0x20]
// 004b2323  50                   push eax
// 004b2324  8d5d04               lea ebx, [ebp + 4]
// 004b2327  56                   push esi
// 004b2328  8bcb                 mov ecx, ebx
// 004b232a  896c2414             mov dword ptr [esp + 0x14], ebp
// 004b232e  897500               mov dword ptr [ebp], esi
// 004b2331  e83affffff           call 0x4b2270
// 004b2336  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004b233e  85f6                 test esi, esi
// 004b2340  7453                 je 0x4b2395
// 004b2342  57                   push edi
// 004b2343  8dbee4000000         lea edi, [esi + 0xe4]
// 004b2349  85ff                 test edi, edi
// 004b234b  7431                 je 0x4b237e
// 004b234d  8937                 mov dword ptr [edi], esi
// 004b234f  8b33                 mov esi, dword ptr [ebx]
// 004b2351  85f6                 test esi, esi
// 004b2353  740c                 je 0x4b2361
// 004b2355  8d4e08               lea ecx, [esi + 8]
// 004b2358  ba01000000           mov edx, 1
// 004b235d  f00fc111             lock xadd dword ptr [ecx], edx
// 004b2361  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b2364  85c9                 test ecx, ecx
// 004b2366  7413                 je 0x4b237b
// 004b2368  8d4108               lea eax, [ecx + 8]
// 004b236b  83caff               or edx, 0xffffffff
// 004b236e  f00fc110             lock xadd dword ptr [eax], edx
// 004b2372  7507                 jne 0x4b237b
// 004b2374  8b01                 mov eax, dword ptr [ecx]
// 004b2376  8b5008               mov edx, dword ptr [eax + 8]
// 004b2379  ffd2                 call edx
// 004b237b  897704               mov dword ptr [edi + 4], esi
// 004b237e  5f                   pop edi
// 004b237f  5e                   pop esi
// 004b2380  8bc5                 mov eax, ebp
// 004b2382  5d                   pop ebp
// 004b2383  5b                   pop ebx
// 004b2384  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b2388  64890d00000000       mov dword ptr fs:[0], ecx
// 004b238f  83c410               add esp, 0x10
// 004b2392  c20800               ret 8
// 004b2395  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b2399  5e                   pop esi
// 004b239a  8bc5                 mov eax, ebp
// 004b239c  5d                   pop ebp
// 004b239d  5b                   pop ebx
// 004b239e  64890d00000000       mov dword ptr fs:[0], ecx
// 004b23a5  83c410               add esp, 0x10
// 004b23a8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
