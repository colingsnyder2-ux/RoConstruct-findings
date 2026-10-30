// from server: 100% by auto
// roc 2011-06 008f9c10  unit: CXTPRibbonGroup  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f9c10
//
// 008f9c10  83ec10               sub esp, 0x10
// 008f9c13  53                   push ebx
// 008f9c14  55                   push ebp
// 008f9c15  8bd9                 mov ebx, ecx
// 008f9c17  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008f9c1a  56                   push esi
// 008f9c1b  33f6                 xor esi, esi
// 008f9c1d  57                   push edi
// 008f9c1e  85c0                 test eax, eax
// 008f9c20  7e61                 jle 0x8f9c83
// 008f9c22  8b2d101ca400         mov ebp, dword ptr [0xa41c10]
// 008f9c28  85f6                 test esi, esi
// 008f9c2a  7c11                 jl 0x8f9c3d
// 008f9c2c  3bf0                 cmp esi, eax
// 008f9c2e  7d0d                 jge 0x8f9c3d
// 008f9c30  3b7328               cmp esi, dword ptr [ebx + 0x28]
// 008f9c33  7d5a                 jge 0x8f9c8f
// 008f9c35  8b4324               mov eax, dword ptr [ebx + 0x24]
// 008f9c38  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 008f9c3b  eb02                 jmp 0x8f9c3f
// 008f9c3d  33ff                 xor edi, edi
// 008f9c3f  8bcf                 mov ecx, edi
// 008f9c41  e89ad2ffff           call 0x8f6ee0
// 008f9c46  85c0                 test eax, eax
// 008f9c48  7431                 je 0x8f9c7b
// 008f9c4a  8b5738               mov edx, dword ptr [edi + 0x38]
// 008f9c4d  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008f9c50  8b473c               mov eax, dword ptr [edi + 0x3c]
// 008f9c53  894c2410             mov dword ptr [esp + 0x10], ecx
// 008f9c57  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 008f9c5a  89542414             mov dword ptr [esp + 0x14], edx
// 008f9c5e  8b542428             mov edx, dword ptr [esp + 0x28]
// 008f9c62  89442418             mov dword ptr [esp + 0x18], eax
// 008f9c66  8b442424             mov eax, dword ptr [esp + 0x24]
// 008f9c6a  52                   push edx
// 008f9c6b  894c2420             mov dword ptr [esp + 0x20], ecx
// 008f9c6f  50                   push eax
// 008f9c70  8d4c2418             lea ecx, [esp + 0x18]
// 008f9c74  51                   push ecx
// 008f9c75  ffd5                 call ebp
// 008f9c77  85c0                 test eax, eax
// 008f9c79  7519                 jne 0x8f9c94
// 008f9c7b  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008f9c7e  46                   inc esi
// 008f9c7f  3bf0                 cmp esi, eax
// 008f9c81  7ca5                 jl 0x8f9c28
// 008f9c83  5f                   pop edi
// 008f9c84  5e                   pop esi
// 008f9c85  5d                   pop ebp
// 008f9c86  33c0                 xor eax, eax
// 008f9c88  5b                   pop ebx
// 008f9c89  83c410               add esp, 0x10
// 008f9c8c  c20800               ret 8
// 008f9c8f  e87606f1ff           call 0x80a30a
// 008f9c94  8bc7                 mov eax, edi
// 008f9c96  5f                   pop edi
// 008f9c97  5e                   pop esi
// 008f9c98  5d                   pop ebp
// 008f9c99  5b                   pop ebx
// 008f9c9a  83c410               add esp, 0x10
// 008f9c9d  c20800               ret 8
// library xtp-15.2.1/Source\Ribbon\XTPRibbonGroups.cpp (function ?HitTest@CXTPRibbonGroups@@QBEPAVCXTPRibbonGroup@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonGroups.cpp
