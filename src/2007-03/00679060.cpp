// roc 2007-03 00679060  unit: seg_00670000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00679060
//
// 00679060  56                   push esi
// 00679061  8bf1                 mov esi, ecx
// 00679063  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00679069  83f8ff               cmp eax, -1
// 0067906c  7535                 jne 0x6790a3
// 0067906e  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00679074  85c0                 test eax, eax
// 00679076  7414                 je 0x67908c
// 00679078  6a00                 push 0
// 0067907a  6a00                 push 0
// 0067907c  68b9280000           push 0x28b9
// 00679081  50                   push eax
// 00679082  ff1550ee7700         call dword ptr [0x77ee50]
// 00679088  85c0                 test eax, eax
// 0067908a  7517                 jne 0x6790a3
// 0067908c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00679092  2507000080           and eax, 0x80000007
// 00679097  7905                 jns 0x67909e
// 00679099  48                   dec eax
// 0067909a  83c8f8               or eax, 0xfffffff8
// 0067909d  40                   inc eax
// 0067909e  0500000001           add eax, 0x1000000
// 006790a3  5e                   pop esi
// 006790a4  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetItemColor@CXTPDockingPane@@UBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
