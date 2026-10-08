// roc 2007-03 0053b9c0  unit: seg_00530000  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053b9c0
//
// 0053b9c0  6aff                 push -1
// 0053b9c2  6848be7500           push 0x75be48
// 0053b9c7  64a100000000         mov eax, dword ptr fs:[0]
// 0053b9cd  50                   push eax
// 0053b9ce  64892500000000       mov dword ptr fs:[0], esp
// 0053b9d5  83ec08               sub esp, 8
// 0053b9d8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0053b9dc  56                   push esi
// 0053b9dd  57                   push edi
// 0053b9de  8bf1                 mov esi, ecx
// 0053b9e0  89742408             mov dword ptr [esp + 8], esi
// 0053b9e4  50                   push eax
// 0053b9e5  51                   push ecx
// 0053b9e6  8bc4                 mov eax, esp
// 0053b9e8  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0053b9f0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0053b9f8  89642414             mov dword ptr [esp + 0x14], esp
// 0053b9fc  c70000000000         mov dword ptr [eax], 0
// 0053ba02  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053ba06  8b542428             mov edx, dword ptr [esp + 0x28]
// 0053ba0a  51                   push ecx
// 0053ba0b  52                   push edx
// 0053ba0c  c644242801           mov byte ptr [esp + 0x28], 1
// 0053ba11  e8fafeffff           call 0x53b910
// 0053ba16  50                   push eax
// 0053ba17  8bce                 mov ecx, esi
// 0053ba19  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0053ba1e  e86d6ef0ff           call 0x442890
// 0053ba23  8b442434             mov eax, dword ptr [esp + 0x34]
// 0053ba27  50                   push eax
// 0053ba28  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0053ba2d  e8be260e00           call 0x61e0f0
// 0053ba32  6a18                 push 0x18
// 0053ba34  c706c0e67800         mov dword ptr [esi], 0x78e6c0
// 0053ba3a  e8c9260e00           call 0x61e108
// 0053ba3f  83c408               add esp, 8
// 0053ba42  85c0                 test eax, eax
// 0053ba44  7422                 je 0x53ba68
// 0053ba46  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0053ba4a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0053ba4e  894808               mov dword ptr [eax + 8], ecx
// 0053ba51  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0053ba55  c70040587a00         mov dword ptr [eax], 0x7a5840
// 0053ba5b  897004               mov dword ptr [eax + 4], esi
// 0053ba5e  895010               mov dword ptr [eax + 0x10], edx
// 0053ba61  894814               mov dword ptr [eax + 0x14], ecx
// 0053ba64  8bf8                 mov edi, eax
// 0053ba66  eb02                 jmp 0x53ba6a
// 0053ba68  33ff                 xor edi, edi
// 0053ba6a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0053ba6d  3bf8                 cmp edi, eax
// 0053ba6f  7409                 je 0x53ba7a
// 0053ba71  50                   push eax
// 0053ba72  e879260e00           call 0x61e0f0
// 0053ba77  83c404               add esp, 4
// 0053ba7a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053ba7e  897e18               mov dword ptr [esi + 0x18], edi
// 0053ba81  5f                   pop edi
// 0053ba82  8bc6                 mov eax, esi
// 0053ba84  64890d00000000       mov dword ptr fs:[0], ecx
// 0053ba8b  5e                   pop esi
// 0053ba8c  83c414               add esp, 0x14
// 0053ba8f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
