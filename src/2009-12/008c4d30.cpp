// roc 2009-12 008c4d30  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c4d30
//
// 008c4d30  83ec60               sub esp, 0x60
// 008c4d33  53                   push ebx
// 008c4d34  55                   push ebp
// 008c4d35  56                   push esi
// 008c4d36  8b742470             mov esi, dword ptr [esp + 0x70]
// 008c4d3a  57                   push edi
// 008c4d3b  8bd9                 mov ebx, ecx
// 008c4d3d  b90c000000           mov ecx, 0xc
// 008c4d42  8d7c2440             lea edi, [esp + 0x40]
// 008c4d46  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 008c4d48  8b442448             mov eax, dword ptr [esp + 0x48]
// 008c4d4c  85c0                 test eax, eax
// 008c4d4e  0f8c40010000         jl 0x8c4e94
// 008c4d54  f644244c03           test byte ptr [esp + 0x4c], 3
// 008c4d59  0f8435010000         je 0x8c4e94
// 008c4d5f  6a00                 push 0
// 008c4d61  50                   push eax
// 008c4d62  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008c4d65  68a1010000           push 0x1a1
// 008c4d6a  50                   push eax
// 008c4d6b  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c4d71  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008c4d75  51                   push ecx
// 008c4d76  8bf0                 mov esi, eax
// 008c4d78  e8b3160600           call 0x926430
// 008c4d7d  8b542448             mov edx, dword ptr [esp + 0x48]
// 008c4d81  52                   push edx
// 008c4d82  8bcb                 mov ecx, ebx
// 008c4d84  89442478             mov dword ptr [esp + 0x78], eax
// 008c4d88  e8f71f0600           call 0x926d84
// 008c4d8d  8b2d64cc9800         mov ebp, dword ptr [0x98cc64]
// 008c4d93  8bf8                 mov edi, eax
// 008c4d95  8d44245c             lea eax, [esp + 0x5c]
// 008c4d99  50                   push eax
// 008c4d9a  8d4c2414             lea ecx, [esp + 0x14]
// 008c4d9e  51                   push ecx
// 008c4d9f  ffd5                 call ebp
// 008c4da1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c4da5  8bc6                 mov eax, esi
// 008c4da7  2b436c               sub eax, dword ptr [ebx + 0x6c]
// 008c4daa  41                   inc ecx
// 008c4dab  99                   cdq 
// 008c4dac  2bc2                 sub eax, edx
// 008c4dae  d1f8                 sar eax, 1
// 008c4db0  ba00000000           mov edx, 0
// 008c4db5  0f98c2               sets dl
// 008c4db8  894c2410             mov dword ptr [esp + 0x10], ecx
// 008c4dbc  4a                   dec edx
// 008c4dbd  23c2                 and eax, edx
// 008c4dbf  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c4dc3  8d440201             lea eax, [edx + eax + 1]
// 008c4dc7  8b5368               mov edx, dword ptr [ebx + 0x68]
// 008c4dca  03d1                 add edx, ecx
// 008c4dcc  8b4b6c               mov ecx, dword ptr [ebx + 0x6c]
// 008c4dcf  89542418             mov dword ptr [esp + 0x18], edx
// 008c4dd3  03c8                 add ecx, eax
// 008c4dd5  8d54245c             lea edx, [esp + 0x5c]
// 008c4dd9  89442414             mov dword ptr [esp + 0x14], eax
// 008c4ddd  52                   push edx
// 008c4dde  8d442424             lea eax, [esp + 0x24]
// 008c4de2  50                   push eax
// 008c4de3  894c2424             mov dword ptr [esp + 0x24], ecx
// 008c4de7  ffd5                 call ebp
// 008c4de9  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008c4ded  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008c4df1  8b5368               mov edx, dword ptr [ebx + 0x68]
// 008c4df4  8b33                 mov esi, dword ptr [ebx]
// 008c4df6  83ec10               sub esp, 0x10
// 008c4df9  8bc4                 mov eax, esp
// 008c4dfb  8928                 mov dword ptr [eax], ebp
// 008c4dfd  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008c4e01  896804               mov dword ptr [eax + 4], ebp
// 008c4e04  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008c4e08  896808               mov dword ptr [eax + 8], ebp
// 008c4e0b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008c4e0f  89680c               mov dword ptr [eax + 0xc], ebp
// 008c4e12  8d541102             lea edx, [ecx + edx + 2]
// 008c4e16  83ec10               sub esp, 0x10
// 008c4e19  8bc4                 mov eax, esp
// 008c4e1b  8908                 mov dword ptr [eax], ecx
// 008c4e1d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008c4e21  894804               mov dword ptr [eax + 4], ecx
// 008c4e24  895008               mov dword ptr [eax + 8], edx
// 008c4e27  89542448             mov dword ptr [esp + 0x48], edx
// 008c4e2b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008c4e2f  89500c               mov dword ptr [eax + 0xc], edx
// 008c4e32  8b9660010000         mov edx, dword ptr [esi + 0x160]
// 008c4e38  8d442450             lea eax, [esp + 0x50]
// 008c4e3c  50                   push eax
// 008c4e3d  8bcb                 mov ecx, ebx
// 008c4e3f  ffd2                 call edx
// 008c4e41  8d735c               lea esi, [ebx + 0x5c]
// 008c4e44  8bce                 mov ecx, esi
// 008c4e46  e8656ffaff           call 0x86bdb0
// 008c4e4b  8b542474             mov edx, dword ptr [esp + 0x74]
// 008c4e4f  85c0                 test eax, eax
// 008c4e51  7425                 je 0x8c4e78
// 008c4e53  33c9                 xor ecx, ecx
// 008c4e55  85ff                 test edi, edi
// 008c4e57  0f95c1               setne cl
// 008c4e5a  6a00                 push 0
// 008c4e5c  8d442434             lea eax, [esp + 0x34]
// 008c4e60  50                   push eax
// 008c4e61  8b4204               mov eax, dword ptr [edx + 4]
// 008c4e64  8d0c8d01000000       lea ecx, [ecx*4 + 1]
// 008c4e6b  51                   push ecx
// 008c4e6c  6a03                 push 3
// 008c4e6e  50                   push eax
// 008c4e6f  8bce                 mov ecx, esi
// 008c4e71  e8ca69faff           call 0x86b840
// 008c4e76  eb1c                 jmp 0x8c4e94
// 008c4e78  8b4204               mov eax, dword ptr [edx + 4]
// 008c4e7b  f7df                 neg edi
// 008c4e7d  1bff                 sbb edi, edi
// 008c4e7f  81e700040000         and edi, 0x400
// 008c4e85  57                   push edi
// 008c4e86  6a04                 push 4
// 008c4e88  8d4c2438             lea ecx, [esp + 0x38]
// 008c4e8c  51                   push ecx
// 008c4e8d  50                   push eax
// 008c4e8e  ff1568ca9800         call dword ptr [0x98ca68]
// 008c4e94  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008c4e98  8b4b68               mov ecx, dword ptr [ebx + 0x68]
// 008c4e9b  8d440a03             lea eax, [edx + ecx + 3]
// 008c4e9f  8b13                 mov edx, dword ptr [ebx]
// 008c4ea1  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 008c4ea7  8944245c             mov dword ptr [esp + 0x5c], eax
// 008c4eab  8d442440             lea eax, [esp + 0x40]
// 008c4eaf  50                   push eax
// 008c4eb0  8bcb                 mov ecx, ebx
// 008c4eb2  ffd2                 call edx
// 008c4eb4  5f                   pop edi
// 008c4eb5  5e                   pop esi
// 008c4eb6  5d                   pop ebp
// 008c4eb7  5b                   pop ebx
// 008c4eb8  83c460               add esp, 0x60
// 008c4ebb  c20400               ret 4
// copied from an identical function in another client (function ?PreDrawItem@CXTPCustomizeToolbarsPageCheckListBox@@IAEXPAUtagDRAWITEMSTRUCT@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeToolbarsPage.cpp