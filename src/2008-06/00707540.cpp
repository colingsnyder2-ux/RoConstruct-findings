// roc 2008-06 00707540  unit: CXTPDockingPane  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00707540
//
// 00707540  56                   push esi
// 00707541  8bf1                 mov esi, ecx
// 00707543  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00707549  83f8ff               cmp eax, -1
// 0070754c  7535                 jne 0x707583
// 0070754e  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00707554  85c0                 test eax, eax
// 00707556  7414                 je 0x70756c
// 00707558  6a00                 push 0
// 0070755a  6a00                 push 0
// 0070755c  68b9280000           push 0x28b9
// 00707561  50                   push eax
// 00707562  ff15142e8000         call dword ptr [0x802e14]
// 00707568  85c0                 test eax, eax
// 0070756a  7517                 jne 0x707583
// 0070756c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00707572  2507000080           and eax, 0x80000007
// 00707577  7905                 jns 0x70757e
// 00707579  48                   dec eax
// 0070757a  83c8f8               or eax, 0xfffffff8
// 0070757d  40                   inc eax
// 0070757e  0500000001           add eax, 0x1000000
// 00707583  5e                   pop esi
// 00707584  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetItemColor@CXTPDockingPane@@UBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
