// roc 2010-06 00810ab0  unit: CXTPDockingPane  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00810ab0
//
// 00810ab0  56                   push esi
// 00810ab1  8bf1                 mov esi, ecx
// 00810ab3  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00810ab9  83f8ff               cmp eax, -1
// 00810abc  7535                 jne 0x810af3
// 00810abe  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00810ac4  85c0                 test eax, eax
// 00810ac6  7414                 je 0x810adc
// 00810ac8  6a00                 push 0
// 00810aca  6a00                 push 0
// 00810acc  68b9280000           push 0x28b9
// 00810ad1  50                   push eax
// 00810ad2  ff1554ba9e00         call dword ptr [0x9eba54]
// 00810ad8  85c0                 test eax, eax
// 00810ada  7517                 jne 0x810af3
// 00810adc  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00810ae2  2507000080           and eax, 0x80000007
// 00810ae7  7905                 jns 0x810aee
// 00810ae9  48                   dec eax
// 00810aea  83c8f8               or eax, 0xfffffff8
// 00810aed  40                   inc eax
// 00810aee  0500000001           add eax, 0x1000000
// 00810af3  5e                   pop esi
// 00810af4  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetItemColor@CXTPDockingPane@@UBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
