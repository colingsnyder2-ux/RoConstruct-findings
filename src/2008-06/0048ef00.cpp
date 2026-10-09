// roc 2008-06 0048ef00  unit: RBX::PAVRunService::?$sp_counted_impl_pd  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ef00
//
// 0048ef00  6aff                 push -1
// 0048ef02  68abfd7b00           push 0x7bfdab
// 0048ef07  64a100000000         mov eax, dword ptr fs:[0]
// 0048ef0d  50                   push eax
// 0048ef0e  64892500000000       mov dword ptr fs:[0], esp
// 0048ef15  51                   push ecx
// 0048ef16  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048ef1a  53                   push ebx
// 0048ef1b  55                   push ebp
// 0048ef1c  8be9                 mov ebp, ecx
// 0048ef1e  56                   push esi
// 0048ef1f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0048ef23  50                   push eax
// 0048ef24  8d5d04               lea ebx, [ebp + 4]
// 0048ef27  56                   push esi
// 0048ef28  8bcb                 mov ecx, ebx
// 0048ef2a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048ef2e  897500               mov dword ptr [ebp], esi
// 0048ef31  e83affffff           call 0x48ee70
// 0048ef36  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0048ef3e  85f6                 test esi, esi
// 0048ef40  7453                 je 0x48ef95
// 0048ef42  57                   push edi
// 0048ef43  8dbee4000000         lea edi, [esi + 0xe4]
// 0048ef49  85ff                 test edi, edi
// 0048ef4b  7431                 je 0x48ef7e
// 0048ef4d  8937                 mov dword ptr [edi], esi
// 0048ef4f  8b33                 mov esi, dword ptr [ebx]
// 0048ef51  85f6                 test esi, esi
// 0048ef53  740c                 je 0x48ef61
// 0048ef55  8d4e08               lea ecx, [esi + 8]
// 0048ef58  ba01000000           mov edx, 1
// 0048ef5d  f00fc111             lock xadd dword ptr [ecx], edx
// 0048ef61  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048ef64  85c9                 test ecx, ecx
// 0048ef66  7413                 je 0x48ef7b
// 0048ef68  8d4108               lea eax, [ecx + 8]
// 0048ef6b  83caff               or edx, 0xffffffff
// 0048ef6e  f00fc110             lock xadd dword ptr [eax], edx
// 0048ef72  7507                 jne 0x48ef7b
// 0048ef74  8b01                 mov eax, dword ptr [ecx]
// 0048ef76  8b5008               mov edx, dword ptr [eax + 8]
// 0048ef79  ffd2                 call edx
// 0048ef7b  897704               mov dword ptr [edi + 4], esi
// 0048ef7e  5f                   pop edi
// 0048ef7f  5e                   pop esi
// 0048ef80  8bc5                 mov eax, ebp
// 0048ef82  5d                   pop ebp
// 0048ef83  5b                   pop ebx
// 0048ef84  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048ef88  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ef8f  83c410               add esp, 0x10
// 0048ef92  c20800               ret 8
// 0048ef95  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048ef99  5e                   pop esi
// 0048ef9a  8bc5                 mov eax, ebp
// 0048ef9c  5d                   pop ebp
// 0048ef9d  5b                   pop ebx
// 0048ef9e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048efa5  83c410               add esp, 0x10
// 0048efa8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
