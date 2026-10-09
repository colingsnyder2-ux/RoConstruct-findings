// roc 2008-06 005c2580  unit: RBX::VBodyVelocity::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c2580
//
// 005c2580  6aff                 push -1
// 005c2582  68abfd7b00           push 0x7bfdab
// 005c2587  64a100000000         mov eax, dword ptr fs:[0]
// 005c258d  50                   push eax
// 005c258e  64892500000000       mov dword ptr fs:[0], esp
// 005c2595  51                   push ecx
// 005c2596  8b442418             mov eax, dword ptr [esp + 0x18]
// 005c259a  53                   push ebx
// 005c259b  55                   push ebp
// 005c259c  8be9                 mov ebp, ecx
// 005c259e  56                   push esi
// 005c259f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c25a3  50                   push eax
// 005c25a4  8d5d04               lea ebx, [ebp + 4]
// 005c25a7  56                   push esi
// 005c25a8  8bcb                 mov ecx, ebx
// 005c25aa  896c2414             mov dword ptr [esp + 0x14], ebp
// 005c25ae  897500               mov dword ptr [ebp], esi
// 005c25b1  e83affffff           call 0x5c24f0
// 005c25b6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005c25be  85f6                 test esi, esi
// 005c25c0  7453                 je 0x5c2615
// 005c25c2  57                   push edi
// 005c25c3  8dbee4000000         lea edi, [esi + 0xe4]
// 005c25c9  85ff                 test edi, edi
// 005c25cb  7431                 je 0x5c25fe
// 005c25cd  8937                 mov dword ptr [edi], esi
// 005c25cf  8b33                 mov esi, dword ptr [ebx]
// 005c25d1  85f6                 test esi, esi
// 005c25d3  740c                 je 0x5c25e1
// 005c25d5  8d4e08               lea ecx, [esi + 8]
// 005c25d8  ba01000000           mov edx, 1
// 005c25dd  f00fc111             lock xadd dword ptr [ecx], edx
// 005c25e1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c25e4  85c9                 test ecx, ecx
// 005c25e6  7413                 je 0x5c25fb
// 005c25e8  8d4108               lea eax, [ecx + 8]
// 005c25eb  83caff               or edx, 0xffffffff
// 005c25ee  f00fc110             lock xadd dword ptr [eax], edx
// 005c25f2  7507                 jne 0x5c25fb
// 005c25f4  8b01                 mov eax, dword ptr [ecx]
// 005c25f6  8b5008               mov edx, dword ptr [eax + 8]
// 005c25f9  ffd2                 call edx
// 005c25fb  897704               mov dword ptr [edi + 4], esi
// 005c25fe  5f                   pop edi
// 005c25ff  5e                   pop esi
// 005c2600  8bc5                 mov eax, ebp
// 005c2602  5d                   pop ebp
// 005c2603  5b                   pop ebx
// 005c2604  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c2608  64890d00000000       mov dword ptr fs:[0], ecx
// 005c260f  83c410               add esp, 0x10
// 005c2612  c20800               ret 8
// 005c2615  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c2619  5e                   pop esi
// 005c261a  8bc5                 mov eax, ebp
// 005c261c  5d                   pop ebp
// 005c261d  5b                   pop ebx
// 005c261e  64890d00000000       mov dword ptr fs:[0], ecx
// 005c2625  83c410               add esp, 0x10
// 005c2628  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
