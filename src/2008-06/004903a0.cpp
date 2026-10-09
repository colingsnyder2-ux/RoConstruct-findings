// roc 2008-06 004903a0  unit: RBX::VSkin::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004903a0
//
// 004903a0  6aff                 push -1
// 004903a2  68abfd7b00           push 0x7bfdab
// 004903a7  64a100000000         mov eax, dword ptr fs:[0]
// 004903ad  50                   push eax
// 004903ae  64892500000000       mov dword ptr fs:[0], esp
// 004903b5  51                   push ecx
// 004903b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 004903ba  53                   push ebx
// 004903bb  55                   push ebp
// 004903bc  8be9                 mov ebp, ecx
// 004903be  56                   push esi
// 004903bf  8b742420             mov esi, dword ptr [esp + 0x20]
// 004903c3  50                   push eax
// 004903c4  8d5d04               lea ebx, [ebp + 4]
// 004903c7  56                   push esi
// 004903c8  8bcb                 mov ecx, ebx
// 004903ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 004903ce  897500               mov dword ptr [ebp], esi
// 004903d1  e83affffff           call 0x490310
// 004903d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004903de  85f6                 test esi, esi
// 004903e0  7453                 je 0x490435
// 004903e2  57                   push edi
// 004903e3  8dbee4000000         lea edi, [esi + 0xe4]
// 004903e9  85ff                 test edi, edi
// 004903eb  7431                 je 0x49041e
// 004903ed  8937                 mov dword ptr [edi], esi
// 004903ef  8b33                 mov esi, dword ptr [ebx]
// 004903f1  85f6                 test esi, esi
// 004903f3  740c                 je 0x490401
// 004903f5  8d4e08               lea ecx, [esi + 8]
// 004903f8  ba01000000           mov edx, 1
// 004903fd  f00fc111             lock xadd dword ptr [ecx], edx
// 00490401  8b4f04               mov ecx, dword ptr [edi + 4]
// 00490404  85c9                 test ecx, ecx
// 00490406  7413                 je 0x49041b
// 00490408  8d4108               lea eax, [ecx + 8]
// 0049040b  83caff               or edx, 0xffffffff
// 0049040e  f00fc110             lock xadd dword ptr [eax], edx
// 00490412  7507                 jne 0x49041b
// 00490414  8b01                 mov eax, dword ptr [ecx]
// 00490416  8b5008               mov edx, dword ptr [eax + 8]
// 00490419  ffd2                 call edx
// 0049041b  897704               mov dword ptr [edi + 4], esi
// 0049041e  5f                   pop edi
// 0049041f  5e                   pop esi
// 00490420  8bc5                 mov eax, ebp
// 00490422  5d                   pop ebp
// 00490423  5b                   pop ebx
// 00490424  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00490428  64890d00000000       mov dword ptr fs:[0], ecx
// 0049042f  83c410               add esp, 0x10
// 00490432  c20800               ret 8
// 00490435  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00490439  5e                   pop esi
// 0049043a  8bc5                 mov eax, ebp
// 0049043c  5d                   pop ebp
// 0049043d  5b                   pop ebx
// 0049043e  64890d00000000       mov dword ptr fs:[0], ecx
// 00490445  83c410               add esp, 0x10
// 00490448  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
