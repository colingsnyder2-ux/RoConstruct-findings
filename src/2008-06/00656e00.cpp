// roc 2008-06 00656e00  unit: RBX::ArrowPanel  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00656e00
//
// 00656e00  6aff                 push -1
// 00656e02  68abfd7b00           push 0x7bfdab
// 00656e07  64a100000000         mov eax, dword ptr fs:[0]
// 00656e0d  50                   push eax
// 00656e0e  64892500000000       mov dword ptr fs:[0], esp
// 00656e15  51                   push ecx
// 00656e16  8b442418             mov eax, dword ptr [esp + 0x18]
// 00656e1a  53                   push ebx
// 00656e1b  55                   push ebp
// 00656e1c  8be9                 mov ebp, ecx
// 00656e1e  56                   push esi
// 00656e1f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00656e23  50                   push eax
// 00656e24  8d5d04               lea ebx, [ebp + 4]
// 00656e27  56                   push esi
// 00656e28  8bcb                 mov ecx, ebx
// 00656e2a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00656e2e  897500               mov dword ptr [ebp], esi
// 00656e31  e85afeffff           call 0x656c90
// 00656e36  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00656e3e  85f6                 test esi, esi
// 00656e40  7453                 je 0x656e95
// 00656e42  57                   push edi
// 00656e43  8dbee4000000         lea edi, [esi + 0xe4]
// 00656e49  85ff                 test edi, edi
// 00656e4b  7431                 je 0x656e7e
// 00656e4d  8937                 mov dword ptr [edi], esi
// 00656e4f  8b33                 mov esi, dword ptr [ebx]
// 00656e51  85f6                 test esi, esi
// 00656e53  740c                 je 0x656e61
// 00656e55  8d4e08               lea ecx, [esi + 8]
// 00656e58  ba01000000           mov edx, 1
// 00656e5d  f00fc111             lock xadd dword ptr [ecx], edx
// 00656e61  8b4f04               mov ecx, dword ptr [edi + 4]
// 00656e64  85c9                 test ecx, ecx
// 00656e66  7413                 je 0x656e7b
// 00656e68  8d4108               lea eax, [ecx + 8]
// 00656e6b  83caff               or edx, 0xffffffff
// 00656e6e  f00fc110             lock xadd dword ptr [eax], edx
// 00656e72  7507                 jne 0x656e7b
// 00656e74  8b01                 mov eax, dword ptr [ecx]
// 00656e76  8b5008               mov edx, dword ptr [eax + 8]
// 00656e79  ffd2                 call edx
// 00656e7b  897704               mov dword ptr [edi + 4], esi
// 00656e7e  5f                   pop edi
// 00656e7f  5e                   pop esi
// 00656e80  8bc5                 mov eax, ebp
// 00656e82  5d                   pop ebp
// 00656e83  5b                   pop ebx
// 00656e84  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00656e88  64890d00000000       mov dword ptr fs:[0], ecx
// 00656e8f  83c410               add esp, 0x10
// 00656e92  c20800               ret 8
// 00656e95  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00656e99  5e                   pop esi
// 00656e9a  8bc5                 mov eax, ebp
// 00656e9c  5d                   pop ebp
// 00656e9d  5b                   pop ebx
// 00656e9e  64890d00000000       mov dword ptr fs:[0], ecx
// 00656ea5  83c410               add esp, 0x10
// 00656ea8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
