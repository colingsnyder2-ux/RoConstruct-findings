// roc 2008-06 0076a5d0  unit: CXTPDockingPaneContext  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076a5d0
//
// 0076a5d0  83ec10               sub esp, 0x10
// 0076a5d3  55                   push ebp
// 0076a5d4  56                   push esi
// 0076a5d5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0076a5d9  33ed                 xor ebp, ebp
// 0076a5db  57                   push edi
// 0076a5dc  8bf9                 mov edi, ecx
// 0076a5de  3bf5                 cmp esi, ebp
// 0076a5e0  7405                 je 0x76a5e7
// 0076a5e2  396e20               cmp dword ptr [esi + 0x20], ebp
// 0076a5e5  7571                 jne 0x76a658
// 0076a5e7  8b871c010000         mov eax, dword ptr [edi + 0x11c]
// 0076a5ed  53                   push ebx
// 0076a5ee  8b98cc000000         mov ebx, dword ptr [eax + 0xcc]
// 0076a5f4  896c2410             mov dword ptr [esp + 0x10], ebp
// 0076a5f8  896c2414             mov dword ptr [esp + 0x14], ebp
// 0076a5fc  896c2418             mov dword ptr [esp + 0x18], ebp
// 0076a600  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0076a604  e81d63f3ff           call 0x6a0926
// 0076a609  68007f0000           push 0x7f00
// 0076a60e  55                   push ebp
// 0076a60f  ff15d02d8000         call dword ptr [0x802dd0]
// 0076a615  8b2e                 mov ebp, dword ptr [esi]
// 0076a617  6a00                 push 0
// 0076a619  6a00                 push 0
// 0076a61b  53                   push ebx
// 0076a61c  8d4c241c             lea ecx, [esp + 0x1c]
// 0076a620  51                   push ecx
// 0076a621  6800000080           push 0x80000000
// 0076a626  6a00                 push 0
// 0076a628  6a00                 push 0
// 0076a62a  6a00                 push 0
// 0076a62c  50                   push eax
// 0076a62d  6a00                 push 0
// 0076a62f  e85869f3ff           call 0x6a0f8c
// 0076a634  8b5560               mov edx, dword ptr [ebp + 0x60]
// 0076a637  50                   push eax
// 0076a638  6888000800           push 0x80088
// 0076a63d  8bce                 mov ecx, esi
// 0076a63f  ffd2                 call edx
// 0076a641  8b87ac000000         mov eax, dword ptr [edi + 0xac]
// 0076a647  5b                   pop ebx
// 0076a648  85c0                 test eax, eax
// 0076a64a  740c                 je 0x76a658
// 0076a64c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0076a64f  6a02                 push 2
// 0076a651  6a64                 push 0x64
// 0076a653  6a00                 push 0
// 0076a655  51                   push ecx
// 0076a656  ffd0                 call eax
// 0076a658  5f                   pop edi
// 0076a659  5e                   pop esi
// 0076a65a  5d                   pop ebp
// 0076a65b  83c410               add esp, 0x10
// 0076a65e  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneContext.cpp (function ?CreateContextWindow@CXTPDockingPaneContext@@IAEXPAVCXTPDockingPaneContextAlphaWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp
