// roc 2008-06 00409300  unit: RBX::VTeam::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409300
//
// 00409300  6aff                 push -1
// 00409302  68abfd7b00           push 0x7bfdab
// 00409307  64a100000000         mov eax, dword ptr fs:[0]
// 0040930d  50                   push eax
// 0040930e  64892500000000       mov dword ptr fs:[0], esp
// 00409315  51                   push ecx
// 00409316  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040931a  53                   push ebx
// 0040931b  55                   push ebp
// 0040931c  8be9                 mov ebp, ecx
// 0040931e  56                   push esi
// 0040931f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00409323  50                   push eax
// 00409324  8d5d04               lea ebx, [ebp + 4]
// 00409327  56                   push esi
// 00409328  8bcb                 mov ecx, ebx
// 0040932a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0040932e  897500               mov dword ptr [ebp], esi
// 00409331  e83affffff           call 0x409270
// 00409336  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0040933e  85f6                 test esi, esi
// 00409340  7453                 je 0x409395
// 00409342  57                   push edi
// 00409343  8dbee4000000         lea edi, [esi + 0xe4]
// 00409349  85ff                 test edi, edi
// 0040934b  7431                 je 0x40937e
// 0040934d  8937                 mov dword ptr [edi], esi
// 0040934f  8b33                 mov esi, dword ptr [ebx]
// 00409351  85f6                 test esi, esi
// 00409353  740c                 je 0x409361
// 00409355  8d4e08               lea ecx, [esi + 8]
// 00409358  ba01000000           mov edx, 1
// 0040935d  f00fc111             lock xadd dword ptr [ecx], edx
// 00409361  8b4f04               mov ecx, dword ptr [edi + 4]
// 00409364  85c9                 test ecx, ecx
// 00409366  7413                 je 0x40937b
// 00409368  8d4108               lea eax, [ecx + 8]
// 0040936b  83caff               or edx, 0xffffffff
// 0040936e  f00fc110             lock xadd dword ptr [eax], edx
// 00409372  7507                 jne 0x40937b
// 00409374  8b01                 mov eax, dword ptr [ecx]
// 00409376  8b5008               mov edx, dword ptr [eax + 8]
// 00409379  ffd2                 call edx
// 0040937b  897704               mov dword ptr [edi + 4], esi
// 0040937e  5f                   pop edi
// 0040937f  5e                   pop esi
// 00409380  8bc5                 mov eax, ebp
// 00409382  5d                   pop ebp
// 00409383  5b                   pop ebx
// 00409384  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00409388  64890d00000000       mov dword ptr fs:[0], ecx
// 0040938f  83c410               add esp, 0x10
// 00409392  c20800               ret 8
// 00409395  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00409399  5e                   pop esi
// 0040939a  8bc5                 mov eax, ebp
// 0040939c  5d                   pop ebp
// 0040939d  5b                   pop ebx
// 0040939e  64890d00000000       mov dword ptr fs:[0], ecx
// 004093a5  83c410               add esp, 0x10
// 004093a8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
