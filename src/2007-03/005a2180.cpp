// roc 2007-03 005a2180  unit: seg_005a0000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a2180
//
// 005a2180  6aff                 push -1
// 005a2182  6848be7500           push 0x75be48
// 005a2187  64a100000000         mov eax, dword ptr fs:[0]
// 005a218d  50                   push eax
// 005a218e  64892500000000       mov dword ptr fs:[0], esp
// 005a2195  83ec08               sub esp, 8
// 005a2198  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a219c  56                   push esi
// 005a219d  57                   push edi
// 005a219e  8bf1                 mov esi, ecx
// 005a21a0  89742408             mov dword ptr [esp + 8], esi
// 005a21a4  50                   push eax
// 005a21a5  51                   push ecx
// 005a21a6  8bc4                 mov eax, esp
// 005a21a8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005a21b0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a21b8  89642414             mov dword ptr [esp + 0x14], esp
// 005a21bc  c70000000000         mov dword ptr [eax], 0
// 005a21c2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a21c6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a21ca  51                   push ecx
// 005a21cb  52                   push edx
// 005a21cc  c644242801           mov byte ptr [esp + 0x28], 1
// 005a21d1  e87afdffff           call 0x5a1f50
// 005a21d6  50                   push eax
// 005a21d7  8bce                 mov ecx, esi
// 005a21d9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a21de  e80d3eeeff           call 0x485ff0
// 005a21e3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a21e7  50                   push eax
// 005a21e8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005a21ed  e8febe0700           call 0x61e0f0
// 005a21f2  6a18                 push 0x18
// 005a21f4  c70664497b00         mov dword ptr [esi], 0x7b4964
// 005a21fa  e809bf0700           call 0x61e108
// 005a21ff  83c408               add esp, 8
// 005a2202  85c0                 test eax, eax
// 005a2204  7422                 je 0x5a2228
// 005a2206  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a220a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a220e  894808               mov dword ptr [eax + 8], ecx
// 005a2211  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a2215  c7005c487b00         mov dword ptr [eax], 0x7b485c
// 005a221b  897004               mov dword ptr [eax + 4], esi
// 005a221e  895010               mov dword ptr [eax + 0x10], edx
// 005a2221  894814               mov dword ptr [eax + 0x14], ecx
// 005a2224  8bf8                 mov edi, eax
// 005a2226  eb02                 jmp 0x5a222a
// 005a2228  33ff                 xor edi, edi
// 005a222a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a222d  3bf8                 cmp edi, eax
// 005a222f  7409                 je 0x5a223a
// 005a2231  50                   push eax
// 005a2232  e8b9be0700           call 0x61e0f0
// 005a2237  83c404               add esp, 4
// 005a223a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a223e  897e18               mov dword ptr [esi + 0x18], edi
// 005a2241  5f                   pop edi
// 005a2242  8bc6                 mov eax, esi
// 005a2244  64890d00000000       mov dword ptr fs:[0], ecx
// 005a224b  5e                   pop esi
// 005a224c  83c414               add esp, 0x14
// 005a224f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
