// roc 2007-08 005f3e10  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3e10
//
// 005f3e10  6aff                 push -1
// 005f3e12  6848b77500           push 0x75b748
// 005f3e17  64a100000000         mov eax, dword ptr fs:[0]
// 005f3e1d  50                   push eax
// 005f3e1e  64892500000000       mov dword ptr fs:[0], esp
// 005f3e25  83ec08               sub esp, 8
// 005f3e28  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f3e2c  56                   push esi
// 005f3e2d  57                   push edi
// 005f3e2e  8bf1                 mov esi, ecx
// 005f3e30  89742408             mov dword ptr [esp + 8], esi
// 005f3e34  50                   push eax
// 005f3e35  51                   push ecx
// 005f3e36  8bc4                 mov eax, esp
// 005f3e38  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005f3e40  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f3e48  89642414             mov dword ptr [esp + 0x14], esp
// 005f3e4c  c70000000000         mov dword ptr [eax], 0
// 005f3e52  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f3e56  8b542428             mov edx, dword ptr [esp + 0x28]
// 005f3e5a  51                   push ecx
// 005f3e5b  52                   push edx
// 005f3e5c  c644242801           mov byte ptr [esp + 0x28], 1
// 005f3e61  e81afaffff           call 0x5f3880
// 005f3e66  50                   push eax
// 005f3e67  8bce                 mov ecx, esi
// 005f3e69  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f3e6e  e86d14e5ff           call 0x4452e0
// 005f3e73  8b442434             mov eax, dword ptr [esp + 0x34]
// 005f3e77  50                   push eax
// 005f3e78  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005f3e7d  e8e0bd0300           call 0x62fc62
// 005f3e82  6a18                 push 0x18
// 005f3e84  c706bccd7900         mov dword ptr [esi], 0x79cdbc
// 005f3e8a  e867c00300           call 0x62fef6
// 005f3e8f  83c408               add esp, 8
// 005f3e92  85c0                 test eax, eax
// 005f3e94  7422                 je 0x5f3eb8
// 005f3e96  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f3e9a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f3e9e  894808               mov dword ptr [eax + 8], ecx
// 005f3ea1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f3ea5  c7006c077c00         mov dword ptr [eax], 0x7c076c
// 005f3eab  897004               mov dword ptr [eax + 4], esi
// 005f3eae  895010               mov dword ptr [eax + 0x10], edx
// 005f3eb1  894814               mov dword ptr [eax + 0x14], ecx
// 005f3eb4  8bf8                 mov edi, eax
// 005f3eb6  eb02                 jmp 0x5f3eba
// 005f3eb8  33ff                 xor edi, edi
// 005f3eba  8b4618               mov eax, dword ptr [esi + 0x18]
// 005f3ebd  3bf8                 cmp edi, eax
// 005f3ebf  7409                 je 0x5f3eca
// 005f3ec1  50                   push eax
// 005f3ec2  e89bbd0300           call 0x62fc62
// 005f3ec7  83c404               add esp, 4
// 005f3eca  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f3ece  897e18               mov dword ptr [esi + 0x18], edi
// 005f3ed1  5f                   pop edi
// 005f3ed2  8bc6                 mov eax, esi
// 005f3ed4  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3edb  5e                   pop esi
// 005f3edc  83c414               add esp, 0x14
// 005f3edf  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
