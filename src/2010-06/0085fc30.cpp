// roc 2010-06 0085fc30  unit: CXTPDockingPaneAutoHidePanel  size: 444 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085fc30
//
// 0085fc30  6aff                 push -1
// 0085fc32  68688a9b00           push 0x9b8a68
// 0085fc37  64a100000000         mov eax, dword ptr fs:[0]
// 0085fc3d  50                   push eax
// 0085fc3e  83ec34               sub esp, 0x34
// 0085fc41  53                   push ebx
// 0085fc42  55                   push ebp
// 0085fc43  56                   push esi
// 0085fc44  57                   push edi
// 0085fc45  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085fc4a  33c4                 xor eax, esp
// 0085fc4c  50                   push eax
// 0085fc4d  8d442448             lea eax, [esp + 0x48]
// 0085fc51  64a300000000         mov dword ptr fs:[0], eax
// 0085fc57  8bf9                 mov edi, ecx
// 0085fc59  8b4754               mov eax, dword ptr [edi + 0x54]
// 0085fc5c  8b5014               mov edx, dword ptr [eax + 0x14]
// 0085fc5f  8d4f54               lea ecx, [edi + 0x54]
// 0085fc62  ffd2                 call edx
// 0085fc64  85c0                 test eax, eax
// 0085fc66  7418                 je 0x85fc80
// 0085fc68  837f2000             cmp dword ptr [edi + 0x20], 0
// 0085fc6c  0f8451010000         je 0x85fdc3
// 0085fc72  8b07                 mov eax, dword ptr [edi]
// 0085fc74  8b5068               mov edx, dword ptr [eax + 0x68]
// 0085fc77  8bcf                 mov ecx, edi
// 0085fc79  ffd2                 call edx
// 0085fc7b  e943010000           jmp 0x85fdc3
// 0085fc80  837f2000             cmp dword ptr [edi + 0x20], 0
// 0085fc84  7511                 jne 0x85fc97
// 0085fc86  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0085fc8a  8b07                 mov eax, dword ptr [edi]
// 0085fc8c  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 0085fc92  51                   push ecx
// 0085fc93  8bcf                 mov ecx, edi
// 0085fc95  ffd2                 call edx
// 0085fc97  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0085fc9b  56                   push esi
// 0085fc9c  8d9fb8000000         lea ebx, [edi + 0xb8]
// 0085fca2  53                   push ebx
// 0085fca3  ff1518ba9e00         call dword ptr [0x9eba18]
// 0085fca9  85c0                 test eax, eax
// 0085fcab  751e                 jne 0x85fccb
// 0085fcad  50                   push eax
// 0085fcae  8bcf                 mov ecx, edi
// 0085fcb0  e89bf4ffff           call 0x85f150
// 0085fcb5  8b06                 mov eax, dword ptr [esi]
// 0085fcb7  8903                 mov dword ptr [ebx], eax
// 0085fcb9  8b4e04               mov ecx, dword ptr [esi + 4]
// 0085fcbc  894b04               mov dword ptr [ebx + 4], ecx
// 0085fcbf  8b5608               mov edx, dword ptr [esi + 8]
// 0085fcc2  895308               mov dword ptr [ebx + 8], edx
// 0085fcc5  8b460c               mov eax, dword ptr [esi + 0xc]
// 0085fcc8  89430c               mov dword ptr [ebx + 0xc], eax
// 0085fccb  8bcf                 mov ecx, edi
// 0085fccd  e88ee0ffff           call 0x85dd60
// 0085fcd2  8b4e08               mov ecx, dword ptr [esi + 8]
// 0085fcd5  8b560c               mov edx, dword ptr [esi + 0xc]
// 0085fcd8  8b2e                 mov ebp, dword ptr [esi]
// 0085fcda  8b5e04               mov ebx, dword ptr [esi + 4]
// 0085fcdd  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0085fce1  8b8fac000000         mov ecx, dword ptr [edi + 0xac]
// 0085fce7  89542430             mov dword ptr [esp + 0x30], edx
// 0085fceb  83f903               cmp ecx, 3
// 0085fcee  772b                 ja 0x85fd1b
// 0085fcf0  ff248ddcfd8500       jmp dword ptr [ecx*4 + 0x85fddc]
// 0085fcf7  0106                 add dword ptr [esi], eax
// 0085fcf9  8b06                 mov eax, dword ptr [esi]
// 0085fcfb  8944242c             mov dword ptr [esp + 0x2c], eax
// 0085fcff  eb1a                 jmp 0x85fd1b
// 0085fd01  294608               sub dword ptr [esi + 8], eax
// 0085fd04  8b6e08               mov ebp, dword ptr [esi + 8]
// 0085fd07  eb12                 jmp 0x85fd1b
// 0085fd09  014604               add dword ptr [esi + 4], eax
// 0085fd0c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0085fd0f  894c2430             mov dword ptr [esp + 0x30], ecx
// 0085fd13  eb06                 jmp 0x85fd1b
// 0085fd15  29460c               sub dword ptr [esi + 0xc], eax
// 0085fd18  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0085fd1b  57                   push edi
// 0085fd1c  8d4c2438             lea ecx, [esp + 0x38]
// 0085fd20  e80f8bf4ff           call 0x7a8834
// 0085fd25  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0085fd29  8b742430             mov esi, dword ptr [esp + 0x30]
// 0085fd2d  8bc3                 mov eax, ebx
// 0085fd2f  f7d8                 neg eax
// 0085fd31  50                   push eax
// 0085fd32  8bcd                 mov ecx, ebp
// 0085fd34  f7d9                 neg ecx
// 0085fd36  51                   push ecx
// 0085fd37  8d44241c             lea eax, [esp + 0x1c]
// 0085fd3b  50                   push eax
// 0085fd3c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0085fd44  896c2420             mov dword ptr [esp + 0x20], ebp
// 0085fd48  895c2424             mov dword ptr [esp + 0x24], ebx
// 0085fd4c  89542428             mov dword ptr [esp + 0x28], edx
// 0085fd50  8974242c             mov dword ptr [esp + 0x2c], esi
// 0085fd54  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0085fd5a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085fd5e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0085fd62  83ec10               sub esp, 0x10
// 0085fd65  8bc4                 mov eax, esp
// 0085fd67  8908                 mov dword ptr [eax], ecx
// 0085fd69  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0085fd6d  895004               mov dword ptr [eax + 4], edx
// 0085fd70  8b542430             mov edx, dword ptr [esp + 0x30]
// 0085fd74  894808               mov dword ptr [eax + 8], ecx
// 0085fd77  89500c               mov dword ptr [eax + 0xc], edx
// 0085fd7a  8d442444             lea eax, [esp + 0x44]
// 0085fd7e  50                   push eax
// 0085fd7f  8bcf                 mov ecx, edi
// 0085fd81  e8eafaffff           call 0x85f870
// 0085fd86  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0085fd8a  833900               cmp dword ptr [ecx], 0
// 0085fd8d  7423                 je 0x85fdb2
// 0085fd8f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0085fd93  6a01                 push 1
// 0085fd95  2bf3                 sub esi, ebx
// 0085fd97  56                   push esi
// 0085fd98  2bc5                 sub eax, ebp
// 0085fd9a  50                   push eax
// 0085fd9b  53                   push ebx
// 0085fd9c  55                   push ebp
// 0085fd9d  8bcf                 mov ecx, edi
// 0085fd9f  e8ce7ff4ff           call 0x7a7d72
// 0085fda4  8b5720               mov edx, dword ptr [edi + 0x20]
// 0085fda7  6a00                 push 0
// 0085fda9  6a00                 push 0
// 0085fdab  52                   push edx
// 0085fdac  ff1578ba9e00         call dword ptr [0x9eba78]
// 0085fdb2  8d4c2434             lea ecx, [esp + 0x34]
// 0085fdb6  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0085fdbe  e86b8af4ff           call 0x7a882e
// 0085fdc3  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0085fdc7  64890d00000000       mov dword ptr fs:[0], ecx
// 0085fdce  59                   pop ecx
// 0085fdcf  5f                   pop edi
// 0085fdd0  5e                   pop esi
// 0085fdd1  5d                   pop ebp
// 0085fdd2  5b                   pop ebx
// 0085fdd3  83c440               add esp, 0x40
// 0085fdd6  c20c00               ret 0xc
// 0085fdd9  8d4900               lea ecx, [ecx]
// 0085fddc  f7fc                 idiv esp
// 0085fdde  8500                 test dword ptr [eax], eax
// 0085fde0  01fd                 add ebp, edi
// 0085fde2  8500                 test dword ptr [eax], eax
// 0085fde4  09fd                 or ebp, edi
// 0085fde6  8500                 test dword ptr [eax], eax
// copied from an identical function in another client (function ?OnSizeParentEx@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@AAVCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp