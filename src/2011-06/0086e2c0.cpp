// roc 2011-06 0086e2c0  unit: CXTPDockingPane  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086e2c0
//
// 0086e2c0  56                   push esi
// 0086e2c1  8bf1                 mov esi, ecx
// 0086e2c3  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0086e2c9  83f8ff               cmp eax, -1
// 0086e2cc  7535                 jne 0x86e303
// 0086e2ce  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0086e2d4  85c0                 test eax, eax
// 0086e2d6  7414                 je 0x86e2ec
// 0086e2d8  6a00                 push 0
// 0086e2da  6a00                 push 0
// 0086e2dc  68b9280000           push 0x28b9
// 0086e2e1  50                   push eax
// 0086e2e2  ff15c019a400         call dword ptr [0xa419c0]
// 0086e2e8  85c0                 test eax, eax
// 0086e2ea  7517                 jne 0x86e303
// 0086e2ec  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0086e2f2  2507000080           and eax, 0x80000007
// 0086e2f7  7905                 jns 0x86e2fe
// 0086e2f9  48                   dec eax
// 0086e2fa  83c8f8               or eax, 0xfffffff8
// 0086e2fd  40                   inc eax
// 0086e2fe  0500000001           add eax, 0x1000000
// 0086e303  5e                   pop esi
// 0086e304  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetItemColor@CXTPDockingPane@@UBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
