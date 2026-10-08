// roc 2007-08 005f3ef0  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3ef0
//
// 005f3ef0  6aff                 push -1
// 005f3ef2  6848b77500           push 0x75b748
// 005f3ef7  64a100000000         mov eax, dword ptr fs:[0]
// 005f3efd  50                   push eax
// 005f3efe  64892500000000       mov dword ptr fs:[0], esp
// 005f3f05  83ec08               sub esp, 8
// 005f3f08  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f3f0c  56                   push esi
// 005f3f0d  57                   push edi
// 005f3f0e  8bf1                 mov esi, ecx
// 005f3f10  89742408             mov dword ptr [esp + 8], esi
// 005f3f14  50                   push eax
// 005f3f15  51                   push ecx
// 005f3f16  8bc4                 mov eax, esp
// 005f3f18  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005f3f20  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f3f28  89642414             mov dword ptr [esp + 0x14], esp
// 005f3f2c  c70000000000         mov dword ptr [eax], 0
// 005f3f32  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f3f36  8b542428             mov edx, dword ptr [esp + 0x28]
// 005f3f3a  51                   push ecx
// 005f3f3b  52                   push edx
// 005f3f3c  c644242801           mov byte ptr [esp + 0x28], 1
// 005f3f41  e8aaf9ffff           call 0x5f38f0
// 005f3f46  50                   push eax
// 005f3f47  8bce                 mov ecx, esi
// 005f3f49  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f3f4e  e88deee4ff           call 0x442de0
// 005f3f53  8b442434             mov eax, dword ptr [esp + 0x34]
// 005f3f57  50                   push eax
// 005f3f58  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005f3f5d  e800bd0300           call 0x62fc62
// 005f3f62  6a18                 push 0x18
// 005f3f64  c706f4f77800         mov dword ptr [esi], 0x78f7f4
// 005f3f6a  e887bf0300           call 0x62fef6
// 005f3f6f  83c408               add esp, 8
// 005f3f72  85c0                 test eax, eax
// 005f3f74  7422                 je 0x5f3f98
// 005f3f76  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f3f7a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f3f7e  894808               mov dword ptr [eax + 8], ecx
// 005f3f81  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f3f85  c7007c077c00         mov dword ptr [eax], 0x7c077c
// 005f3f8b  897004               mov dword ptr [eax + 4], esi
// 005f3f8e  895010               mov dword ptr [eax + 0x10], edx
// 005f3f91  894814               mov dword ptr [eax + 0x14], ecx
// 005f3f94  8bf8                 mov edi, eax
// 005f3f96  eb02                 jmp 0x5f3f9a
// 005f3f98  33ff                 xor edi, edi
// 005f3f9a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005f3f9d  3bf8                 cmp edi, eax
// 005f3f9f  7409                 je 0x5f3faa
// 005f3fa1  50                   push eax
// 005f3fa2  e8bbbc0300           call 0x62fc62
// 005f3fa7  83c404               add esp, 4
// 005f3faa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f3fae  897e18               mov dword ptr [esi + 0x18], edi
// 005f3fb1  5f                   pop edi
// 005f3fb2  8bc6                 mov eax, esi
// 005f3fb4  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3fbb  5e                   pop esi
// 005f3fbc  83c414               add esp, 0x14
// 005f3fbf  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
