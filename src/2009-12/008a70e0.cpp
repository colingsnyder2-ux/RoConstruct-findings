// roc 2009-12 008a70e0  unit: CXTPReportHeaderDragWnd  size: 678 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a70e0
//
// 008a70e0  83ec58               sub esp, 0x58
// 008a70e3  53                   push ebx
// 008a70e4  8bd9                 mov ebx, ecx
// 008a70e6  8b4354               mov eax, dword ptr [ebx + 0x54]
// 008a70e9  55                   push ebp
// 008a70ea  33ed                 xor ebp, ebp
// 008a70ec  895c2408             mov dword ptr [esp + 8], ebx
// 008a70f0  3bc5                 cmp eax, ebp
// 008a70f2  0f8486020000         je 0x8a737e
// 008a70f8  396824               cmp dword ptr [eax + 0x24], ebp
// 008a70fb  0f847d020000         je 0x8a737e
// 008a7101  8b4860               mov ecx, dword ptr [eax + 0x60]
// 008a7104  56                   push esi
// 008a7105  8b7024               mov esi, dword ptr [eax + 0x24]
// 008a7108  894c2444             mov dword ptr [esp + 0x44], ecx
// 008a710c  8b5064               mov edx, dword ptr [eax + 0x64]
// 008a710f  89542448             mov dword ptr [esp + 0x48], edx
// 008a7113  8b4868               mov ecx, dword ptr [eax + 0x68]
// 008a7116  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008a711a  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008a711d  57                   push edi
// 008a711e  8d442448             lea eax, [esp + 0x48]
// 008a7122  50                   push eax
// 008a7123  8bce                 mov ecx, esi
// 008a7125  89542458             mov dword ptr [esp + 0x58], edx
// 008a7129  e8ccccf4ff           call 0x7f3dfa
// 008a712e  8b3d70cc9800         mov edi, dword ptr [0x98cc70]
// 008a7134  8d4c2458             lea ecx, [esp + 0x58]
// 008a7138  896c2458             mov dword ptr [esp + 0x58], ebp
// 008a713c  896c245c             mov dword ptr [esp + 0x5c], ebp
// 008a7140  896c2460             mov dword ptr [esp + 0x60], ebp
// 008a7144  896c2464             mov dword ptr [esp + 0x64], ebp
// 008a7148  896c2438             mov dword ptr [esp + 0x38], ebp
// 008a714c  896c243c             mov dword ptr [esp + 0x3c], ebp
// 008a7150  896c2440             mov dword ptr [esp + 0x40], ebp
// 008a7154  896c2444             mov dword ptr [esp + 0x44], ebp
// 008a7158  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a715b  51                   push ecx
// 008a715c  52                   push edx
// 008a715d  ffd7                 call edi
// 008a715f  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 008a7162  8d442438             lea eax, [esp + 0x38]
// 008a7166  50                   push eax
// 008a7167  51                   push ecx
// 008a7168  ffd7                 call edi
// 008a716a  8d542414             lea edx, [esp + 0x14]
// 008a716e  52                   push edx
// 008a716f  896c2418             mov dword ptr [esp + 0x18], ebp
// 008a7173  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008a7177  ff1538cc9800         call dword ptr [0x98cc38]
// 008a717d  85c0                 test eax, eax
// 008a717f  0f84f7010000         je 0x8a737c
// 008a7185  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a7189  3b44244c             cmp eax, dword ptr [esp + 0x4c]
// 008a718d  0f8ce9010000         jl 0x8a737c
// 008a7193  3b442454             cmp eax, dword ptr [esp + 0x54]
// 008a7197  0f8fdf010000         jg 0x8a737c
// 008a719d  8bce                 mov ecx, esi
// 008a719f  e8d4f20700           call 0x926478
// 008a71a4  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 008a71a8  8bd8                 mov ebx, eax
// 008a71aa  81e300004000         and ebx, 0x400000
// 008a71b0  8b442460             mov eax, dword ptr [esp + 0x60]
// 008a71b4  7408                 je 0x8a71be
// 008a71b6  8bcf                 mov ecx, edi
// 008a71b8  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 008a71bc  eb06                 jmp 0x8a71c4
// 008a71be  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008a71c2  2bc8                 sub ecx, eax
// 008a71c4  3bcd                 cmp ecx, ebp
// 008a71c6  7e72                 jle 0x8a723a
// 008a71c8  b867666666           mov eax, 0x66666667
// 008a71cd  f7e9                 imul ecx
// 008a71cf  c1fa02               sar edx, 2
// 008a71d2  8bc2                 mov eax, edx
// 008a71d4  c1e81f               shr eax, 0x1f
// 008a71d7  03c2                 add eax, edx
// 008a71d9  83f807               cmp eax, 7
// 008a71dc  ba07000000           mov edx, 7
// 008a71e1  7f02                 jg 0x8a71e5
// 008a71e3  8bd0                 mov edx, eax
// 008a71e5  8b1de863b600         mov ebx, dword ptr [0xb663e8]
// 008a71eb  3bd3                 cmp edx, ebx
// 008a71ed  7e0c                 jle 0x8a71fb
// 008a71ef  83f807               cmp eax, 7
// 008a71f2  bb07000000           mov ebx, 7
// 008a71f7  7f02                 jg 0x8a71fb
// 008a71f9  8bd8                 mov ebx, eax
// 008a71fb  b864000000           mov eax, 0x64
// 008a7200  2bc1                 sub eax, ecx
// 008a7202  83f80a               cmp eax, 0xa
// 008a7205  bf0a000000           mov edi, 0xa
// 008a720a  7c02                 jl 0x8a720e
// 008a720c  8bf8                 mov edi, eax
// 008a720e  6a17                 push 0x17
// 008a7210  8d442420             lea eax, [esp + 0x20]
// 008a7214  50                   push eax
// 008a7215  55                   push ebp
// 008a7216  8bce                 mov ecx, esi
// 008a7218  e865f40700           call 0x926682
// 008a721d  85c0                 test eax, eax
// 008a721f  0f8457010000         je 0x8a737c
// 008a7225  8b442430             mov eax, dword ptr [esp + 0x30]
// 008a7229  3b442428             cmp eax, dword ptr [esp + 0x28]
// 008a722d  0f8d49010000         jge 0x8a737c
// 008a7233  03c3                 add eax, ebx
// 008a7235  e9df000000           jmp 0x8a7319
// 008a723a  3bdd                 cmp ebx, ebp
// 008a723c  7402                 je 0x8a7240
// 008a723e  8bf8                 mov edi, eax
// 008a7240  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 008a7246  3bc5                 cmp eax, ebp
// 008a7248  7450                 je 0x8a729a
// 008a724a  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 008a7250  3bcd                 cmp ecx, ebp
// 008a7252  7446                 je 0x8a729a
// 008a7254  48                   dec eax
// 008a7255  50                   push eax
// 008a7256  e8a562fcff           call 0x86d500
// 008a725b  3bc5                 cmp eax, ebp
// 008a725d  743b                 je 0x8a729a
// 008a725f  8d4c241c             lea ecx, [esp + 0x1c]
// 008a7263  51                   push ecx
// 008a7264  8bc8                 mov ecx, eax
// 008a7266  e86508f8ff           call 0x827ad0
// 008a726b  8d54241c             lea edx, [esp + 0x1c]
// 008a726f  52                   push edx
// 008a7270  8bce                 mov ecx, esi
// 008a7272  e883cbf4ff           call 0x7f3dfa
// 008a7277  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008a727b  394c2438             cmp dword ptr [esp + 0x38], ecx
// 008a727f  7d19                 jge 0x8a729a
// 008a7281  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 008a7285  8bc1                 mov eax, ecx
// 008a7287  2bc5                 sub eax, ebp
// 008a7289  99                   cdq 
// 008a728a  2bc2                 sub eax, edx
// 008a728c  d1f8                 sar eax, 1
// 008a728e  03c5                 add eax, ebp
// 008a7290  33ed                 xor ebp, ebp
// 008a7292  39442414             cmp dword ptr [esp + 0x14], eax
// 008a7296  7e02                 jle 0x8a729a
// 008a7298  8bf9                 mov edi, ecx
// 008a729a  3bdd                 cmp ebx, ebp
// 008a729c  740a                 je 0x8a72a8
// 008a729e  8b442440             mov eax, dword ptr [esp + 0x40]
// 008a72a2  2bc7                 sub eax, edi
// 008a72a4  8bf8                 mov edi, eax
// 008a72a6  eb04                 jmp 0x8a72ac
// 008a72a8  2b7c2438             sub edi, dword ptr [esp + 0x38]
// 008a72ac  3bfd                 cmp edi, ebp
// 008a72ae  0f8ec8000000         jle 0x8a737c
// 008a72b4  b867666666           mov eax, 0x66666667
// 008a72b9  f7ef                 imul edi
// 008a72bb  c1fa02               sar edx, 2
// 008a72be  8bc2                 mov eax, edx
// 008a72c0  c1e81f               shr eax, 0x1f
// 008a72c3  03c2                 add eax, edx
// 008a72c5  83f807               cmp eax, 7
// 008a72c8  b907000000           mov ecx, 7
// 008a72cd  7f02                 jg 0x8a72d1
// 008a72cf  8bc8                 mov ecx, eax
// 008a72d1  8b1de863b600         mov ebx, dword ptr [0xb663e8]
// 008a72d7  3bcb                 cmp ecx, ebx
// 008a72d9  7e0c                 jle 0x8a72e7
// 008a72db  83f807               cmp eax, 7
// 008a72de  bb07000000           mov ebx, 7
// 008a72e3  7f02                 jg 0x8a72e7
// 008a72e5  8bd8                 mov ebx, eax
// 008a72e7  b864000000           mov eax, 0x64
// 008a72ec  2bc7                 sub eax, edi
// 008a72ee  83f80a               cmp eax, 0xa
// 008a72f1  bf0a000000           mov edi, 0xa
// 008a72f6  7c02                 jl 0x8a72fa
// 008a72f8  8bf8                 mov edi, eax
// 008a72fa  6a17                 push 0x17
// 008a72fc  8d442420             lea eax, [esp + 0x20]
// 008a7300  50                   push eax
// 008a7301  55                   push ebp
// 008a7302  8bce                 mov ecx, esi
// 008a7304  e879f30700           call 0x926682
// 008a7309  85c0                 test eax, eax
// 008a730b  746f                 je 0x8a737c
// 008a730d  8b442430             mov eax, dword ptr [esp + 0x30]
// 008a7311  3b442424             cmp eax, dword ptr [esp + 0x24]
// 008a7315  7e65                 jle 0x8a737c
// 008a7317  2bc3                 sub eax, ebx
// 008a7319  50                   push eax
// 008a731a  8bce                 mov ecx, esi
// 008a731c  e83f62f7ff           call 0x81d560
// 008a7321  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a7325  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008a7328  55                   push ebp
// 008a7329  57                   push edi
// 008a732a  6a01                 push 1
// 008a732c  52                   push edx
// 008a732d  ff1558cc9800         call dword ptr [0x98cc58]
// 008a7333  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a7337  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a733b  8d54241c             lea edx, [esp + 0x1c]
// 008a733f  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a7343  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a7346  52                   push edx
// 008a7347  50                   push eax
// 008a7348  894c2428             mov dword ptr [esp + 0x28], ecx
// 008a734c  ff1534cc9800         call dword ptr [0x98cc34]
// 008a7352  8bce                 mov ecx, esi
// 008a7354  e82781f7ff           call 0x81f480
// 008a7359  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a735c  51                   push ecx
// 008a735d  ff15a4ca9800         call dword ptr [0x98caa4]
// 008a7363  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a7367  8b4a54               mov ecx, dword ptr [edx + 0x54]
// 008a736a  8b542420             mov edx, dword ptr [esp + 0x20]
// 008a736e  8b01                 mov eax, dword ptr [ecx]
// 008a7370  8b4074               mov eax, dword ptr [eax + 0x74]
// 008a7373  52                   push edx
// 008a7374  8b542420             mov edx, dword ptr [esp + 0x20]
// 008a7378  52                   push edx
// 008a7379  55                   push ebp
// 008a737a  ffd0                 call eax
// 008a737c  5f                   pop edi
// 008a737d  5e                   pop esi
// 008a737e  5d                   pop ebp
// 008a737f  5b                   pop ebx
// 008a7380  83c458               add esp, 0x58
// 008a7383  c20400               ret 4
// copied from an identical function in another client (function ?OnTimer@CXTPReportHeaderDragWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportDragDrop.cpp