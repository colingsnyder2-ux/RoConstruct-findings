// roc 2008-06 00601a10  unit: RBX::VTool::?$BoundPropGetSet  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601a10
//
// 00601a10  6aff                 push -1
// 00601a12  68abfd7b00           push 0x7bfdab
// 00601a17  64a100000000         mov eax, dword ptr fs:[0]
// 00601a1d  50                   push eax
// 00601a1e  64892500000000       mov dword ptr fs:[0], esp
// 00601a25  51                   push ecx
// 00601a26  8b442418             mov eax, dword ptr [esp + 0x18]
// 00601a2a  53                   push ebx
// 00601a2b  55                   push ebp
// 00601a2c  8be9                 mov ebp, ecx
// 00601a2e  56                   push esi
// 00601a2f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00601a33  50                   push eax
// 00601a34  8d5d04               lea ebx, [ebp + 4]
// 00601a37  56                   push esi
// 00601a38  8bcb                 mov ecx, ebx
// 00601a3a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00601a3e  897500               mov dword ptr [ebp], esi
// 00601a41  e88af2ffff           call 0x600cd0
// 00601a46  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00601a4e  85f6                 test esi, esi
// 00601a50  7453                 je 0x601aa5
// 00601a52  57                   push edi
// 00601a53  8dbee4000000         lea edi, [esi + 0xe4]
// 00601a59  85ff                 test edi, edi
// 00601a5b  7431                 je 0x601a8e
// 00601a5d  8937                 mov dword ptr [edi], esi
// 00601a5f  8b33                 mov esi, dword ptr [ebx]
// 00601a61  85f6                 test esi, esi
// 00601a63  740c                 je 0x601a71
// 00601a65  8d4e08               lea ecx, [esi + 8]
// 00601a68  ba01000000           mov edx, 1
// 00601a6d  f00fc111             lock xadd dword ptr [ecx], edx
// 00601a71  8b4f04               mov ecx, dword ptr [edi + 4]
// 00601a74  85c9                 test ecx, ecx
// 00601a76  7413                 je 0x601a8b
// 00601a78  8d4108               lea eax, [ecx + 8]
// 00601a7b  83caff               or edx, 0xffffffff
// 00601a7e  f00fc110             lock xadd dword ptr [eax], edx
// 00601a82  7507                 jne 0x601a8b
// 00601a84  8b01                 mov eax, dword ptr [ecx]
// 00601a86  8b5008               mov edx, dword ptr [eax + 8]
// 00601a89  ffd2                 call edx
// 00601a8b  897704               mov dword ptr [edi + 4], esi
// 00601a8e  5f                   pop edi
// 00601a8f  5e                   pop esi
// 00601a90  8bc5                 mov eax, ebp
// 00601a92  5d                   pop ebp
// 00601a93  5b                   pop ebx
// 00601a94  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00601a98  64890d00000000       mov dword ptr fs:[0], ecx
// 00601a9f  83c410               add esp, 0x10
// 00601aa2  c20800               ret 8
// 00601aa5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00601aa9  5e                   pop esi
// 00601aaa  8bc5                 mov eax, ebp
// 00601aac  5d                   pop ebp
// 00601aad  5b                   pop ebx
// 00601aae  64890d00000000       mov dword ptr fs:[0], ecx
// 00601ab5  83c410               add esp, 0x10
// 00601ab8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
