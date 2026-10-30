// roc 2009-06 007d0d20  unit: CXTPDockingPaneAutoHidePanel  size: 444 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d0d20
//
// 007d0d20  6aff                 push -1
// 007d0d22  6868e98700           push 0x87e968
// 007d0d27  64a100000000         mov eax, dword ptr fs:[0]
// 007d0d2d  50                   push eax
// 007d0d2e  83ec34               sub esp, 0x34
// 007d0d31  53                   push ebx
// 007d0d32  55                   push ebp
// 007d0d33  56                   push esi
// 007d0d34  57                   push edi
// 007d0d35  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007d0d3a  33c4                 xor eax, esp
// 007d0d3c  50                   push eax
// 007d0d3d  8d442448             lea eax, [esp + 0x48]
// 007d0d41  64a300000000         mov dword ptr fs:[0], eax
// 007d0d47  8bf9                 mov edi, ecx
// 007d0d49  8b4754               mov eax, dword ptr [edi + 0x54]
// 007d0d4c  8b5014               mov edx, dword ptr [eax + 0x14]
// 007d0d4f  8d4f54               lea ecx, [edi + 0x54]
// 007d0d52  ffd2                 call edx
// 007d0d54  85c0                 test eax, eax
// 007d0d56  7418                 je 0x7d0d70
// 007d0d58  837f2000             cmp dword ptr [edi + 0x20], 0
// 007d0d5c  0f8451010000         je 0x7d0eb3
// 007d0d62  8b07                 mov eax, dword ptr [edi]
// 007d0d64  8b5068               mov edx, dword ptr [eax + 0x68]
// 007d0d67  8bcf                 mov ecx, edi
// 007d0d69  ffd2                 call edx
// 007d0d6b  e943010000           jmp 0x7d0eb3
// 007d0d70  837f2000             cmp dword ptr [edi + 0x20], 0
// 007d0d74  7511                 jne 0x7d0d87
// 007d0d76  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007d0d7a  8b07                 mov eax, dword ptr [edi]
// 007d0d7c  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 007d0d82  51                   push ecx
// 007d0d83  8bcf                 mov ecx, edi
// 007d0d85  ffd2                 call edx
// 007d0d87  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 007d0d8b  56                   push esi
// 007d0d8c  8d9fb8000000         lea ebx, [edi + 0xb8]
// 007d0d92  53                   push ebx
// 007d0d93  ff15acee8900         call dword ptr [0x89eeac]
// 007d0d99  85c0                 test eax, eax
// 007d0d9b  751e                 jne 0x7d0dbb
// 007d0d9d  50                   push eax
// 007d0d9e  8bcf                 mov ecx, edi
// 007d0da0  e85bf4ffff           call 0x7d0200
// 007d0da5  8b06                 mov eax, dword ptr [esi]
// 007d0da7  8903                 mov dword ptr [ebx], eax
// 007d0da9  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d0dac  894b04               mov dword ptr [ebx + 4], ecx
// 007d0daf  8b5608               mov edx, dword ptr [esi + 8]
// 007d0db2  895308               mov dword ptr [ebx + 8], edx
// 007d0db5  8b460c               mov eax, dword ptr [esi + 0xc]
// 007d0db8  89430c               mov dword ptr [ebx + 0xc], eax
// 007d0dbb  8bcf                 mov ecx, edi
// 007d0dbd  e84ee0ffff           call 0x7cee10
// 007d0dc2  8b4e08               mov ecx, dword ptr [esi + 8]
// 007d0dc5  8b560c               mov edx, dword ptr [esi + 0xc]
// 007d0dc8  8b2e                 mov ebp, dword ptr [esi]
// 007d0dca  8b5e04               mov ebx, dword ptr [esi + 4]
// 007d0dcd  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007d0dd1  8b8fac000000         mov ecx, dword ptr [edi + 0xac]
// 007d0dd7  89542430             mov dword ptr [esp + 0x30], edx
// 007d0ddb  83f903               cmp ecx, 3
// 007d0dde  772b                 ja 0x7d0e0b
// 007d0de0  ff248dcc0e7d00       jmp dword ptr [ecx*4 + 0x7d0ecc]
// 007d0de7  0106                 add dword ptr [esi], eax
// 007d0de9  8b06                 mov eax, dword ptr [esi]
// 007d0deb  8944242c             mov dword ptr [esp + 0x2c], eax
// 007d0def  eb1a                 jmp 0x7d0e0b
// 007d0df1  294608               sub dword ptr [esi + 8], eax
// 007d0df4  8b6e08               mov ebp, dword ptr [esi + 8]
// 007d0df7  eb12                 jmp 0x7d0e0b
// 007d0df9  014604               add dword ptr [esi + 4], eax
// 007d0dfc  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d0dff  894c2430             mov dword ptr [esp + 0x30], ecx
// 007d0e03  eb06                 jmp 0x7d0e0b
// 007d0e05  29460c               sub dword ptr [esi + 0xc], eax
// 007d0e08  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 007d0e0b  57                   push edi
// 007d0e0c  8d4c2438             lea ecx, [esp + 0x38]
// 007d0e10  e88d8af4ff           call 0x7198a2
// 007d0e15  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007d0e19  8b742430             mov esi, dword ptr [esp + 0x30]
// 007d0e1d  8bc3                 mov eax, ebx
// 007d0e1f  f7d8                 neg eax
// 007d0e21  50                   push eax
// 007d0e22  8bcd                 mov ecx, ebp
// 007d0e24  f7d9                 neg ecx
// 007d0e26  51                   push ecx
// 007d0e27  8d44241c             lea eax, [esp + 0x1c]
// 007d0e2b  50                   push eax
// 007d0e2c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 007d0e34  896c2420             mov dword ptr [esp + 0x20], ebp
// 007d0e38  895c2424             mov dword ptr [esp + 0x24], ebx
// 007d0e3c  89542428             mov dword ptr [esp + 0x28], edx
// 007d0e40  8974242c             mov dword ptr [esp + 0x2c], esi
// 007d0e44  ff15f8ed8900         call dword ptr [0x89edf8]
// 007d0e4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007d0e4e  8b542418             mov edx, dword ptr [esp + 0x18]
// 007d0e52  83ec10               sub esp, 0x10
// 007d0e55  8bc4                 mov eax, esp
// 007d0e57  8908                 mov dword ptr [eax], ecx
// 007d0e59  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007d0e5d  895004               mov dword ptr [eax + 4], edx
// 007d0e60  8b542430             mov edx, dword ptr [esp + 0x30]
// 007d0e64  894808               mov dword ptr [eax + 8], ecx
// 007d0e67  89500c               mov dword ptr [eax + 0xc], edx
// 007d0e6a  8d442444             lea eax, [esp + 0x44]
// 007d0e6e  50                   push eax
// 007d0e6f  8bcf                 mov ecx, edi
// 007d0e71  e8eafaffff           call 0x7d0960
// 007d0e76  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007d0e7a  833900               cmp dword ptr [ecx], 0
// 007d0e7d  7423                 je 0x7d0ea2
// 007d0e7f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007d0e83  6a01                 push 1
// 007d0e85  2bf3                 sub esi, ebx
// 007d0e87  56                   push esi
// 007d0e88  2bc5                 sub eax, ebp
// 007d0e8a  50                   push eax
// 007d0e8b  53                   push ebx
// 007d0e8c  55                   push ebp
// 007d0e8d  8bcf                 mov ecx, edi
// 007d0e8f  e8767ff4ff           call 0x718e0a
// 007d0e94  8b5720               mov edx, dword ptr [edi + 0x20]
// 007d0e97  6a00                 push 0
// 007d0e99  6a00                 push 0
// 007d0e9b  52                   push edx
// 007d0e9c  ff157cee8900         call dword ptr [0x89ee7c]
// 007d0ea2  8d4c2434             lea ecx, [esp + 0x34]
// 007d0ea6  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 007d0eae  e8e989f4ff           call 0x71989c
// 007d0eb3  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007d0eb7  64890d00000000       mov dword ptr fs:[0], ecx
// 007d0ebe  59                   pop ecx
// 007d0ebf  5f                   pop edi
// 007d0ec0  5e                   pop esi
// 007d0ec1  5d                   pop ebp
// 007d0ec2  5b                   pop ebx
// 007d0ec3  83c440               add esp, 0x40
// 007d0ec6  c20c00               ret 0xc
// 007d0ec9  8d4900               lea ecx, [ecx]
// 007d0ecc  e70d                 out 0xd, eax
// 007d0ece  7d00                 jge 0x7d0ed0
// 007d0ed0  f1                   int1 
// 007d0ed1  0d7d00f90d           or eax, 0xdf9007d
// 007d0ed6  7d00                 jge 0x7d0ed8
// copied from an identical function in another client (function ?OnSizeParentEx@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@AAVCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp