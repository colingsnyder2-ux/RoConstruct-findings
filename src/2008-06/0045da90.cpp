// roc 2008-06 0045da90  unit: RBX::VControllerService::?$FactoryProduct::Creator  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045da90
//
// 0045da90  6aff                 push -1
// 0045da92  68abfd7b00           push 0x7bfdab
// 0045da97  64a100000000         mov eax, dword ptr fs:[0]
// 0045da9d  50                   push eax
// 0045da9e  64892500000000       mov dword ptr fs:[0], esp
// 0045daa5  51                   push ecx
// 0045daa6  8b442418             mov eax, dword ptr [esp + 0x18]
// 0045daaa  53                   push ebx
// 0045daab  55                   push ebp
// 0045daac  8be9                 mov ebp, ecx
// 0045daae  56                   push esi
// 0045daaf  8b742420             mov esi, dword ptr [esp + 0x20]
// 0045dab3  50                   push eax
// 0045dab4  8d5d04               lea ebx, [ebp + 4]
// 0045dab7  56                   push esi
// 0045dab8  8bcb                 mov ecx, ebx
// 0045daba  896c2414             mov dword ptr [esp + 0x14], ebp
// 0045dabe  897500               mov dword ptr [ebp], esi
// 0045dac1  e83affffff           call 0x45da00
// 0045dac6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0045dace  85f6                 test esi, esi
// 0045dad0  7453                 je 0x45db25
// 0045dad2  57                   push edi
// 0045dad3  8dbee4000000         lea edi, [esi + 0xe4]
// 0045dad9  85ff                 test edi, edi
// 0045dadb  7431                 je 0x45db0e
// 0045dadd  8937                 mov dword ptr [edi], esi
// 0045dadf  8b33                 mov esi, dword ptr [ebx]
// 0045dae1  85f6                 test esi, esi
// 0045dae3  740c                 je 0x45daf1
// 0045dae5  8d4e08               lea ecx, [esi + 8]
// 0045dae8  ba01000000           mov edx, 1
// 0045daed  f00fc111             lock xadd dword ptr [ecx], edx
// 0045daf1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0045daf4  85c9                 test ecx, ecx
// 0045daf6  7413                 je 0x45db0b
// 0045daf8  8d4108               lea eax, [ecx + 8]
// 0045dafb  83caff               or edx, 0xffffffff
// 0045dafe  f00fc110             lock xadd dword ptr [eax], edx
// 0045db02  7507                 jne 0x45db0b
// 0045db04  8b01                 mov eax, dword ptr [ecx]
// 0045db06  8b5008               mov edx, dword ptr [eax + 8]
// 0045db09  ffd2                 call edx
// 0045db0b  897704               mov dword ptr [edi + 4], esi
// 0045db0e  5f                   pop edi
// 0045db0f  5e                   pop esi
// 0045db10  8bc5                 mov eax, ebp
// 0045db12  5d                   pop ebp
// 0045db13  5b                   pop ebx
// 0045db14  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045db18  64890d00000000       mov dword ptr fs:[0], ecx
// 0045db1f  83c410               add esp, 0x10
// 0045db22  c20800               ret 8
// 0045db25  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045db29  5e                   pop esi
// 0045db2a  8bc5                 mov eax, ebp
// 0045db2c  5d                   pop ebp
// 0045db2d  5b                   pop ebx
// 0045db2e  64890d00000000       mov dword ptr fs:[0], ecx
// 0045db35  83c410               add esp, 0x10
// 0045db38  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
