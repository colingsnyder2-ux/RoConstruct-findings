// roc 2007-08 0058a970  unit: RBX::VSoundChannel::?$FactoryProduct  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058a970
//
// 0058a970  6aff                 push -1
// 0058a972  6848b77500           push 0x75b748
// 0058a977  64a100000000         mov eax, dword ptr fs:[0]
// 0058a97d  50                   push eax
// 0058a97e  64892500000000       mov dword ptr fs:[0], esp
// 0058a985  83ec08               sub esp, 8
// 0058a988  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0058a98c  56                   push esi
// 0058a98d  57                   push edi
// 0058a98e  8bf1                 mov esi, ecx
// 0058a990  89742408             mov dword ptr [esp + 8], esi
// 0058a994  50                   push eax
// 0058a995  51                   push ecx
// 0058a996  8bc4                 mov eax, esp
// 0058a998  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0058a9a0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0058a9a8  89642414             mov dword ptr [esp + 0x14], esp
// 0058a9ac  c70000000000         mov dword ptr [eax], 0
// 0058a9b2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058a9b6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0058a9ba  51                   push ecx
// 0058a9bb  52                   push edx
// 0058a9bc  c644242801           mov byte ptr [esp + 0x28], 1
// 0058a9c1  e81afdffff           call 0x58a6e0
// 0058a9c6  50                   push eax
// 0058a9c7  8bce                 mov ecx, esi
// 0058a9c9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0058a9ce  e80da9ebff           call 0x4452e0
// 0058a9d3  8b442434             mov eax, dword ptr [esp + 0x34]
// 0058a9d7  50                   push eax
// 0058a9d8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0058a9dd  e880520a00           call 0x62fc62
// 0058a9e2  6a18                 push 0x18
// 0058a9e4  c706bccd7900         mov dword ptr [esi], 0x79cdbc
// 0058a9ea  e807550a00           call 0x62fef6
// 0058a9ef  83c408               add esp, 8
// 0058a9f2  85c0                 test eax, eax
// 0058a9f4  7422                 je 0x58aa18
// 0058a9f6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0058a9fa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0058a9fe  894808               mov dword ptr [eax + 8], ecx
// 0058aa01  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0058aa05  c7003cea7a00         mov dword ptr [eax], 0x7aea3c
// 0058aa0b  897004               mov dword ptr [eax + 4], esi
// 0058aa0e  895010               mov dword ptr [eax + 0x10], edx
// 0058aa11  894814               mov dword ptr [eax + 0x14], ecx
// 0058aa14  8bf8                 mov edi, eax
// 0058aa16  eb02                 jmp 0x58aa1a
// 0058aa18  33ff                 xor edi, edi
// 0058aa1a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0058aa1d  3bf8                 cmp edi, eax
// 0058aa1f  7409                 je 0x58aa2a
// 0058aa21  50                   push eax
// 0058aa22  e83b520a00           call 0x62fc62
// 0058aa27  83c404               add esp, 4
// 0058aa2a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058aa2e  897e18               mov dword ptr [esi + 0x18], edi
// 0058aa31  5f                   pop edi
// 0058aa32  8bc6                 mov eax, esi
// 0058aa34  64890d00000000       mov dword ptr fs:[0], ecx
// 0058aa3b  5e                   pop esi
// 0058aa3c  83c414               add esp, 0x14
// 0058aa3f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
