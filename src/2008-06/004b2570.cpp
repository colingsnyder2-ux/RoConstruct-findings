// roc 2008-06 004b2570  unit: RBX::VSnap::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b2570
//
// 004b2570  6aff                 push -1
// 004b2572  68abfd7b00           push 0x7bfdab
// 004b2577  64a100000000         mov eax, dword ptr fs:[0]
// 004b257d  50                   push eax
// 004b257e  64892500000000       mov dword ptr fs:[0], esp
// 004b2585  51                   push ecx
// 004b2586  8b442418             mov eax, dword ptr [esp + 0x18]
// 004b258a  53                   push ebx
// 004b258b  55                   push ebp
// 004b258c  8be9                 mov ebp, ecx
// 004b258e  56                   push esi
// 004b258f  8b742420             mov esi, dword ptr [esp + 0x20]
// 004b2593  50                   push eax
// 004b2594  8d5d04               lea ebx, [ebp + 4]
// 004b2597  56                   push esi
// 004b2598  8bcb                 mov ecx, ebx
// 004b259a  896c2414             mov dword ptr [esp + 0x14], ebp
// 004b259e  897500               mov dword ptr [ebp], esi
// 004b25a1  e83affffff           call 0x4b24e0
// 004b25a6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004b25ae  85f6                 test esi, esi
// 004b25b0  7453                 je 0x4b2605
// 004b25b2  57                   push edi
// 004b25b3  8dbee4000000         lea edi, [esi + 0xe4]
// 004b25b9  85ff                 test edi, edi
// 004b25bb  7431                 je 0x4b25ee
// 004b25bd  8937                 mov dword ptr [edi], esi
// 004b25bf  8b33                 mov esi, dword ptr [ebx]
// 004b25c1  85f6                 test esi, esi
// 004b25c3  740c                 je 0x4b25d1
// 004b25c5  8d4e08               lea ecx, [esi + 8]
// 004b25c8  ba01000000           mov edx, 1
// 004b25cd  f00fc111             lock xadd dword ptr [ecx], edx
// 004b25d1  8b4f04               mov ecx, dword ptr [edi + 4]
// 004b25d4  85c9                 test ecx, ecx
// 004b25d6  7413                 je 0x4b25eb
// 004b25d8  8d4108               lea eax, [ecx + 8]
// 004b25db  83caff               or edx, 0xffffffff
// 004b25de  f00fc110             lock xadd dword ptr [eax], edx
// 004b25e2  7507                 jne 0x4b25eb
// 004b25e4  8b01                 mov eax, dword ptr [ecx]
// 004b25e6  8b5008               mov edx, dword ptr [eax + 8]
// 004b25e9  ffd2                 call edx
// 004b25eb  897704               mov dword ptr [edi + 4], esi
// 004b25ee  5f                   pop edi
// 004b25ef  5e                   pop esi
// 004b25f0  8bc5                 mov eax, ebp
// 004b25f2  5d                   pop ebp
// 004b25f3  5b                   pop ebx
// 004b25f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004b25f8  64890d00000000       mov dword ptr fs:[0], ecx
// 004b25ff  83c410               add esp, 0x10
// 004b2602  c20800               ret 8
// 004b2605  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b2609  5e                   pop esi
// 004b260a  8bc5                 mov eax, ebp
// 004b260c  5d                   pop ebp
// 004b260d  5b                   pop ebx
// 004b260e  64890d00000000       mov dword ptr fs:[0], ecx
// 004b2615  83c410               add esp, 0x10
// 004b2618  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
