// roc 2008-06 005c2310  unit: RBX::VBodyPosition::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2310
//
// 005c2310  6aff                 push -1
// 005c2312  68abfd7b00           push 0x7bfdab
// 005c2317  64a100000000         mov eax, dword ptr fs:[0]
// 005c231d  50                   push eax
// 005c231e  64892500000000       mov dword ptr fs:[0], esp
// 005c2325  51                   push ecx
// 005c2326  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c232a  53                   push ebx
// 005c232b  55                   push ebp
// 005c232c  8be9                 mov ebp, ecx
// 005c232e  56                   push esi
// 005c232f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c2333  50                   push eax
// 005c2334  8d5d04               lea ebx, [ebp + 4]
// 005c2337  56                   push esi
// 005c2338  8bcb                 mov ecx, ebx
// 005c233a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c233e  897500               mov dword ptr [ebp], esi
// 005c2341  e83affffff           call 0x5c2280
// 005c2346  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c234e  85f6                 test esi, esi
// 005c2350  7453                 je 0x5c23a5
// 005c2352  57                   push edi
// 005c2353  8dbee4000000         lea edi, [esi + 0xe4]
// 005c2359  85ff                 test edi, edi
// 005c235b  7431                 je 0x5c238e
// 005c235d  8937                 mov dword ptr [edi], esi
// 005c235f  8b33                 mov esi, dword ptr [ebx]
// 005c2361  85f6                 test esi, esi
// 005c2363  740c                 je 0x5c2371
// 005c2365  8d4e08               lea ecx, [esi + 8]
// 005c2368  ba01000000           mov edx, 1
// 005c236d  f00fc111             lock xadd dword ptr [ecx], edx
// 005c2371  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c2374  85c9                 test ecx, ecx
// 005c2376  7413                 je 0x5c238b
// 005c2378  8d4108               lea eax, [ecx + 8]
// 005c237b  83caff               or edx, 0xffffffff
// 005c237e  f00fc110             lock xadd dword ptr [eax], edx
// 005c2382  7507                 jne 0x5c238b
// 005c2384  8b01                 mov eax, dword ptr [ecx]
// 005c2386  8b5008               mov edx, dword ptr [eax + 8]
// 005c2389  ffd2                 call edx
// 005c238b  897704               mov dword ptr [edi + 4], esi
// 005c238e  5f                   pop edi
// 005c238f  5e                   pop esi
// 005c2390  8bc5                 mov eax, ebp
// 005c2392  5d                   pop ebp
// 005c2393  5b                   pop ebx
// 005c2394  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c2398  64890d00000000       mov dword ptr fs:[0], ecx
// 005c239f  83c410               add esp, 0x10
// 005c23a2  c20800               ret 8
// 005c23a5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c23a9  5e                   pop esi
// 005c23aa  8bc5                 mov eax, ebp
// 005c23ac  5d                   pop ebp
// 005c23ad  5b                   pop ebx
// 005c23ae  64890d00000000       mov dword ptr fs:[0], ecx
// 005c23b5  83c410               add esp, 0x10
// 005c23b8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
