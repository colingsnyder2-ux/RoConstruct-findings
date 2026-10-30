// roc 2009-06 007872f0  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007872f0
//
// 007872f0  56                   push esi
// 007872f1  8bf1                 mov esi, ecx
// 007872f3  837e6800             cmp dword ptr [esi + 0x68], 0
// 007872f7  0f840a010000         je 0x787407
// 007872fd  53                   push ebx
// 007872fe  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00787302  8b4304               mov eax, dword ptr [ebx + 4]
// 00787305  3d00020000           cmp eax, 0x200
// 0078730a  7207                 jb 0x787313
// 0078730c  3d0a020000           cmp eax, 0x20a
// 00787311  7616                 jbe 0x787329
// 00787313  3da0000000           cmp eax, 0xa0
// 00787318  0f82e8000000         jb 0x787406
// 0078731e  3da9000000           cmp eax, 0xa9
// 00787323  0f87dd000000         ja 0x787406
// 00787329  57                   push edi
// 0078732a  e8a1feffff           call 0x7871d0
// 0078732f  817b0401020000       cmp dword ptr [ebx + 4], 0x201
// 00787336  8bf8                 mov edi, eax
// 00787338  7512                 jne 0x78734c
// 0078733a  85ff                 test edi, edi
// 0078733c  7424                 je 0x787362
// 0078733e  57                   push edi
// 0078733f  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00787345  e876d8ffff           call 0x784bc0
// 0078734a  eb14                 jmp 0x787360
// 0078734c  85ff                 test edi, edi
// 0078734e  7412                 je 0x787362
// 00787350  57                   push edi
// 00787351  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00787357  e834d8ffff           call 0x784b90
// 0078735c  85c0                 test eax, eax
// 0078735e  7402                 je 0x787362
// 00787360  33ff                 xor edi, edi
// 00787362  55                   push ebp
// 00787363  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 00787369  85ed                 test ebp, ebp
// 0078736b  742e                 je 0x78739b
// 0078736d  8d9ee0000000         lea ebx, [esi + 0xe0]
// 00787373  57                   push edi
// 00787374  8bcb                 mov ecx, ebx
// 00787376  e815d8ffff           call 0x784b90
// 0078737b  85c0                 test eax, eax
// 0078737d  751c                 jne 0x78739b
// 0078737f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00787382  55                   push ebp
// 00787383  50                   push eax
// 00787384  ff1584ee8900         call dword ptr [0x89ee84]
// 0078738a  8bcb                 mov ecx, ebx
// 0078738c  c7861801000000000000 mov dword ptr [esi + 0x118], 0
// 00787396  e805dfffff           call 0x7852a0
// 0078739b  5d                   pop ebp
// 0078739c  85ff                 test edi, edi
// 0078739e  745c                 je 0x7873fc
// 007873a0  57                   push edi
// 007873a1  8d4e70               lea ecx, [esi + 0x70]
// 007873a4  e8e7d7ffff           call 0x784b90
// 007873a9  85c0                 test eax, eax
// 007873ab  7558                 jne 0x787405
// 007873ad  ff1518e28900         call dword ptr [0x89e218]
// 007873b3  2b861c010000         sub eax, dword ptr [esi + 0x11c]
// 007873b9  57                   push edi
// 007873ba  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 007873c0  723c                 jb 0x7873fe
// 007873c2  8d9ee0000000         lea ebx, [esi + 0xe0]
// 007873c8  8bcb                 mov ecx, ebx
// 007873ca  e8c1d7ffff           call 0x784b90
// 007873cf  85c0                 test eax, eax
// 007873d1  7532                 jne 0x787405
// 007873d3  57                   push edi
// 007873d4  8bcb                 mov ecx, ebx
// 007873d6  e8e5d7ffff           call 0x784bc0
// 007873db  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 007873e1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007873e4  6a00                 push 0
// 007873e6  50                   push eax
// 007873e7  6a01                 push 1
// 007873e9  51                   push ecx
// 007873ea  ff150cee8900         call dword ptr [0x89ee0c]
// 007873f0  5f                   pop edi
// 007873f1  5b                   pop ebx
// 007873f2  898618010000         mov dword ptr [esi + 0x118], eax
// 007873f8  5e                   pop esi
// 007873f9  c20400               ret 4
// 007873fc  6a00                 push 0
// 007873fe  8bce                 mov ecx, esi
// 00787400  e87be3ffff           call 0x785780
// 00787405  5f                   pop edi
// 00787406  5b                   pop ebx
// 00787407  5e                   pop esi
// 00787408  c20400               ret 4
// copied from an identical function in another client (function ?RelayEvent@CXTPToolTipContextToolTip@@QAEXPAUtagMSG@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp