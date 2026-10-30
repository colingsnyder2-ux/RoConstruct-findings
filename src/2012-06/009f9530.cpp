// roc 2012-06 009f9530  unit: CXTPDockingPaneAutoHidePanel  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f9530
//
// 009f9530  53                   push ebx
// 009f9531  56                   push esi
// 009f9532  8bd9                 mov ebx, ecx
// 009f9534  33f6                 xor esi, esi
// 009f9536  397328               cmp dword ptr [ebx + 0x28], esi
// 009f9539  7e2c                 jle 0x9f9567
// 009f953b  55                   push ebp
// 009f953c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 009f9540  57                   push edi
// 009f9541  8d7b20               lea edi, [ebx + 0x20]
// 009f9544  85f6                 test esi, esi
// 009f9546  7c24                 jl 0x9f956c
// 009f9548  3b7708               cmp esi, dword ptr [edi + 8]
// 009f954b  7d1f                 jge 0x9f956c
// 009f954d  8b4704               mov eax, dword ptr [edi + 4]
// 009f9550  3b2cb0               cmp ebp, dword ptr [eax + esi*4]
// 009f9553  750a                 jne 0x9f955f
// 009f9555  6a01                 push 1
// 009f9557  56                   push esi
// 009f9558  8bcf                 mov ecx, edi
// 009f955a  e8119cf9ff           call 0x993170
// 009f955f  46                   inc esi
// 009f9560  3b7328               cmp esi, dword ptr [ebx + 0x28]
// 009f9563  7cdf                 jl 0x9f9544
// 009f9565  5f                   pop edi
// 009f9566  5d                   pop ebp
// 009f9567  5e                   pop esi
// 009f9568  5b                   pop ebx
// 009f9569  c20400               ret 4
// 009f956c  e84f8ef8ff           call 0x9823c0
// copied from an identical function in another client (function ?UnRegister@CXTPCustomizeDropSource@@QAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp