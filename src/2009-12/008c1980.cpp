// roc 2009-12 008c1980  unit: CXTPImageEditorDlg::CDlgToolBar  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c1980
//
// 008c1980  6aff                 push -1
// 008c1982  68e83e9600           push 0x963ee8
// 008c1987  64a100000000         mov eax, dword ptr fs:[0]
// 008c198d  50                   push eax
// 008c198e  83ec10               sub esp, 0x10
// 008c1991  53                   push ebx
// 008c1992  55                   push ebp
// 008c1993  56                   push esi
// 008c1994  57                   push edi
// 008c1995  a10052b600           mov eax, dword ptr [0xb65200]
// 008c199a  33c4                 xor eax, esp
// 008c199c  50                   push eax
// 008c199d  8d442424             lea eax, [esp + 0x24]
// 008c19a1  64a300000000         mov dword ptr fs:[0], eax
// 008c19a7  8bf1                 mov esi, ecx
// 008c19a9  33db                 xor ebx, ebx
// 008c19ab  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008c19af  c7442418148aa000     mov dword ptr [esp + 0x18], 0xa08a14
// 008c19b7  895c2420             mov dword ptr [esp + 0x20], ebx
// 008c19bb  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c19be  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c19c1  50                   push eax
// 008c19c2  51                   push ecx
// 008c19c3  8d4c2420             lea ecx, [esp + 0x20]
// 008c19c7  895c2434             mov dword ptr [esp + 0x34], ebx
// 008c19cb  e830f7ffff           call 0x8c1100
// 008c19d0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008c19d4  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008c19d7  52                   push edx
// 008c19d8  50                   push eax
// 008c19d9  e81a4c0600           call 0x9265f8
// 008c19de  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008c19e1  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c19e4  68fffeff00           push 0xfffeff
// 008c19e9  51                   push ecx
// 008c19ea  52                   push edx
// 008c19eb  53                   push ebx
// 008c19ec  8d7e68               lea edi, [esi + 0x68]
// 008c19ef  53                   push ebx
// 008c19f0  8bcf                 mov ecx, edi
// 008c19f2  8be8                 mov ebp, eax
// 008c19f4  e89d4a0600           call 0x926496
// 008c19f9  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008c19fc  3bc3                 cmp eax, ebx
// 008c19fe  7420                 je 0x8c1a20
// 008c1a00  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 008c1a03  53                   push ebx
// 008c1a04  53                   push ebx
// 008c1a05  50                   push eax
// 008c1a06  8b4658               mov eax, dword ptr [esi + 0x58]
// 008c1a09  50                   push eax
// 008c1a0a  51                   push ecx
// 008c1a0b  83ec08               sub esp, 8
// 008c1a0e  8bc4                 mov eax, esp
// 008c1a10  8bcf                 mov ecx, edi
// 008c1a12  89642430             mov dword ptr [esp + 0x30], esp
// 008c1a16  8918                 mov dword ptr [eax], ebx
// 008c1a18  895804               mov dword ptr [eax + 4], ebx
// 008c1a1b  e840e8f9ff           call 0x860260
// 008c1a20  8b542438             mov edx, dword ptr [esp + 0x38]
// 008c1a24  8b442434             mov eax, dword ptr [esp + 0x34]
// 008c1a28  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008c1a2b  52                   push edx
// 008c1a2c  50                   push eax
// 008c1a2d  51                   push ecx
// 008c1a2e  ff1518b19800         call dword ptr [0x98b118]
// 008c1a34  8bf8                 mov edi, eax
// 008c1a36  3beb                 cmp ebp, ebx
// 008c1a38  7403                 je 0x8c1a3d
// 008c1a3a  8b5d04               mov ebx, dword ptr [ebp + 4]
// 008c1a3d  8b566c               mov edx, dword ptr [esi + 0x6c]
// 008c1a40  53                   push ebx
// 008c1a41  52                   push edx
// 008c1a42  e8b14b0600           call 0x9265f8
// 008c1a47  8d4c2418             lea ecx, [esp + 0x18]
// 008c1a4b  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008c1a53  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 008c1a5b  e8d0d7b4ff           call 0x40f230
// 008c1a60  8bc7                 mov eax, edi
// 008c1a62  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008c1a66  64890d00000000       mov dword ptr fs:[0], ecx
// 008c1a6d  59                   pop ecx
// 008c1a6e  5f                   pop edi
// 008c1a6f  5e                   pop esi
// 008c1a70  5d                   pop ebp
// 008c1a71  5b                   pop ebx
// 008c1a72  83c41c               add esp, 0x1c
// 008c1a75  c20800               ret 8
// copied from an identical function in another client (function ?GetPicturePixel@CXTPImageEditorPicture@@QAEKVCPoint@@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPImageEditor.cpp