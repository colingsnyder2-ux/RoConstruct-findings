// roc 2008-06 00710d70  unit: CXTPPropertyGridItem  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00710d70
//
// 00710d70  55                   push ebp
// 00710d71  57                   push edi
// 00710d72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00710d76  8be9                 mov ebp, ecx
// 00710d78  85ff                 test edi, edi
// 00710d7a  744f                 je 0x710dcb
// 00710d7c  53                   push ebx
// 00710d7d  6a0a                 push 0xa
// 00710d7f  57                   push edi
// 00710d80  ff153c268000         call dword ptr [0x80263c]
// 00710d86  8bd8                 mov ebx, eax
// 00710d88  83c408               add esp, 8
// 00710d8b  8d8dac000000         lea ecx, [ebp + 0xac]
// 00710d91  85db                 test ebx, ebx
// 00710d93  750d                 jne 0x710da2
// 00710d95  57                   push edi
// 00710d96  ff15b83e8000         call dword ptr [0x803eb8]
// 00710d9c  5b                   pop ebx
// 00710d9d  5f                   pop edi
// 00710d9e  5d                   pop ebp
// 00710d9f  c20400               ret 4
// 00710da2  56                   push esi
// 00710da3  8bf3                 mov esi, ebx
// 00710da5  2bf7                 sub esi, edi
// 00710da7  56                   push esi
// 00710da8  ff15d03a8000         call dword ptr [0x803ad0]
// 00710dae  56                   push esi
// 00710daf  57                   push edi
// 00710db0  56                   push esi
// 00710db1  50                   push eax
// 00710db2  ff15ac288000         call dword ptr [0x8028ac]
// 00710db8  83c410               add esp, 0x10
// 00710dbb  43                   inc ebx
// 00710dbc  53                   push ebx
// 00710dbd  8d8db0000000         lea ecx, [ebp + 0xb0]
// 00710dc3  ff15b83e8000         call dword ptr [0x803eb8]
// 00710dc9  5e                   pop esi
// 00710dca  5b                   pop ebx
// 00710dcb  5f                   pop edi
// 00710dcc  5d                   pop ebp
// 00710dcd  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?SetPrompt@CXTPPropertyGridItem@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
