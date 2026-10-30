// from server: 100% by auto
// roc 2007-08 0068f540  unit: CXTPDockingPane  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068f540
//
// 0068f540  56                   push esi
// 0068f541  8bf1                 mov esi, ecx
// 0068f543  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0068f549  83f8ff               cmp eax, -1
// 0068f54c  7535                 jne 0x68f583
// 0068f54e  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0068f554  85c0                 test eax, eax
// 0068f556  7414                 je 0x68f56c
// 0068f558  6a00                 push 0
// 0068f55a  6a00                 push 0
// 0068f55c  68b9280000           push 0x28b9
// 0068f561  50                   push eax
// 0068f562  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0068f568  85c0                 test eax, eax
// 0068f56a  7517                 jne 0x68f583
// 0068f56c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0068f572  2507000080           and eax, 0x80000007
// 0068f577  7905                 jns 0x68f57e
// 0068f579  48                   dec eax
// 0068f57a  83c8f8               or eax, 0xfffffff8
// 0068f57d  40                   inc eax
// 0068f57e  0500000001           add eax, 0x1000000
// 0068f583  5e                   pop esi
// 0068f584  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPane.cpp (function ?GetItemColor@CXTPDockingPane@@UBEKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPane.cpp
