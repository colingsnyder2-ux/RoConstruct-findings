// roc 2008-06 00578030  unit: RBX::VInstance::?$SignalDesc  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578030
//
// 00578030  6aff                 push -1
// 00578032  68abfd7b00           push 0x7bfdab
// 00578037  64a100000000         mov eax, dword ptr fs:[0]
// 0057803d  50                   push eax
// 0057803e  64892500000000       mov dword ptr fs:[0], esp
// 00578045  51                   push ecx
// 00578046  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057804a  53                   push ebx
// 0057804b  55                   push ebp
// 0057804c  8be9                 mov ebp, ecx
// 0057804e  56                   push esi
// 0057804f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00578053  50                   push eax
// 00578054  8d5d04               lea ebx, [ebp + 4]
// 00578057  56                   push esi
// 00578058  8bcb                 mov ecx, ebx
// 0057805a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0057805e  897500               mov dword ptr [ebp], esi
// 00578061  e83affffff           call 0x577fa0
// 00578066  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057806e  85f6                 test esi, esi
// 00578070  7453                 je 0x5780c5
// 00578072  57                   push edi
// 00578073  8dbee4000000         lea edi, [esi + 0xe4]
// 00578079  85ff                 test edi, edi
// 0057807b  7431                 je 0x5780ae
// 0057807d  8937                 mov dword ptr [edi], esi
// 0057807f  8b33                 mov esi, dword ptr [ebx]
// 00578081  85f6                 test esi, esi
// 00578083  740c                 je 0x578091
// 00578085  8d4e08               lea ecx, [esi + 8]
// 00578088  ba01000000           mov edx, 1
// 0057808d  f00fc111             lock xadd dword ptr [ecx], edx
// 00578091  8b4f04               mov ecx, dword ptr [edi + 4]
// 00578094  85c9                 test ecx, ecx
// 00578096  7413                 je 0x5780ab
// 00578098  8d4108               lea eax, [ecx + 8]
// 0057809b  83caff               or edx, 0xffffffff
// 0057809e  f00fc110             lock xadd dword ptr [eax], edx
// 005780a2  7507                 jne 0x5780ab
// 005780a4  8b01                 mov eax, dword ptr [ecx]
// 005780a6  8b5008               mov edx, dword ptr [eax + 8]
// 005780a9  ffd2                 call edx
// 005780ab  897704               mov dword ptr [edi + 4], esi
// 005780ae  5f                   pop edi
// 005780af  5e                   pop esi
// 005780b0  8bc5                 mov eax, ebp
// 005780b2  5d                   pop ebp
// 005780b3  5b                   pop ebx
// 005780b4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005780b8  64890d00000000       mov dword ptr fs:[0], ecx
// 005780bf  83c410               add esp, 0x10
// 005780c2  c20800               ret 8
// 005780c5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005780c9  5e                   pop esi
// 005780ca  8bc5                 mov eax, ebp
// 005780cc  5d                   pop ebp
// 005780cd  5b                   pop ebx
// 005780ce  64890d00000000       mov dword ptr fs:[0], ecx
// 005780d5  83c410               add esp, 0x10
// 005780d8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
