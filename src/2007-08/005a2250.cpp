// roc 2007-08 005a2250  unit: RBX::VSkin::?$FactoryProduct  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2250
//
// 005a2250  6aff                 push -1
// 005a2252  6848b77500           push 0x75b748
// 005a2257  64a100000000         mov eax, dword ptr fs:[0]
// 005a225d  50                   push eax
// 005a225e  64892500000000       mov dword ptr fs:[0], esp
// 005a2265  83ec08               sub esp, 8
// 005a2268  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a226c  56                   push esi
// 005a226d  57                   push edi
// 005a226e  8bf1                 mov esi, ecx
// 005a2270  89742408             mov dword ptr [esp + 8], esi
// 005a2274  50                   push eax
// 005a2275  51                   push ecx
// 005a2276  8bc4                 mov eax, esp
// 005a2278  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005a2280  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a2288  89642414             mov dword ptr [esp + 0x14], esp
// 005a228c  c70000000000         mov dword ptr [eax], 0
// 005a2292  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a2296  8b542428             mov edx, dword ptr [esp + 0x28]
// 005a229a  51                   push ecx
// 005a229b  52                   push edx
// 005a229c  c644242801           mov byte ptr [esp + 0x28], 1
// 005a22a1  e87afdffff           call 0x5a2020
// 005a22a6  50                   push eax
// 005a22a7  8bce                 mov ecx, esi
// 005a22a9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005a22ae  e82d5eeeff           call 0x4880e0
// 005a22b3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005a22b7  50                   push eax
// 005a22b8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005a22bd  e8a0d90800           call 0x62fc62
// 005a22c2  6a18                 push 0x18
// 005a22c4  c70620427b00         mov dword ptr [esi], 0x7b4220
// 005a22ca  e827dc0800           call 0x62fef6
// 005a22cf  83c408               add esp, 8
// 005a22d2  85c0                 test eax, eax
// 005a22d4  7422                 je 0x5a22f8
// 005a22d6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a22da  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005a22de  894808               mov dword ptr [eax + 8], ecx
// 005a22e1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005a22e5  c70018417b00         mov dword ptr [eax], 0x7b4118
// 005a22eb  897004               mov dword ptr [eax + 4], esi
// 005a22ee  895010               mov dword ptr [eax + 0x10], edx
// 005a22f1  894814               mov dword ptr [eax + 0x14], ecx
// 005a22f4  8bf8                 mov edi, eax
// 005a22f6  eb02                 jmp 0x5a22fa
// 005a22f8  33ff                 xor edi, edi
// 005a22fa  8b4618               mov eax, dword ptr [esi + 0x18]
// 005a22fd  3bf8                 cmp edi, eax
// 005a22ff  7409                 je 0x5a230a
// 005a2301  50                   push eax
// 005a2302  e85bd90800           call 0x62fc62
// 005a2307  83c404               add esp, 4
// 005a230a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a230e  897e18               mov dword ptr [esi + 0x18], edi
// 005a2311  5f                   pop edi
// 005a2312  8bc6                 mov eax, esi
// 005a2314  64890d00000000       mov dword ptr fs:[0], ecx
// 005a231b  5e                   pop esi
// 005a231c  83c414               add esp, 0x14
// 005a231f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
