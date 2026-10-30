// roc 2009-12 008c70e0  unit: CXTPPropertyGridInplaceEdit  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c70e0
//
// 008c70e0  6aff                 push -1
// 008c70e2  6802479600           push 0x964702
// 008c70e7  64a100000000         mov eax, dword ptr fs:[0]
// 008c70ed  50                   push eax
// 008c70ee  51                   push ecx
// 008c70ef  53                   push ebx
// 008c70f0  56                   push esi
// 008c70f1  57                   push edi
// 008c70f2  a10052b600           mov eax, dword ptr [0xb65200]
// 008c70f7  33c4                 xor eax, esp
// 008c70f9  50                   push eax
// 008c70fa  8d442414             lea eax, [esp + 0x14]
// 008c70fe  64a300000000         mov dword ptr fs:[0], eax
// 008c7104  8bd9                 mov ebx, ecx
// 008c7106  8b83a0000000         mov eax, dword ptr [ebx + 0xa0]
// 008c710c  8bb8c4000000         mov edi, dword ptr [eax + 0xc4]
// 008c7112  8b4728               mov eax, dword ptr [edi + 0x28]
// 008c7115  85c0                 test eax, eax
// 008c7117  7441                 je 0x8c715a
// 008c7119  8d4c2410             lea ecx, [esp + 0x10]
// 008c711d  ff1574de9800         call dword ptr [0x98de74]
// 008c7123  8d4c2410             lea ecx, [esp + 0x10]
// 008c7127  51                   push ecx
// 008c7128  8bcb                 mov ecx, ebx
// 008c712a  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008c7132  e811cdf2ff           call 0x7f3e48
// 008c7137  8d4c2410             lea ecx, [esp + 0x10]
// 008c713b  ff1580de9800         call dword ptr [0x98de80]
// 008c7141  50                   push eax
// 008c7142  8bcf                 mov ecx, edi
// 008c7144  e897ecf9ff           call 0x865de0
// 008c7149  8bf0                 mov esi, eax
// 008c714b  83feff               cmp esi, -1
// 008c714e  7521                 jne 0x8c7171
// 008c7150  8d4c2410             lea ecx, [esp + 0x10]
// 008c7154  ff15c0de9800         call dword ptr [0x98dec0]
// 008c715a  33c0                 xor eax, eax
// 008c715c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c7160  64890d00000000       mov dword ptr fs:[0], ecx
// 008c7167  59                   pop ecx
// 008c7168  5f                   pop edi
// 008c7169  5e                   pop esi
// 008c716a  5b                   pop ebx
// 008c716b  83c410               add esp, 0x10
// 008c716e  c20800               ret 8
// 008c7171  03742424             add esi, dword ptr [esp + 0x24]
// 008c7175  8b4728               mov eax, dword ptr [edi + 0x28]
// 008c7178  3bf0                 cmp esi, eax
// 008c717a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008c717e  7c07                 jl 0x8c7187
// 008c7180  85c9                 test ecx, ecx
// 008c7182  7510                 jne 0x8c7194
// 008c7184  8d70ff               lea esi, [eax - 1]
// 008c7187  85f6                 test esi, esi
// 008c7189  7d0b                 jge 0x8c7196
// 008c718b  85c9                 test ecx, ecx
// 008c718d  7405                 je 0x8c7194
// 008c718f  8d70ff               lea esi, [eax - 1]
// 008c7192  eb02                 jmp 0x8c7196
// 008c7194  33f6                 xor esi, esi
// 008c7196  56                   push esi
// 008c7197  8d542428             lea edx, [esp + 0x28]
// 008c719b  52                   push edx
// 008c719c  8bcf                 mov ecx, edi
// 008c719e  c783b400000000000000 mov dword ptr [ebx + 0xb4], 0
// 008c71a8  e893ebf9ff           call 0x865d40
// 008c71ad  8bc8                 mov ecx, eax
// 008c71af  c644241c01           mov byte ptr [esp + 0x1c], 1
// 008c71b4  ff1580de9800         call dword ptr [0x98de80]
// 008c71ba  50                   push eax
// 008c71bb  8bcb                 mov ecx, ebx
// 008c71bd  e852caf2ff           call 0x7f3c14
// 008c71c2  8d4c2424             lea ecx, [esp + 0x24]
// 008c71c6  ff15c0de9800         call dword ptr [0x98dec0]
// 008c71cc  8d4c2410             lea ecx, [esp + 0x10]
// 008c71d0  897734               mov dword ptr [edi + 0x34], esi
// 008c71d3  ff15c0de9800         call dword ptr [0x98dec0]
// 008c71d9  b801000000           mov eax, 1
// 008c71de  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c71e2  64890d00000000       mov dword ptr fs:[0], ecx
// 008c71e9  59                   pop ecx
// 008c71ea  5f                   pop edi
// 008c71eb  5e                   pop esi
// 008c71ec  5b                   pop ebx
// 008c71ed  83c410               add esp, 0x10
// 008c71f0  c20800               ret 8
// copied from an identical function in another client (function ?SelectConstraint@CXTPPropertyGridInplaceEdit@@UAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp