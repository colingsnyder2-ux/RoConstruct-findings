// roc 2008-06 00407450  unit: VCApp::?$CComObject  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407450
//
// 00407450  6aff                 push -1
// 00407452  68abfd7b00           push 0x7bfdab
// 00407457  64a100000000         mov eax, dword ptr fs:[0]
// 0040745d  50                   push eax
// 0040745e  64892500000000       mov dword ptr fs:[0], esp
// 00407465  51                   push ecx
// 00407466  8b442418             mov eax, dword ptr [esp + 0x18]
// 0040746a  53                   push ebx
// 0040746b  55                   push ebp
// 0040746c  8be9                 mov ebp, ecx
// 0040746e  56                   push esi
// 0040746f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00407473  50                   push eax
// 00407474  8d5d04               lea ebx, [ebp + 4]
// 00407477  56                   push esi
// 00407478  8bcb                 mov ecx, ebx
// 0040747a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0040747e  897500               mov dword ptr [ebp], esi
// 00407481  e84afaffff           call 0x406ed0
// 00407486  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0040748e  85f6                 test esi, esi
// 00407490  7453                 je 0x4074e5
// 00407492  57                   push edi
// 00407493  8dbee4000000         lea edi, [esi + 0xe4]
// 00407499  85ff                 test edi, edi
// 0040749b  7431                 je 0x4074ce
// 0040749d  8937                 mov dword ptr [edi], esi
// 0040749f  8b33                 mov esi, dword ptr [ebx]
// 004074a1  85f6                 test esi, esi
// 004074a3  740c                 je 0x4074b1
// 004074a5  8d4e08               lea ecx, [esi + 8]
// 004074a8  ba01000000           mov edx, 1
// 004074ad  f00fc111             lock xadd dword ptr [ecx], edx
// 004074b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 004074b4  85c9                 test ecx, ecx
// 004074b6  7413                 je 0x4074cb
// 004074b8  8d4108               lea eax, [ecx + 8]
// 004074bb  83caff               or edx, 0xffffffff
// 004074be  f00fc110             lock xadd dword ptr [eax], edx
// 004074c2  7507                 jne 0x4074cb
// 004074c4  8b01                 mov eax, dword ptr [ecx]
// 004074c6  8b5008               mov edx, dword ptr [eax + 8]
// 004074c9  ffd2                 call edx
// 004074cb  897704               mov dword ptr [edi + 4], esi
// 004074ce  5f                   pop edi
// 004074cf  5e                   pop esi
// 004074d0  8bc5                 mov eax, ebp
// 004074d2  5d                   pop ebp
// 004074d3  5b                   pop ebx
// 004074d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004074d8  64890d00000000       mov dword ptr fs:[0], ecx
// 004074df  83c410               add esp, 0x10
// 004074e2  c20800               ret 8
// 004074e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004074e9  5e                   pop esi
// 004074ea  8bc5                 mov eax, ebp
// 004074ec  5d                   pop ebp
// 004074ed  5b                   pop ebx
// 004074ee  64890d00000000       mov dword ptr fs:[0], ecx
// 004074f5  83c410               add esp, 0x10
// 004074f8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
