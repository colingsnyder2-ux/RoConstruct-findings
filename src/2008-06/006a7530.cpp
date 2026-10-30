// from server: 100% by auto
// roc 2008-06 006a7530  unit: CXTPControlComboBoxList  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7530
//
// 006a7530  51                   push ecx
// 006a7531  56                   push esi
// 006a7532  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a7536  57                   push edi
// 006a7537  8bf9                 mov edi, ecx
// 006a7539  81fe25e10000         cmp esi, 0xe125
// 006a753f  7523                 jne 0x6a7564
// 006a7541  e8c44a1100           call 0x7bc00a
// 006a7546  a900080008           test eax, 0x8000800
// 006a754b  756b                 jne 0x6a75b8
// 006a754d  6a01                 push 1
// 006a754f  ff15ec2d8000         call dword ptr [0x802dec]
// 006a7555  85c0                 test eax, eax
// 006a7557  745f                 je 0x6a75b8
// 006a7559  5f                   pop edi
// 006a755a  b801000000           mov eax, 1
// 006a755f  5e                   pop esi
// 006a7560  59                   pop ecx
// 006a7561  c20400               ret 4
// 006a7564  81fe23e10000         cmp esi, 0xe123
// 006a756a  7413                 je 0x6a757f
// 006a756c  81fe22e10000         cmp esi, 0xe122
// 006a7572  740b                 je 0x6a757f
// 006a7574  5f                   pop edi
// 006a7575  b801000000           mov eax, 1
// 006a757a  5e                   pop esi
// 006a757b  59                   pop ecx
// 006a757c  c20400               ret 4
// 006a757f  8b5720               mov edx, dword ptr [edi + 0x20]
// 006a7582  8d442408             lea eax, [esp + 8]
// 006a7586  50                   push eax
// 006a7587  8d4c2414             lea ecx, [esp + 0x14]
// 006a758b  51                   push ecx
// 006a758c  68b0000000           push 0xb0
// 006a7591  52                   push edx
// 006a7592  ff15142e8000         call dword ptr [0x802e14]
// 006a7598  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a759c  3b442408             cmp eax, dword ptr [esp + 8]
// 006a75a0  7416                 je 0x6a75b8
// 006a75a2  81fe22e10000         cmp esi, 0xe122
// 006a75a8  74ca                 je 0x6a7574
// 006a75aa  8bcf                 mov ecx, edi
// 006a75ac  e8594a1100           call 0x7bc00a
// 006a75b1  a900080008           test eax, 0x8000800
// 006a75b6  74bc                 je 0x6a7574
// 006a75b8  5f                   pop edi
// 006a75b9  33c0                 xor eax, eax
// 006a75bb  5e                   pop esi
// 006a75bc  59                   pop ecx
// 006a75bd  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?IsCommandEnabled@CXTPEdit@@IAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
