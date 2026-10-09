// roc 2008-06 0040b270  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b270
//
// 0040b270  6aff                 push -1
// 0040b272  68abfd7b00           push 0x7bfdab
// 0040b277  64a100000000         mov eax, dword ptr fs:[0]
// 0040b27d  50                   push eax
// 0040b27e  64892500000000       mov dword ptr fs:[0], esp
// 0040b285  51                   push ecx
// 0040b286  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040b28a  53                   push ebx
// 0040b28b  55                   push ebp
// 0040b28c  8be9                 mov ebp, ecx
// 0040b28e  56                   push esi
// 0040b28f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0040b293  50                   push eax
// 0040b294  8d5d04               lea ebx, [ebp + 4]
// 0040b297  56                   push esi
// 0040b298  8bcb                 mov ecx, ebx
// 0040b29a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0040b29e  897500               mov dword ptr [ebp], esi
// 0040b2a1  e83affffff           call 0x40b1e0
// 0040b2a6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0040b2ae  85f6                 test esi, esi
// 0040b2b0  7453                 je 0x40b305
// 0040b2b2  57                   push edi
// 0040b2b3  8dbee4000000         lea edi, [esi + 0xe4]
// 0040b2b9  85ff                 test edi, edi
// 0040b2bb  7431                 je 0x40b2ee
// 0040b2bd  8937                 mov dword ptr [edi], esi
// 0040b2bf  8b33                 mov esi, dword ptr [ebx]
// 0040b2c1  85f6                 test esi, esi
// 0040b2c3  740c                 je 0x40b2d1
// 0040b2c5  8d4e08               lea ecx, [esi + 8]
// 0040b2c8  ba01000000           mov edx, 1
// 0040b2cd  f00fc111             lock xadd dword ptr [ecx], edx
// 0040b2d1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0040b2d4  85c9                 test ecx, ecx
// 0040b2d6  7413                 je 0x40b2eb
// 0040b2d8  8d4108               lea eax, [ecx + 8]
// 0040b2db  83caff               or edx, 0xffffffff
// 0040b2de  f00fc110             lock xadd dword ptr [eax], edx
// 0040b2e2  7507                 jne 0x40b2eb
// 0040b2e4  8b01                 mov eax, dword ptr [ecx]
// 0040b2e6  8b5008               mov edx, dword ptr [eax + 8]
// 0040b2e9  ffd2                 call edx
// 0040b2eb  897704               mov dword ptr [edi + 4], esi
// 0040b2ee  5f                   pop edi
// 0040b2ef  5e                   pop esi
// 0040b2f0  8bc5                 mov eax, ebp
// 0040b2f2  5d                   pop ebp
// 0040b2f3  5b                   pop ebx
// 0040b2f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0040b2f8  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b2ff  83c410               add esp, 0x10
// 0040b302  c20800               ret 8
// 0040b305  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0040b309  5e                   pop esi
// 0040b30a  8bc5                 mov eax, ebp
// 0040b30c  5d                   pop ebp
// 0040b30d  5b                   pop ebx
// 0040b30e  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b315  83c410               add esp, 0x10
// 0040b318  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
