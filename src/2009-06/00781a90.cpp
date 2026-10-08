// roc 2009-06 00781a90  unit: CXTPDockingPane  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00781a90
//
// 00781a90  56                   push esi
// 00781a91  8bf1                 mov esi, ecx
// 00781a93  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00781a99  83f8ff               cmp eax, -1
// 00781a9c  7535                 jne 0x781ad3
// 00781a9e  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00781aa4  85c0                 test eax, eax
// 00781aa6  7414                 je 0x781abc
// 00781aa8  6a00                 push 0
// 00781aaa  6a00                 push 0
// 00781aac  68b9280000           push 0x28b9
// 00781ab1  50                   push eax
// 00781ab2  ff1590ee8900         call dword ptr [0x89ee90]
// 00781ab8  85c0                 test eax, eax
// 00781aba  7517                 jne 0x781ad3
// 00781abc  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00781ac2  2507000080           and eax, 0x80000007
// 00781ac7  7905                 jns 0x781ace
// 00781ac9  48                   dec eax
// 00781aca  83c8f8               or eax, 0xfffffff8
// 00781acd  40                   inc eax
// 00781ace  0500000001           add eax, 0x1000000
// 00781ad3  5e                   pop esi
// 00781ad4  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetItemColor@CXTPDockingPane@@UBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
