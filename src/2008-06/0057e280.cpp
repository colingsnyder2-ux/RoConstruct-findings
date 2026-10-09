// roc 2008-06 0057e280  unit: RBX::ClearBackpack  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057e280
//
// 0057e280  6aff                 push -1
// 0057e282  68abfd7b00           push 0x7bfdab
// 0057e287  64a100000000         mov eax, dword ptr fs:[0]
// 0057e28d  50                   push eax
// 0057e28e  64892500000000       mov dword ptr fs:[0], esp
// 0057e295  51                   push ecx
// 0057e296  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057e29a  53                   push ebx
// 0057e29b  55                   push ebp
// 0057e29c  8be9                 mov ebp, ecx
// 0057e29e  56                   push esi
// 0057e29f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057e2a3  50                   push eax
// 0057e2a4  8d5d04               lea ebx, [ebp + 4]
// 0057e2a7  56                   push esi
// 0057e2a8  8bcb                 mov ecx, ebx
// 0057e2aa  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057e2ae  897500               mov dword ptr [ebp], esi
// 0057e2b1  e89afbffff           call 0x57de50
// 0057e2b6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057e2be  85f6                 test esi, esi
// 0057e2c0  7453                 je 0x57e315
// 0057e2c2  57                   push edi
// 0057e2c3  8dbee4000000         lea edi, [esi + 0xe4]
// 0057e2c9  85ff                 test edi, edi
// 0057e2cb  7431                 je 0x57e2fe
// 0057e2cd  8937                 mov dword ptr [edi], esi
// 0057e2cf  8b33                 mov esi, dword ptr [ebx]
// 0057e2d1  85f6                 test esi, esi
// 0057e2d3  740c                 je 0x57e2e1
// 0057e2d5  8d4e08               lea ecx, [esi + 8]
// 0057e2d8  ba01000000           mov edx, 1
// 0057e2dd  f00fc111             lock xadd dword ptr [ecx], edx
// 0057e2e1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057e2e4  85c9                 test ecx, ecx
// 0057e2e6  7413                 je 0x57e2fb
// 0057e2e8  8d4108               lea eax, [ecx + 8]
// 0057e2eb  83caff               or edx, 0xffffffff
// 0057e2ee  f00fc110             lock xadd dword ptr [eax], edx
// 0057e2f2  7507                 jne 0x57e2fb
// 0057e2f4  8b01                 mov eax, dword ptr [ecx]
// 0057e2f6  8b5008               mov edx, dword ptr [eax + 8]
// 0057e2f9  ffd2                 call edx
// 0057e2fb  897704               mov dword ptr [edi + 4], esi
// 0057e2fe  5f                   pop edi
// 0057e2ff  5e                   pop esi
// 0057e300  8bc5                 mov eax, ebp
// 0057e302  5d                   pop ebp
// 0057e303  5b                   pop ebx
// 0057e304  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0057e308  64890d00000000       mov dword ptr fs:[0], ecx
// 0057e30f  83c410               add esp, 0x10
// 0057e312  c20800               ret 8
// 0057e315  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057e319  5e                   pop esi
// 0057e31a  8bc5                 mov eax, ebp
// 0057e31c  5d                   pop ebp
// 0057e31d  5b                   pop ebx
// 0057e31e  64890d00000000       mov dword ptr fs:[0], ecx
// 0057e325  83c410               add esp, 0x10
// 0057e328  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
