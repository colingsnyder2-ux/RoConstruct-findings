// roc 2011-06 0088e110  unit: CXTPRibbonTheme  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088e110
//
// 0088e110  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088e114  83ec30               sub esp, 0x30
// 0088e117  53                   push ebx
// 0088e118  55                   push ebp
// 0088e119  33db                 xor ebx, ebx
// 0088e11b  56                   push esi
// 0088e11c  57                   push edi
// 0088e11d  3bc3                 cmp eax, ebx
// 0088e11f  7433                 je 0x88e154
// 0088e121  8b542458             mov edx, dword ptr [esp + 0x58]
// 0088e125  50                   push eax
// 0088e126  8b442460             mov eax, dword ptr [esp + 0x60]
// 0088e12a  50                   push eax
// 0088e12b  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0088e12f  52                   push edx
// 0088e130  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0088e134  50                   push eax
// 0088e135  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0088e139  52                   push edx
// 0088e13a  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0088e13e  50                   push eax
// 0088e13f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0088e143  52                   push edx
// 0088e144  50                   push eax
// 0088e145  e8b62ef8ff           call 0x811000
// 0088e14a  5f                   pop edi
// 0088e14b  5e                   pop esi
// 0088e14c  5d                   pop ebp
// 0088e14d  5b                   pop ebx
// 0088e14e  83c430               add esp, 0x30
// 0088e151  c22000               ret 0x20
// 0088e154  68540bad00           push 0xad0b54
// 0088e159  e832110000           call 0x88f290
// 0088e15e  8bf8                 mov edi, eax
// 0088e160  3bfb                 cmp edi, ebx
// 0088e162  0f84b2000000         je 0x88e21a
// 0088e168  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0088e16c  8d48fe               lea ecx, [eax - 2]
// 0088e16f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0088e173  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0088e177  8d51fe               lea edx, [ecx - 2]
// 0088e17a  83c003               add eax, 3
// 0088e17d  83c102               add ecx, 2
// 0088e180  89542414             mov dword ptr [esp + 0x14], edx
// 0088e184  89442418             mov dword ptr [esp + 0x18], eax
// 0088e188  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0088e18c  395c245c             cmp dword ptr [esp + 0x5c], ebx
// 0088e190  7507                 jne 0x88e199
// 0088e192  bd03000000           mov ebp, 3
// 0088e197  eb0b                 jmp 0x88e1a4
// 0088e199  33c0                 xor eax, eax
// 0088e19b  395c2454             cmp dword ptr [esp + 0x54], ebx
// 0088e19f  0f95c0               setne al
// 0088e1a2  8be8                 mov ebp, eax
// 0088e1a4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0088e1a8  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0088e1ae  8d542410             lea edx, [esp + 0x10]
// 0088e1b2  52                   push edx
// 0088e1b3  50                   push eax
// 0088e1b4  e857bbffff           call 0x889d10
// 0088e1b9  83c408               add esp, 8
// 0088e1bc  8bf0                 mov esi, eax
// 0088e1be  6a04                 push 4
// 0088e1c0  f7de                 neg esi
// 0088e1c2  55                   push ebp
// 0088e1c3  8d442438             lea eax, [esp + 0x38]
// 0088e1c7  1bf6                 sbb esi, esi
// 0088e1c9  50                   push eax
// 0088e1ca  8bcf                 mov ecx, edi
// 0088e1cc  f7de                 neg esi
// 0088e1ce  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0088e1d2  895c2430             mov dword ptr [esp + 0x30], ebx
// 0088e1d6  895c2434             mov dword ptr [esp + 0x34], ebx
// 0088e1da  895c2438             mov dword ptr [esp + 0x38], ebx
// 0088e1de  e82df50500           call 0x8ed710
// 0088e1e3  8b10                 mov edx, dword ptr [eax]
// 0088e1e5  56                   push esi
// 0088e1e6  68ff00ff00           push 0xff00ff
// 0088e1eb  8d4c2428             lea ecx, [esp + 0x28]
// 0088e1ef  51                   push ecx
// 0088e1f0  83ec10               sub esp, 0x10
// 0088e1f3  8bcc                 mov ecx, esp
// 0088e1f5  8911                 mov dword ptr [ecx], edx
// 0088e1f7  8b5004               mov edx, dword ptr [eax + 4]
// 0088e1fa  895104               mov dword ptr [ecx + 4], edx
// 0088e1fd  8b5008               mov edx, dword ptr [eax + 8]
// 0088e200  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088e203  895108               mov dword ptr [ecx + 8], edx
// 0088e206  8b542460             mov edx, dword ptr [esp + 0x60]
// 0088e20a  89410c               mov dword ptr [ecx + 0xc], eax
// 0088e20d  8d4c242c             lea ecx, [esp + 0x2c]
// 0088e211  51                   push ecx
// 0088e212  52                   push edx
// 0088e213  8bcf                 mov ecx, edi
// 0088e215  e806ff0500           call 0x8ee120
// 0088e21a  5f                   pop edi
// 0088e21b  5e                   pop esi
// 0088e21c  5d                   pop ebp
// 0088e21d  5b                   pop ebx
// 0088e21e  83c430               add esp, 0x30
// 0088e221  c22000               ret 0x20
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawDropDownGlyph@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@VCPoint@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
