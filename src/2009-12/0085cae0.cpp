// roc 2009-12 0085cae0  unit: CXTPDockingPane  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085cae0
//
// 0085cae0  56                   push esi
// 0085cae1  8bf1                 mov esi, ecx
// 0085cae3  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0085cae9  83f8ff               cmp eax, -1
// 0085caec  7535                 jne 0x85cb23
// 0085caee  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 0085caf4  85c0                 test eax, eax
// 0085caf6  7414                 je 0x85cb0c
// 0085caf8  6a00                 push 0
// 0085cafa  6a00                 push 0
// 0085cafc  68b9280000           push 0x28b9
// 0085cb01  50                   push eax
// 0085cb02  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0085cb08  85c0                 test eax, eax
// 0085cb0a  7517                 jne 0x85cb23
// 0085cb0c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0085cb12  2507000080           and eax, 0x80000007
// 0085cb17  7905                 jns 0x85cb1e
// 0085cb19  48                   dec eax
// 0085cb1a  83c8f8               or eax, 0xfffffff8
// 0085cb1d  40                   inc eax
// 0085cb1e  0500000001           add eax, 0x1000000
// 0085cb23  5e                   pop esi
// 0085cb24  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetItemColor@CXTPDockingPane@@UBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
