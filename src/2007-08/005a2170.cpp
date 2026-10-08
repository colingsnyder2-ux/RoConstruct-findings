// roc 2007-08 005a2170  unit: RBX::VSkin::?$FactoryProduct  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2170
//
// 005a2170  6aff                 push -1
// 005a2172  6848b77500           push 0x75b748
// 005a2177  64a100000000         mov eax, dword ptr fs:[0]
// 005a217d  50                   push eax
// 005a217e  64892500000000       mov dword ptr fs:[0], esp
// 005a2185  83ec08               sub esp, 8
// 005a2188  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a218c  56                   push esi
// 005a218d  57                   push edi
// 005a218e  8bf1                 mov esi, ecx
// 005a2190  89742408             mov dword ptr [esp + 8], esi
// 005a2194  50                   push eax
// 005a2195  51                   push ecx
// 005a2196  8bc4                 mov eax, esp
// 005a2198  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005a21a0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a21a8  89642414             mov dword ptr [esp + 0x14], esp
// 005a21ac  c70000000000         mov dword ptr [eax], 0
// 005a21b2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a21b6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a21ba  51                   push ecx
// 005a21bb  52                   push edx
// 005a21bc  c644242801           mov byte ptr [esp + 0x28], 1
// 005a21c1  e8eafdffff           call 0x5a1fb0
// 005a21c6  50                   push eax
// 005a21c7  8bce                 mov ecx, esi
// 005a21c9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a21ce  e80d5feeff           call 0x4880e0
// 005a21d3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a21d7  50                   push eax
// 005a21d8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005a21dd  e880da0800           call 0x62fc62
// 005a21e2  6a18                 push 0x18
// 005a21e4  c70620427b00         mov dword ptr [esi], 0x7b4220
// 005a21ea  e807dd0800           call 0x62fef6
// 005a21ef  83c408               add esp, 8
// 005a21f2  85c0                 test eax, eax
// 005a21f4  7422                 je 0x5a2218
// 005a21f6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a21fa  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a21fe  894808               mov dword ptr [eax + 8], ecx
// 005a2201  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a2205  c70008417b00         mov dword ptr [eax], 0x7b4108
// 005a220b  897004               mov dword ptr [eax + 4], esi
// 005a220e  895010               mov dword ptr [eax + 0x10], edx
// 005a2211  894814               mov dword ptr [eax + 0x14], ecx
// 005a2214  8bf8                 mov edi, eax
// 005a2216  eb02                 jmp 0x5a221a
// 005a2218  33ff                 xor edi, edi
// 005a221a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a221d  3bf8                 cmp edi, eax
// 005a221f  7409                 je 0x5a222a
// 005a2221  50                   push eax
// 005a2222  e83bda0800           call 0x62fc62
// 005a2227  83c404               add esp, 4
// 005a222a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a222e  897e18               mov dword ptr [esi + 0x18], edi
// 005a2231  5f                   pop edi
// 005a2232  8bc6                 mov eax, esi
// 005a2234  64890d00000000       mov dword ptr fs:[0], ecx
// 005a223b  5e                   pop esi
// 005a223c  83c414               add esp, 0x14
// 005a223f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
