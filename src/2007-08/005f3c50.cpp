// roc 2007-08 005f3c50  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3c50
//
// 005f3c50  6aff                 push -1
// 005f3c52  6848b77500           push 0x75b748
// 005f3c57  64a100000000         mov eax, dword ptr fs:[0]
// 005f3c5d  50                   push eax
// 005f3c5e  64892500000000       mov dword ptr fs:[0], esp
// 005f3c65  83ec08               sub esp, 8
// 005f3c68  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f3c6c  56                   push esi
// 005f3c6d  57                   push edi
// 005f3c6e  8bf1                 mov esi, ecx
// 005f3c70  89742408             mov dword ptr [esp + 8], esi
// 005f3c74  50                   push eax
// 005f3c75  51                   push ecx
// 005f3c76  8bc4                 mov eax, esp
// 005f3c78  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005f3c80  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f3c88  89642414             mov dword ptr [esp + 0x14], esp
// 005f3c8c  c70000000000         mov dword ptr [eax], 0
// 005f3c92  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f3c96  8b542428             mov edx, dword ptr [esp + 0x28]
// 005f3c9a  51                   push ecx
// 005f3c9b  52                   push edx
// 005f3c9c  c644242801           mov byte ptr [esp + 0x28], 1
// 005f3ca1  e8fafaffff           call 0x5f37a0
// 005f3ca6  50                   push eax
// 005f3ca7  8bce                 mov ecx, esi
// 005f3ca9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f3cae  e8adf1e4ff           call 0x442e60
// 005f3cb3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005f3cb7  50                   push eax
// 005f3cb8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005f3cbd  e8a0bf0300           call 0x62fc62
// 005f3cc2  6a18                 push 0x18
// 005f3cc4  c7061cf87800         mov dword ptr [esi], 0x78f81c
// 005f3cca  e827c20300           call 0x62fef6
// 005f3ccf  83c408               add esp, 8
// 005f3cd2  85c0                 test eax, eax
// 005f3cd4  7422                 je 0x5f3cf8
// 005f3cd6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f3cda  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005f3cde  894808               mov dword ptr [eax + 8], ecx
// 005f3ce1  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f3ce5  c7004c077c00         mov dword ptr [eax], 0x7c074c
// 005f3ceb  897004               mov dword ptr [eax + 4], esi
// 005f3cee  895010               mov dword ptr [eax + 0x10], edx
// 005f3cf1  894814               mov dword ptr [eax + 0x14], ecx
// 005f3cf4  8bf8                 mov edi, eax
// 005f3cf6  eb02                 jmp 0x5f3cfa
// 005f3cf8  33ff                 xor edi, edi
// 005f3cfa  8b4618               mov eax, dword ptr [esi + 0x18]
// 005f3cfd  3bf8                 cmp edi, eax
// 005f3cff  7409                 je 0x5f3d0a
// 005f3d01  50                   push eax
// 005f3d02  e85bbf0300           call 0x62fc62
// 005f3d07  83c404               add esp, 4
// 005f3d0a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f3d0e  897e18               mov dword ptr [esi + 0x18], edi
// 005f3d11  5f                   pop edi
// 005f3d12  8bc6                 mov eax, esi
// 005f3d14  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3d1b  5e                   pop esi
// 005f3d1c  83c414               add esp, 0x14
// 005f3d1f  c21800               ret 0x18
// library rbxgs/script\ScriptContext.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
