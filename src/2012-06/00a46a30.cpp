// from server: 100% by auto
// roc 2012-06 00a46a30  unit: CXTPDockingPaneContext  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a46a30
//
// 00a46a30  83ec10               sub esp, 0x10
// 00a46a33  56                   push esi
// 00a46a34  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a46a38  57                   push edi
// 00a46a39  8d442408             lea eax, [esp + 8]
// 00a46a3d  56                   push esi
// 00a46a3e  50                   push eax
// 00a46a3f  e88c3bf8ff           call 0x9ca5d0
// 00a46a44  8bc8                 mov ecx, eax
// 00a46a46  e8e536f8ff           call 0x9ca130
// 00a46a4b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a46a4f  2b4604               sub eax, dword ptr [esi + 4]
// 00a46a52  8b3df43ab200         mov edi, dword ptr [0xb23af4]
// 00a46a58  83f80a               cmp eax, 0xa
// 00a46a5b  7d09                 jge 0xa46a66
// 00a46a5d  83c0f6               add eax, -0xa
// 00a46a60  50                   push eax
// 00a46a61  6a00                 push 0
// 00a46a63  56                   push esi
// 00a46a64  ffd7                 call edi
// 00a46a66  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00a46a69  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a46a6d  8bd1                 mov edx, ecx
// 00a46a6f  2bd0                 sub edx, eax
// 00a46a71  83fa0a               cmp edx, 0xa
// 00a46a74  7d0b                 jge 0xa46a81
// 00a46a76  2bc1                 sub eax, ecx
// 00a46a78  83c00a               add eax, 0xa
// 00a46a7b  50                   push eax
// 00a46a7c  6a00                 push 0
// 00a46a7e  56                   push esi
// 00a46a7f  ffd7                 call edi
// 00a46a81  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a46a85  2b06                 sub eax, dword ptr [esi]
// 00a46a87  83f80a               cmp eax, 0xa
// 00a46a8a  7d09                 jge 0xa46a95
// 00a46a8c  6a00                 push 0
// 00a46a8e  83c0f6               add eax, -0xa
// 00a46a91  50                   push eax
// 00a46a92  56                   push esi
// 00a46a93  ffd7                 call edi
// 00a46a95  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a46a98  8b442408             mov eax, dword ptr [esp + 8]
// 00a46a9c  8bd1                 mov edx, ecx
// 00a46a9e  2bd0                 sub edx, eax
// 00a46aa0  83fa0a               cmp edx, 0xa
// 00a46aa3  7d0b                 jge 0xa46ab0
// 00a46aa5  2bc1                 sub eax, ecx
// 00a46aa7  6a00                 push 0
// 00a46aa9  83c00a               add eax, 0xa
// 00a46aac  50                   push eax
// 00a46aad  56                   push esi
// 00a46aae  ffd7                 call edi
// 00a46ab0  5f                   pop edi
// 00a46ab1  5e                   pop esi
// 00a46ab2  83c410               add esp, 0x10
// 00a46ab5  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneContext.cpp (function ?EnsureVisible@CXTPDockingPaneContext@@SAXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneContext.cpp
