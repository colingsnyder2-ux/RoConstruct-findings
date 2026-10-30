// roc 2012-06 00a77cb0  unit: CXTPRibbonSystemPopupBar  size: 541 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a77cb0
//
// 00a77cb0  6aff                 push -1
// 00a77cb2  68b891ae00           push 0xae91b8
// 00a77cb7  64a100000000         mov eax, dword ptr fs:[0]
// 00a77cbd  50                   push eax
// 00a77cbe  83ec48               sub esp, 0x48
// 00a77cc1  53                   push ebx
// 00a77cc2  55                   push ebp
// 00a77cc3  56                   push esi
// 00a77cc4  57                   push edi
// 00a77cc5  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a77cca  33c4                 xor eax, esp
// 00a77ccc  50                   push eax
// 00a77ccd  8d44245c             lea eax, [esp + 0x5c]
// 00a77cd1  64a300000000         mov dword ptr fs:[0], eax
// 00a77cd7  8bd9                 mov ebx, ecx
// 00a77cd9  8d4c2434             lea ecx, [esp + 0x34]
// 00a77cdd  e80ee5f0ff           call 0x9861f0
// 00a77ce2  8bcb                 mov ecx, ebx
// 00a77ce4  c744246400000000     mov dword ptr [esp + 0x64], 0
// 00a77cec  33ff                 xor edi, edi
// 00a77cee  e80dbef1ff           call 0x993b00
// 00a77cf3  85c0                 test eax, eax
// 00a77cf5  7e50                 jle 0xa77d47
// 00a77cf7  57                   push edi
// 00a77cf8  8bcb                 mov ecx, ebx
// 00a77cfa  e811bef1ff           call 0x993b10
// 00a77cff  8bf0                 mov esi, eax
// 00a77d01  85f6                 test esi, esi
// 00a77d03  7436                 je 0xa77d3b
// 00a77d05  e8e6edffff           call 0xa76af0
// 00a77d0a  50                   push eax
// 00a77d0b  8bce                 mov ecx, esi
// 00a77d0d  e884a9f0ff           call 0x982696
// 00a77d12  85c0                 test eax, eax
// 00a77d14  7425                 je 0xa77d3b
// 00a77d16  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a77d1a  56                   push esi
// 00a77d1b  50                   push eax
// 00a77d1c  8d4c243c             lea ecx, [esp + 0x3c]
// 00a77d20  e8aba1ffff           call 0xa71ed0
// 00a77d25  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00a77d2b  8b16                 mov edx, dword ptr [esi]
// 00a77d2d  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00a77d33  83c804               or eax, 4
// 00a77d36  50                   push eax
// 00a77d37  8bce                 mov ecx, esi
// 00a77d39  ffd2                 call edx
// 00a77d3b  8bcb                 mov ecx, ebx
// 00a77d3d  47                   inc edi
// 00a77d3e  e8bdbdf1ff           call 0x993b00
// 00a77d43  3bf8                 cmp edi, eax
// 00a77d45  7cb0                 jl 0xa77cf7
// 00a77d47  8b442474             mov eax, dword ptr [esp + 0x74]
// 00a77d4b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a77d4f  50                   push eax
// 00a77d50  51                   push ecx
// 00a77d51  8d54241c             lea edx, [esp + 0x1c]
// 00a77d55  52                   push edx
// 00a77d56  8bcb                 mov ecx, ebx
// 00a77d58  e8c347f5ff           call 0x9cc520
// 00a77d5d  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00a77d61  85f6                 test esi, esi
// 00a77d63  7513                 jne 0xa77d78
// 00a77d65  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00a77d69  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a77d6d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a77d71  8906                 mov dword ptr [esi], eax
// 00a77d73  894e04               mov dword ptr [esi + 4], ecx
// 00a77d76  eb78                 jmp 0xa77df0
// 00a77d78  53                   push ebx
// 00a77d79  8d4c244c             lea ecx, [esp + 0x4c]
// 00a77d7d  e81ab2f0ff           call 0x982f9c
// 00a77d82  8bcb                 mov ecx, ebx
// 00a77d84  c644246401           mov byte ptr [esp + 0x64], 1
// 00a77d89  e822b0f1ff           call 0x992db0
// 00a77d8e  8b10                 mov edx, dword ptr [eax]
// 00a77d90  6a00                 push 0
// 00a77d92  8bc8                 mov ecx, eax
// 00a77d94  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 00a77d9a  53                   push ebx
// 00a77d9b  ffd0                 call eax
// 00a77d9d  50                   push eax
// 00a77d9e  8d4c244c             lea ecx, [esp + 0x4c]
// 00a77da2  51                   push ecx
// 00a77da3  8d4c242c             lea ecx, [esp + 0x2c]
// 00a77da7  e884d7f5ff           call 0x9d5530
// 00a77dac  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a77db0  2bbb08020000         sub edi, dword ptr [ebx + 0x208]
// 00a77db6  8d6eff               lea ebp, [esi - 1]
// 00a77db9  47                   inc edi
// 00a77dba  c644246402           mov byte ptr [esp + 0x64], 2
// 00a77dbf  85ed                 test ebp, ebp
// 00a77dc1  7d61                 jge 0xa77e24
// 00a77dc3  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00a77dc7  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a77dcb  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a77dcf  8d4c2424             lea ecx, [esp + 0x24]
// 00a77dd3  8916                 mov dword ptr [esi], edx
// 00a77dd5  894604               mov dword ptr [esi + 4], eax
// 00a77dd8  c644246401           mov byte ptr [esp + 0x64], 1
// 00a77ddd  e8ced7f5ff           call 0x9d55b0
// 00a77de2  8d4c2448             lea ecx, [esp + 0x48]
// 00a77de6  c644246400           mov byte ptr [esp + 0x64], 0
// 00a77deb  e8a6b1f0ff           call 0x982f96
// 00a77df0  8d4c2434             lea ecx, [esp + 0x34]
// 00a77df4  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00a77dfc  e80fe4f0ff           call 0x986210
// 00a77e01  8bc6                 mov eax, esi
// 00a77e03  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a77e07  64890d00000000       mov dword ptr fs:[0], ecx
// 00a77e0e  59                   pop ecx
// 00a77e0f  5f                   pop edi
// 00a77e10  5e                   pop esi
// 00a77e11  5d                   pop ebp
// 00a77e12  5b                   pop ebx
// 00a77e13  83c454               add esp, 0x54
// 00a77e16  c20c00               ret 0xc
// 00a77e19  8da42400000000       lea esp, [esp]
// 00a77e20  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00a77e24  85ed                 test ebp, ebp
// 00a77e26  0f8c9c000000         jl 0xa77ec8
// 00a77e2c  3bee                 cmp ebp, esi
// 00a77e2e  0f8d94000000         jge 0xa77ec8
// 00a77e34  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a77e38  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 00a77e3b  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00a77e41  8b06                 mov eax, dword ptr [esi]
// 00a77e43  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00a77e49  83e1fb               and ecx, 0xfffffffb
// 00a77e4c  51                   push ecx
// 00a77e4d  8bce                 mov ecx, esi
// 00a77e4f  ffd2                 call edx
// 00a77e51  8b06                 mov eax, dword ptr [esi]
// 00a77e53  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 00a77e59  8d4c2448             lea ecx, [esp + 0x48]
// 00a77e5d  51                   push ecx
// 00a77e5e  8d542420             lea edx, [esp + 0x20]
// 00a77e62  52                   push edx
// 00a77e63  8bce                 mov ecx, esi
// 00a77e65  ffd0                 call eax
// 00a77e67  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a77e6b  8d48fd               lea ecx, [eax - 3]
// 00a77e6e  2b830c020000         sub eax, dword ptr [ebx + 0x20c]
// 00a77e74  894c2470             mov dword ptr [esp + 0x70], ecx
// 00a77e78  83c004               add eax, 4
// 00a77e7b  8bd7                 mov edx, edi
// 00a77e7d  2b54241c             sub edx, dword ptr [esp + 0x1c]
// 00a77e81  83ec10               sub esp, 0x10
// 00a77e84  8bcc                 mov ecx, esp
// 00a77e86  8911                 mov dword ptr [ecx], edx
// 00a77e88  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a77e8f  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00a77e96  8b06                 mov eax, dword ptr [esi]
// 00a77e98  8b407c               mov eax, dword ptr [eax + 0x7c]
// 00a77e9b  895104               mov dword ptr [ecx + 4], edx
// 00a77e9e  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00a77ea5  897908               mov dword ptr [ecx + 8], edi
// 00a77ea8  89510c               mov dword ptr [ecx + 0xc], edx
// 00a77eab  8bce                 mov ecx, esi
// 00a77ead  ffd0                 call eax
// 00a77eaf  b9faffffff           mov ecx, 0xfffffffa
// 00a77eb4  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00a77eb8  03f9                 add edi, ecx
// 00a77eba  83ed01               sub ebp, 1
// 00a77ebd  0f895dffffff         jns 0xa77e20
// 00a77ec3  e9fbfeffff           jmp 0xa77dc3
// 00a77ec8  e8f3a4f0ff           call 0x9823c0
// copied from an identical function in another client (function ?CalcDynamicLayout@CXTPRibbonSystemPopupBar@@UAE?AVCSize@@HK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp