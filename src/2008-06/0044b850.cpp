// roc 2008-06 0044b850  unit: CRobloxApp  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044b850
//
// 0044b850  6aff                 push -1
// 0044b852  68abfd7b00           push 0x7bfdab
// 0044b857  64a100000000         mov eax, dword ptr fs:[0]
// 0044b85d  50                   push eax
// 0044b85e  64892500000000       mov dword ptr fs:[0], esp
// 0044b865  51                   push ecx
// 0044b866  8b442418             mov eax, dword ptr [esp + 0x18]
// 0044b86a  53                   push ebx
// 0044b86b  55                   push ebp
// 0044b86c  8be9                 mov ebp, ecx
// 0044b86e  56                   push esi
// 0044b86f  8b742420             mov esi, dword ptr [esp + 0x20]
// 0044b873  50                   push eax
// 0044b874  8d5d04               lea ebx, [ebp + 4]
// 0044b877  56                   push esi
// 0044b878  8bcb                 mov ecx, ebx
// 0044b87a  896c2414             mov dword ptr [esp + 0x14], ebp
// 0044b87e  897500               mov dword ptr [ebp], esi
// 0044b881  e83af0ffff           call 0x44a8c0
// 0044b886  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0044b88e  85f6                 test esi, esi
// 0044b890  7453                 je 0x44b8e5
// 0044b892  57                   push edi
// 0044b893  8dbee4000000         lea edi, [esi + 0xe4]
// 0044b899  85ff                 test edi, edi
// 0044b89b  7431                 je 0x44b8ce
// 0044b89d  8937                 mov dword ptr [edi], esi
// 0044b89f  8b33                 mov esi, dword ptr [ebx]
// 0044b8a1  85f6                 test esi, esi
// 0044b8a3  740c                 je 0x44b8b1
// 0044b8a5  8d4e08               lea ecx, [esi + 8]
// 0044b8a8  ba01000000           mov edx, 1
// 0044b8ad  f00fc111             lock xadd dword ptr [ecx], edx
// 0044b8b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 0044b8b4  85c9                 test ecx, ecx
// 0044b8b6  7413                 je 0x44b8cb
// 0044b8b8  8d4108               lea eax, [ecx + 8]
// 0044b8bb  83caff               or edx, 0xffffffff
// 0044b8be  f00fc110             lock xadd dword ptr [eax], edx
// 0044b8c2  7507                 jne 0x44b8cb
// 0044b8c4  8b01                 mov eax, dword ptr [ecx]
// 0044b8c6  8b5008               mov edx, dword ptr [eax + 8]
// 0044b8c9  ffd2                 call edx
// 0044b8cb  897704               mov dword ptr [edi + 4], esi
// 0044b8ce  5f                   pop edi
// 0044b8cf  5e                   pop esi
// 0044b8d0  8bc5                 mov eax, ebp
// 0044b8d2  5d                   pop ebp
// 0044b8d3  5b                   pop ebx
// 0044b8d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044b8d8  64890d00000000       mov dword ptr fs:[0], ecx
// 0044b8df  83c410               add esp, 0x10
// 0044b8e2  c20800               ret 8
// 0044b8e5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044b8e9  5e                   pop esi
// 0044b8ea  8bc5                 mov eax, ebp
// 0044b8ec  5d                   pop ebp
// 0044b8ed  5b                   pop ebx
// 0044b8ee  64890d00000000       mov dword ptr fs:[0], ecx
// 0044b8f5  83c410               add esp, 0x10
// 0044b8f8  c20800               ret 8
// library openrbx-client/App\script\Script.cpp (function ??$?0VScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@1@@?$shared_ptr@VScript@RBX@@@boost@@QAE@PAVScript@RBX@@VDeleter@?$Creatable@VInstance@RBX@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
