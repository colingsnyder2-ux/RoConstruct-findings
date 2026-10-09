// roc 2008-06 0049a3a0  unit: RBX::Network::VClient::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a3a0
//
// 0049a3a0  6aff                 push -1
// 0049a3a2  68abfd7b00           push 0x7bfdab
// 0049a3a7  64a100000000         mov eax, dword ptr fs:[0]
// 0049a3ad  50                   push eax
// 0049a3ae  64892500000000       mov dword ptr fs:[0], esp
// 0049a3b5  51                   push ecx
// 0049a3b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049a3ba  53                   push ebx
// 0049a3bb  55                   push ebp
// 0049a3bc  8be9                 mov ebp, ecx
// 0049a3be  56                   push esi
// 0049a3bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 0049a3c3  50                   push eax
// 0049a3c4  8d5d04               lea ebx, [ebp + 4]
// 0049a3c7  56                   push esi
// 0049a3c8  8bcb                 mov ecx, ebx
// 0049a3ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 0049a3ce  897500               mov dword ptr [ebp], esi
// 0049a3d1  e83affffff           call 0x49a310
// 0049a3d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0049a3de  85f6                 test esi, esi
// 0049a3e0  7453                 je 0x49a435
// 0049a3e2  57                   push edi
// 0049a3e3  8dbee4000000         lea edi, [esi + 0xe4]
// 0049a3e9  85ff                 test edi, edi
// 0049a3eb  7431                 je 0x49a41e
// 0049a3ed  8937                 mov dword ptr [edi], esi
// 0049a3ef  8b33                 mov esi, dword ptr [ebx]
// 0049a3f1  85f6                 test esi, esi
// 0049a3f3  740c                 je 0x49a401
// 0049a3f5  8d4e08               lea ecx, [esi + 8]
// 0049a3f8  ba01000000           mov edx, 1
// 0049a3fd  f00fc111             lock xadd dword ptr [ecx], edx
// 0049a401  8b4f04               mov ecx, dword ptr [edi + 4]
// 0049a404  85c9                 test ecx, ecx
// 0049a406  7413                 je 0x49a41b
// 0049a408  8d4108               lea eax, [ecx + 8]
// 0049a40b  83caff               or edx, 0xffffffff
// 0049a40e  f00fc110             lock xadd dword ptr [eax], edx
// 0049a412  7507                 jne 0x49a41b
// 0049a414  8b01                 mov eax, dword ptr [ecx]
// 0049a416  8b5008               mov edx, dword ptr [eax + 8]
// 0049a419  ffd2                 call edx
// 0049a41b  897704               mov dword ptr [edi + 4], esi
// 0049a41e  5f                   pop edi
// 0049a41f  5e                   pop esi
// 0049a420  8bc5                 mov eax, ebp
// 0049a422  5d                   pop ebp
// 0049a423  5b                   pop ebx
// 0049a424  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049a428  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a42f  83c410               add esp, 0x10
// 0049a432  c20800               ret 8
// 0049a435  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049a439  5e                   pop esi
// 0049a43a  8bc5                 mov eax, ebp
// 0049a43c  5d                   pop ebp
// 0049a43d  5b                   pop ebx
// 0049a43e  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a445  83c410               add esp, 0x10
// 0049a448  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
