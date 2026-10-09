// roc 2008-06 00456f10  unit: CRobloxReportView::CStatsItemRecord::CValueItem  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00456f10
//
// 00456f10  6aff                 push -1
// 00456f12  68abfd7b00           push 0x7bfdab
// 00456f17  64a100000000         mov eax, dword ptr fs:[0]
// 00456f1d  50                   push eax
// 00456f1e  64892500000000       mov dword ptr fs:[0], esp
// 00456f25  51                   push ecx
// 00456f26  8b442418             mov eax, dword ptr [esp + 0x18]
// 00456f2a  53                   push ebx
// 00456f2b  55                   push ebp
// 00456f2c  8be9                 mov ebp, ecx
// 00456f2e  56                   push esi
// 00456f2f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00456f33  50                   push eax
// 00456f34  8d5d04               lea ebx, [ebp + 4]
// 00456f37  56                   push esi
// 00456f38  8bcb                 mov ecx, ebx
// 00456f3a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00456f3e  897500               mov dword ptr [ebp], esi
// 00456f41  e8caf4ffff           call 0x456410
// 00456f46  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00456f4e  85f6                 test esi, esi
// 00456f50  7453                 je 0x456fa5
// 00456f52  57                   push edi
// 00456f53  8dbee4000000         lea edi, [esi + 0xe4]
// 00456f59  85ff                 test edi, edi
// 00456f5b  7431                 je 0x456f8e
// 00456f5d  8937                 mov dword ptr [edi], esi
// 00456f5f  8b33                 mov esi, dword ptr [ebx]
// 00456f61  85f6                 test esi, esi
// 00456f63  740c                 je 0x456f71
// 00456f65  8d4e08               lea ecx, [esi + 8]
// 00456f68  ba01000000           mov edx, 1
// 00456f6d  f00fc111             lock xadd dword ptr [ecx], edx
// 00456f71  8b4f04               mov ecx, dword ptr [edi + 4]
// 00456f74  85c9                 test ecx, ecx
// 00456f76  7413                 je 0x456f8b
// 00456f78  8d4108               lea eax, [ecx + 8]
// 00456f7b  83caff               or edx, 0xffffffff
// 00456f7e  f00fc110             lock xadd dword ptr [eax], edx
// 00456f82  7507                 jne 0x456f8b
// 00456f84  8b01                 mov eax, dword ptr [ecx]
// 00456f86  8b5008               mov edx, dword ptr [eax + 8]
// 00456f89  ffd2                 call edx
// 00456f8b  897704               mov dword ptr [edi + 4], esi
// 00456f8e  5f                   pop edi
// 00456f8f  5e                   pop esi
// 00456f90  8bc5                 mov eax, ebp
// 00456f92  5d                   pop ebp
// 00456f93  5b                   pop ebx
// 00456f94  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00456f98  64890d00000000       mov dword ptr fs:[0], ecx
// 00456f9f  83c410               add esp, 0x10
// 00456fa2  c20800               ret 8
// 00456fa5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00456fa9  5e                   pop esi
// 00456faa  8bc5                 mov eax, ebp
// 00456fac  5d                   pop ebp
// 00456fad  5b                   pop ebx
// 00456fae  64890d00000000       mov dword ptr fs:[0], ecx
// 00456fb5  83c410               add esp, 0x10
// 00456fb8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
