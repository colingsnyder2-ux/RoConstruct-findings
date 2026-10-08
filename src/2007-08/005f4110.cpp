// roc 2007-08 005f4110  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f4110
//
// 005f4110  6aff                 push -1
// 005f4112  6848b77500           push 0x75b748
// 005f4117  64a100000000         mov eax, dword ptr fs:[0]
// 005f411d  50                   push eax
// 005f411e  64892500000000       mov dword ptr fs:[0], esp
// 005f4125  83ec08               sub esp, 8
// 005f4128  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f412c  56                   push esi
// 005f412d  57                   push edi
// 005f412e  8bf1                 mov esi, ecx
// 005f4130  89742408             mov dword ptr [esp + 8], esi
// 005f4134  50                   push eax
// 005f4135  51                   push ecx
// 005f4136  8bc4                 mov eax, esp
// 005f4138  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005f4140  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f4148  89642414             mov dword ptr [esp + 0x14], esp
// 005f414c  c70000000000         mov dword ptr [eax], 0
// 005f4152  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f4156  8b542428             mov edx, dword ptr [esp + 0x28]
// 005f415a  51                   push ecx
// 005f415b  52                   push edx
// 005f415c  c644242801           mov byte ptr [esp + 0x28], 1
// 005f4161  e8faf7ffff           call 0x5f3960
// 005f4166  50                   push eax
// 005f4167  8bce                 mov ecx, esi
// 005f4169  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f416e  e84d0ef8ff           call 0x574fc0
// 005f4173  8b442434             mov eax, dword ptr [esp + 0x34]
// 005f4177  50                   push eax
// 005f4178  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005f417d  e8e0ba0300           call 0x62fc62
// 005f4182  6a18                 push 0x18
// 005f4184  c70664da7b00         mov dword ptr [esi], 0x7bda64
// 005f418a  e867bd0300           call 0x62fef6
// 005f418f  83c408               add esp, 8
// 005f4192  85c0                 test eax, eax
// 005f4194  7422                 je 0x5f41b8
// 005f4196  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f419a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f419e  894808               mov dword ptr [eax + 8], ecx
// 005f41a1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f41a5  c7008c077c00         mov dword ptr [eax], 0x7c078c
// 005f41ab  897004               mov dword ptr [eax + 4], esi
// 005f41ae  895010               mov dword ptr [eax + 0x10], edx
// 005f41b1  894814               mov dword ptr [eax + 0x14], ecx
// 005f41b4  8bf8                 mov edi, eax
// 005f41b6  eb02                 jmp 0x5f41ba
// 005f41b8  33ff                 xor edi, edi
// 005f41ba  8b4618               mov eax, dword ptr [esi + 0x18]
// 005f41bd  3bf8                 cmp edi, eax
// 005f41bf  7409                 je 0x5f41ca
// 005f41c1  50                   push eax
// 005f41c2  e89bba0300           call 0x62fc62
// 005f41c7  83c404               add esp, 4
// 005f41ca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f41ce  897e18               mov dword ptr [esi + 0x18], edi
// 005f41d1  5f                   pop edi
// 005f41d2  8bc6                 mov eax, esi
// 005f41d4  64890d00000000       mov dword ptr fs:[0], ecx
// 005f41db  5e                   pop esi
// 005f41dc  83c414               add esp, 0x14
// 005f41df  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
