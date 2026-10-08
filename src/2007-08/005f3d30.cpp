// roc 2007-08 005f3d30  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3d30
//
// 005f3d30  6aff                 push -1
// 005f3d32  6848b77500           push 0x75b748
// 005f3d37  64a100000000         mov eax, dword ptr fs:[0]
// 005f3d3d  50                   push eax
// 005f3d3e  64892500000000       mov dword ptr fs:[0], esp
// 005f3d45  83ec08               sub esp, 8
// 005f3d48  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f3d4c  56                   push esi
// 005f3d4d  57                   push edi
// 005f3d4e  8bf1                 mov esi, ecx
// 005f3d50  89742408             mov dword ptr [esp + 8], esi
// 005f3d54  50                   push eax
// 005f3d55  51                   push ecx
// 005f3d56  8bc4                 mov eax, esp
// 005f3d58  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005f3d60  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f3d68  89642414             mov dword ptr [esp + 0x14], esp
// 005f3d6c  c70000000000         mov dword ptr [eax], 0
// 005f3d72  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f3d76  8b542428             mov edx, dword ptr [esp + 0x28]
// 005f3d7a  51                   push ecx
// 005f3d7b  52                   push edx
// 005f3d7c  c644242801           mov byte ptr [esp + 0x28], 1
// 005f3d81  e88afaffff           call 0x5f3810
// 005f3d86  50                   push eax
// 005f3d87  8bce                 mov ecx, esi
// 005f3d89  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f3d8e  e8cdefe4ff           call 0x442d60
// 005f3d93  8b442434             mov eax, dword ptr [esp + 0x34]
// 005f3d97  50                   push eax
// 005f3d98  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005f3d9d  e8c0be0300           call 0x62fc62
// 005f3da2  6a18                 push 0x18
// 005f3da4  c706ccf77800         mov dword ptr [esi], 0x78f7cc
// 005f3daa  e847c10300           call 0x62fef6
// 005f3daf  83c408               add esp, 8
// 005f3db2  85c0                 test eax, eax
// 005f3db4  7422                 je 0x5f3dd8
// 005f3db6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f3dba  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f3dbe  894808               mov dword ptr [eax + 8], ecx
// 005f3dc1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f3dc5  c7005c077c00         mov dword ptr [eax], 0x7c075c
// 005f3dcb  897004               mov dword ptr [eax + 4], esi
// 005f3dce  895010               mov dword ptr [eax + 0x10], edx
// 005f3dd1  894814               mov dword ptr [eax + 0x14], ecx
// 005f3dd4  8bf8                 mov edi, eax
// 005f3dd6  eb02                 jmp 0x5f3dda
// 005f3dd8  33ff                 xor edi, edi
// 005f3dda  8b4618               mov eax, dword ptr [esi + 0x18]
// 005f3ddd  3bf8                 cmp edi, eax
// 005f3ddf  7409                 je 0x5f3dea
// 005f3de1  50                   push eax
// 005f3de2  e87bbe0300           call 0x62fc62
// 005f3de7  83c404               add esp, 4
// 005f3dea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f3dee  897e18               mov dword ptr [esi + 0x18], edi
// 005f3df1  5f                   pop edi
// 005f3df2  8bc6                 mov eax, esi
// 005f3df4  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3dfb  5e                   pop esi
// 005f3dfc  83c414               add esp, 0x14
// 005f3dff  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
