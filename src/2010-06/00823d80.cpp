// roc 2010-06 00823d80  unit: CXTPNewToolbarDlg  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00823d80
//
// 00823d80  53                   push ebx
// 00823d81  56                   push esi
// 00823d82  8bd9                 mov ebx, ecx
// 00823d84  33f6                 xor esi, esi
// 00823d86  397328               cmp dword ptr [ebx + 0x28], esi
// 00823d89  7e2c                 jle 0x823db7
// 00823d8b  55                   push ebp
// 00823d8c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00823d90  57                   push edi
// 00823d91  8d7b20               lea edi, [ebx + 0x20]
// 00823d94  85f6                 test esi, esi
// 00823d96  7c24                 jl 0x823dbc
// 00823d98  3b7708               cmp esi, dword ptr [edi + 8]
// 00823d9b  7d1f                 jge 0x823dbc
// 00823d9d  8b4704               mov eax, dword ptr [edi + 4]
// 00823da0  3b2cb0               cmp ebp, dword ptr [eax + esi*4]
// 00823da3  750a                 jne 0x823daf
// 00823da5  6a01                 push 1
// 00823da7  56                   push esi
// 00823da8  8bcf                 mov ecx, edi
// 00823daa  e8914cf9ff           call 0x7b8a40
// 00823daf  46                   inc esi
// 00823db0  3b7328               cmp esi, dword ptr [ebx + 0x28]
// 00823db3  7cdf                 jl 0x823d94
// 00823db5  5f                   pop edi
// 00823db6  5d                   pop ebp
// 00823db7  5e                   pop esi
// 00823db8  5b                   pop ebx
// 00823db9  c20400               ret 4
// 00823dbc  e88b3ef8ff           call 0x7a7c4c
// copied from an identical function in another client (function ?UnRegister@CXTPCustomizeDropSource@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp