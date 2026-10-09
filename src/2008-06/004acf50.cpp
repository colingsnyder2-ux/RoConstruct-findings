// roc 2008-06 004acf50  unit: RBX::Network::Replicator::ChangePropertyItem  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004acf50
//
// 004acf50  6aff                 push -1
// 004acf52  68abfd7b00           push 0x7bfdab
// 004acf57  64a100000000         mov eax, dword ptr fs:[0]
// 004acf5d  50                   push eax
// 004acf5e  64892500000000       mov dword ptr fs:[0], esp
// 004acf65  51                   push ecx
// 004acf66  8b442418             mov eax, dword ptr [esp + 0x18]
// 004acf6a  53                   push ebx
// 004acf6b  55                   push ebp
// 004acf6c  8be9                 mov ebp, ecx
// 004acf6e  56                   push esi
// 004acf6f  8b742420             mov esi, dword ptr [esp + 0x20]
// 004acf73  50                   push eax
// 004acf74  8d5d04               lea ebx, [ebp + 4]
// 004acf77  56                   push esi
// 004acf78  8bcb                 mov ecx, ebx
// 004acf7a  896c2414             mov dword ptr [esp + 0x14], ebp
// 004acf7e  897500               mov dword ptr [ebp], esi
// 004acf81  e81af4ffff           call 0x4ac3a0
// 004acf86  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004acf8e  85f6                 test esi, esi
// 004acf90  7453                 je 0x4acfe5
// 004acf92  57                   push edi
// 004acf93  8dbee4000000         lea edi, [esi + 0xe4]
// 004acf99  85ff                 test edi, edi
// 004acf9b  7431                 je 0x4acfce
// 004acf9d  8937                 mov dword ptr [edi], esi
// 004acf9f  8b33                 mov esi, dword ptr [ebx]
// 004acfa1  85f6                 test esi, esi
// 004acfa3  740c                 je 0x4acfb1
// 004acfa5  8d4e08               lea ecx, [esi + 8]
// 004acfa8  ba01000000           mov edx, 1
// 004acfad  f00fc111             lock xadd dword ptr [ecx], edx
// 004acfb1  8b4f04               mov ecx, dword ptr [edi + 4]
// 004acfb4  85c9                 test ecx, ecx
// 004acfb6  7413                 je 0x4acfcb
// 004acfb8  8d4108               lea eax, [ecx + 8]
// 004acfbb  83caff               or edx, 0xffffffff
// 004acfbe  f00fc110             lock xadd dword ptr [eax], edx
// 004acfc2  7507                 jne 0x4acfcb
// 004acfc4  8b01                 mov eax, dword ptr [ecx]
// 004acfc6  8b5008               mov edx, dword ptr [eax + 8]
// 004acfc9  ffd2                 call edx
// 004acfcb  897704               mov dword ptr [edi + 4], esi
// 004acfce  5f                   pop edi
// 004acfcf  5e                   pop esi
// 004acfd0  8bc5                 mov eax, ebp
// 004acfd2  5d                   pop ebp
// 004acfd3  5b                   pop ebx
// 004acfd4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004acfd8  64890d00000000       mov dword ptr fs:[0], ecx
// 004acfdf  83c410               add esp, 0x10
// 004acfe2  c20800               ret 8
// 004acfe5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004acfe9  5e                   pop esi
// 004acfea  8bc5                 mov eax, ebp
// 004acfec  5d                   pop ebp
// 004acfed  5b                   pop ebx
// 004acfee  64890d00000000       mov dword ptr fs:[0], ecx
// 004acff5  83c410               add esp, 0x10
// 004acff8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
