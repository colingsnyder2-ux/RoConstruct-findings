// roc 2008-06 005fde10  unit: RBX::Tool  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fde10
//
// 005fde10  6aff                 push -1
// 005fde12  68abfd7b00           push 0x7bfdab
// 005fde17  64a100000000         mov eax, dword ptr fs:[0]
// 005fde1d  50                   push eax
// 005fde1e  64892500000000       mov dword ptr fs:[0], esp
// 005fde25  51                   push ecx
// 005fde26  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fde2a  53                   push ebx
// 005fde2b  55                   push ebp
// 005fde2c  8be9                 mov ebp, ecx
// 005fde2e  56                   push esi
// 005fde2f  8b742420             mov esi, dword ptr [esp + 0x20]
// 005fde33  50                   push eax
// 005fde34  8d5d04               lea ebx, [ebp + 4]
// 005fde37  56                   push esi
// 005fde38  8bcb                 mov ecx, ebx
// 005fde3a  896c2414             mov dword ptr [esp + 0x14], ebp
// 005fde3e  897500               mov dword ptr [ebp], esi
// 005fde41  e85afbffff           call 0x5fd9a0
// 005fde46  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005fde4e  85f6                 test esi, esi
// 005fde50  7453                 je 0x5fdea5
// 005fde52  57                   push edi
// 005fde53  8dbee4000000         lea edi, [esi + 0xe4]
// 005fde59  85ff                 test edi, edi
// 005fde5b  7431                 je 0x5fde8e
// 005fde5d  8937                 mov dword ptr [edi], esi
// 005fde5f  8b33                 mov esi, dword ptr [ebx]
// 005fde61  85f6                 test esi, esi
// 005fde63  740c                 je 0x5fde71
// 005fde65  8d4e08               lea ecx, [esi + 8]
// 005fde68  ba01000000           mov edx, 1
// 005fde6d  f00fc111             lock xadd dword ptr [ecx], edx
// 005fde71  8b4f04               mov ecx, dword ptr [edi + 4]
// 005fde74  85c9                 test ecx, ecx
// 005fde76  7413                 je 0x5fde8b
// 005fde78  8d4108               lea eax, [ecx + 8]
// 005fde7b  83caff               or edx, 0xffffffff
// 005fde7e  f00fc110             lock xadd dword ptr [eax], edx
// 005fde82  7507                 jne 0x5fde8b
// 005fde84  8b01                 mov eax, dword ptr [ecx]
// 005fde86  8b5008               mov edx, dword ptr [eax + 8]
// 005fde89  ffd2                 call edx
// 005fde8b  897704               mov dword ptr [edi + 4], esi
// 005fde8e  5f                   pop edi
// 005fde8f  5e                   pop esi
// 005fde90  8bc5                 mov eax, ebp
// 005fde92  5d                   pop ebp
// 005fde93  5b                   pop ebx
// 005fde94  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fde98  64890d00000000       mov dword ptr fs:[0], ecx
// 005fde9f  83c410               add esp, 0x10
// 005fdea2  c20800               ret 8
// 005fdea5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005fdea9  5e                   pop esi
// 005fdeaa  8bc5                 mov eax, ebp
// 005fdeac  5d                   pop ebp
// 005fdead  5b                   pop ebx
// 005fdeae  64890d00000000       mov dword ptr fs:[0], ecx
// 005fdeb5  83c410               add esp, 0x10
// 005fdeb8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
