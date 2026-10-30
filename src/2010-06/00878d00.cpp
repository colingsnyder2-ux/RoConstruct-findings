// roc 2010-06 00878d00  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 469 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00878d00
//
// 00878d00  6aff                 push -1
// 00878d02  6809bc9b00           push 0x9bbc09
// 00878d07  64a100000000         mov eax, dword ptr fs:[0]
// 00878d0d  50                   push eax
// 00878d0e  83ec10               sub esp, 0x10
// 00878d11  53                   push ebx
// 00878d12  55                   push ebp
// 00878d13  56                   push esi
// 00878d14  57                   push edi
// 00878d15  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00878d1a  33c4                 xor eax, esp
// 00878d1c  50                   push eax
// 00878d1d  8d442424             lea eax, [esp + 0x24]
// 00878d21  64a300000000         mov dword ptr fs:[0], eax
// 00878d27  8bd9                 mov ebx, ecx
// 00878d29  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00878d2d  8b4718               mov eax, dword ptr [edi + 0x18]
// 00878d30  50                   push eax
// 00878d31  e836401000           call 0x97cd6c
// 00878d36  8bf0                 mov esi, eax
// 00878d38  8b4708               mov eax, dword ptr [edi + 8]
// 00878d3b  85c0                 test eax, eax
// 00878d3d  0f8c56010000         jl 0x878e99
// 00878d43  f6470c03             test byte ptr [edi + 0xc], 3
// 00878d47  0f844c010000         je 0x878e99
// 00878d4d  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00878d50  6a00                 push 0
// 00878d52  50                   push eax
// 00878d53  68a1010000           push 0x1a1
// 00878d58  51                   push ecx
// 00878d59  ff1554ba9e00         call dword ptr [0x9eba54]
// 00878d5f  8bcb                 mov ecx, ebx
// 00878d61  89442418             mov dword ptr [esp + 0x18], eax
// 00878d65  e878421000           call 0x97cfe2
// 00878d6a  8b2d04ba9e00         mov ebp, dword ptr [0x9eba04]
// 00878d70  85c0                 test eax, eax
// 00878d72  0f844b010000         je 0x878ec3
// 00878d78  8b5708               mov edx, dword ptr [edi + 8]
// 00878d7b  52                   push edx
// 00878d7c  8bcb                 mov ecx, ebx
// 00878d7e  e83d491000           call 0x97d6c0
// 00878d83  85c0                 test eax, eax
// 00878d85  0f8438010000         je 0x878ec3
// 00878d8b  6a08                 push 8
// 00878d8d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00878d95  ffd5                 call ebp
// 00878d97  8b16                 mov edx, dword ptr [esi]
// 00878d99  50                   push eax
// 00878d9a  8b4238               mov eax, dword ptr [edx + 0x38]
// 00878d9d  8bce                 mov ecx, esi
// 00878d9f  ffd0                 call eax
// 00878da1  6a05                 push 5
// 00878da3  89442420             mov dword ptr [esp + 0x20], eax
// 00878da7  ffd5                 call ebp
// 00878da9  8b16                 mov edx, dword ptr [esi]
// 00878dab  50                   push eax
// 00878dac  8b4234               mov eax, dword ptr [edx + 0x34]
// 00878daf  8bce                 mov ecx, esi
// 00878db1  ffd0                 call eax
// 00878db3  837c241400           cmp dword ptr [esp + 0x14], 0
// 00878db8  89442420             mov dword ptr [esp + 0x20], eax
// 00878dbc  7532                 jne 0x878df0
// 00878dbe  f6471001             test byte ptr [edi + 0x10], 1
// 00878dc2  742c                 je 0x878df0
// 00878dc4  8b0e                 mov ecx, dword ptr [esi]
// 00878dc6  6a0e                 push 0xe
// 00878dc8  894c2418             mov dword ptr [esp + 0x18], ecx
// 00878dcc  ffd5                 call ebp
// 00878dce  8b542414             mov edx, dword ptr [esp + 0x14]
// 00878dd2  50                   push eax
// 00878dd3  8b4238               mov eax, dword ptr [edx + 0x38]
// 00878dd6  8bce                 mov ecx, esi
// 00878dd8  ffd0                 call eax
// 00878dda  8b0e                 mov ecx, dword ptr [esi]
// 00878ddc  6a0d                 push 0xd
// 00878dde  894c2418             mov dword ptr [esp + 0x18], ecx
// 00878de2  ffd5                 call ebp
// 00878de4  8b542414             mov edx, dword ptr [esp + 0x14]
// 00878de8  50                   push eax
// 00878de9  8b4234               mov eax, dword ptr [edx + 0x34]
// 00878dec  8bce                 mov ecx, esi
// 00878dee  ffd0                 call eax
// 00878df0  837b5400             cmp dword ptr [ebx + 0x54], 0
// 00878df4  7507                 jne 0x878dfd
// 00878df6  8bcb                 mov ecx, ebx
// 00878df8  e8bd481000           call 0x97d6ba
// 00878dfd  8d4c2434             lea ecx, [esp + 0x34]
// 00878e01  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00878e07  8b5708               mov edx, dword ptr [edi + 8]
// 00878e0a  8d4c2434             lea ecx, [esp + 0x34]
// 00878e0e  51                   push ecx
// 00878e0f  52                   push edx
// 00878e10  8bcb                 mov ecx, ebx
// 00878e12  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00878e1a  e8b93f1000           call 0x97cdd8
// 00878e1f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00878e23  2b4354               sub eax, dword ptr [ebx + 0x54]
// 00878e26  b900000000           mov ecx, 0
// 00878e2b  99                   cdq 
// 00878e2c  2bc2                 sub eax, edx
// 00878e2e  8b16                 mov edx, dword ptr [esi]
// 00878e30  d1f8                 sar eax, 1
// 00878e32  0f98c1               sets cl
// 00878e35  6a00                 push 0
// 00878e37  8954241c             mov dword ptr [esp + 0x1c], edx
// 00878e3b  8d5f1c               lea ebx, [edi + 0x1c]
// 00878e3e  49                   dec ecx
// 00878e3f  23c8                 and ecx, eax
// 00878e41  8be9                 mov ebp, ecx
// 00878e43  8d4c2438             lea ecx, [esp + 0x38]
// 00878e47  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00878e4d  50                   push eax
// 00878e4e  8d4c243c             lea ecx, [esp + 0x3c]
// 00878e52  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00878e58  8b0b                 mov ecx, dword ptr [ebx]
// 00878e5a  8b542420             mov edx, dword ptr [esp + 0x20]
// 00878e5e  50                   push eax
// 00878e5f  8b4720               mov eax, dword ptr [edi + 0x20]
// 00878e62  53                   push ebx
// 00878e63  6a02                 push 2
// 00878e65  03c5                 add eax, ebp
// 00878e67  50                   push eax
// 00878e68  8b4268               mov eax, dword ptr [edx + 0x68]
// 00878e6b  83c102               add ecx, 2
// 00878e6e  51                   push ecx
// 00878e6f  8bce                 mov ecx, esi
// 00878e71  ffd0                 call eax
// 00878e73  8b16                 mov edx, dword ptr [esi]
// 00878e75  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00878e79  8b5238               mov edx, dword ptr [edx + 0x38]
// 00878e7c  50                   push eax
// 00878e7d  8bce                 mov ecx, esi
// 00878e7f  ffd2                 call edx
// 00878e81  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00878e85  8b06                 mov eax, dword ptr [esi]
// 00878e87  8b5034               mov edx, dword ptr [eax + 0x34]
// 00878e8a  51                   push ecx
// 00878e8b  8bce                 mov ecx, esi
// 00878e8d  ffd2                 call edx
// 00878e8f  8d4c2434             lea ecx, [esp + 0x34]
// 00878e93  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00878e99  f6470c04             test byte ptr [edi + 0xc], 4
// 00878e9d  740e                 je 0x878ead
// 00878e9f  8b4604               mov eax, dword ptr [esi + 4]
// 00878ea2  83c71c               add edi, 0x1c
// 00878ea5  57                   push edi
// 00878ea6  50                   push eax
// 00878ea7  ff15c8ba9e00         call dword ptr [0x9ebac8]
// 00878ead  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00878eb1  64890d00000000       mov dword ptr fs:[0], ecx
// 00878eb8  59                   pop ecx
// 00878eb9  5f                   pop edi
// 00878eba  5e                   pop esi
// 00878ebb  5d                   pop ebp
// 00878ebc  5b                   pop ebx
// 00878ebd  83c41c               add esp, 0x1c
// 00878ec0  c20400               ret 4
// 00878ec3  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00878ecb  b880808000           mov eax, 0x808080
// 00878ed0  e9c2feffff           jmp 0x878d97
// copied from an identical function in another client (function ?DrawItem@CXTPCustomizeToolbarsPageCheckListBox@@MAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCustomizeToolbarsPage.cpp