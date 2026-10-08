// roc 2007-08 005edea0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005edea0
//
// 005edea0  6aff                 push -1
// 005edea2  6848b77500           push 0x75b748
// 005edea7  64a100000000         mov eax, dword ptr fs:[0]
// 005edead  50                   push eax
// 005edeae  64892500000000       mov dword ptr fs:[0], esp
// 005edeb5  83ec08               sub esp, 8
// 005edeb8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005edebc  56                   push esi
// 005edebd  57                   push edi
// 005edebe  8bf1                 mov esi, ecx
// 005edec0  89742408             mov dword ptr [esp + 8], esi
// 005edec4  50                   push eax
// 005edec5  51                   push ecx
// 005edec6  8bc4                 mov eax, esp
// 005edec8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005eded0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005eded8  89642414             mov dword ptr [esp + 0x14], esp
// 005ededc  c70000000000         mov dword ptr [eax], 0
// 005edee2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005edee6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005edeea  51                   push ecx
// 005edeeb  52                   push edx
// 005edeec  c644242801           mov byte ptr [esp + 0x28], 1
// 005edef1  e8bafdffff           call 0x5edcb0
// 005edef6  50                   push eax
// 005edef7  8bce                 mov ecx, esi
// 005edef9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005edefe  e8bd70f8ff           call 0x574fc0
// 005edf03  8b442434             mov eax, dword ptr [esp + 0x34]
// 005edf07  50                   push eax
// 005edf08  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005edf0d  e8501d0400           call 0x62fc62
// 005edf12  6a18                 push 0x18
// 005edf14  c70664da7b00         mov dword ptr [esi], 0x7bda64
// 005edf1a  e8d71f0400           call 0x62fef6
// 005edf1f  83c408               add esp, 8
// 005edf22  85c0                 test eax, eax
// 005edf24  7422                 je 0x5edf48
// 005edf26  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005edf2a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005edf2e  894808               mov dword ptr [eax + 8], ecx
// 005edf31  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005edf35  c70010ec7b00         mov dword ptr [eax], 0x7bec10
// 005edf3b  897004               mov dword ptr [eax + 4], esi
// 005edf3e  895010               mov dword ptr [eax + 0x10], edx
// 005edf41  894814               mov dword ptr [eax + 0x14], ecx
// 005edf44  8bf8                 mov edi, eax
// 005edf46  eb02                 jmp 0x5edf4a
// 005edf48  33ff                 xor edi, edi
// 005edf4a  8b4618               mov eax, dword ptr [esi + 0x18]
// 005edf4d  3bf8                 cmp edi, eax
// 005edf4f  7409                 je 0x5edf5a
// 005edf51  50                   push eax
// 005edf52  e80b1d0400           call 0x62fc62
// 005edf57  83c404               add esp, 4
// 005edf5a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005edf5e  897e18               mov dword ptr [esi + 0x18], edi
// 005edf61  5f                   pop edi
// 005edf62  8bc6                 mov eax, esi
// 005edf64  64890d00000000       mov dword ptr fs:[0], ecx
// 005edf6b  5e                   pop esi
// 005edf6c  83c414               add esp, 0x14
// 005edf6f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
