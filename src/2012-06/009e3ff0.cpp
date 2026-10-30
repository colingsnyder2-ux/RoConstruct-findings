// roc 2012-06 009e3ff0  unit: CXTPDockingPane  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e3ff0
//
// 009e3ff0  56                   push esi
// 009e3ff1  8bf1                 mov esi, ecx
// 009e3ff3  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 009e3ff9  83f8ff               cmp eax, -1
// 009e3ffc  7535                 jne 0x9e4033
// 009e3ffe  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 009e4004  85c0                 test eax, eax
// 009e4006  7414                 je 0x9e401c
// 009e4008  6a00                 push 0
// 009e400a  6a00                 push 0
// 009e400c  68b9280000           push 0x28b9
// 009e4011  50                   push eax
// 009e4012  ff15043cb200         call dword ptr [0xb23c04]
// 009e4018  85c0                 test eax, eax
// 009e401a  7517                 jne 0x9e4033
// 009e401c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 009e4022  2507000080           and eax, 0x80000007
// 009e4027  7905                 jns 0x9e402e
// 009e4029  48                   dec eax
// 009e402a  83c8f8               or eax, 0xfffffff8
// 009e402d  40                   inc eax
// 009e402e  0500000001           add eax, 0x1000000
// 009e4033  5e                   pop esi
// 009e4034  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetItemColor@CXTPDockingPane@@UBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
