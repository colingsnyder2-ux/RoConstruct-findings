// roc 2009-12 00862310  unit: CXTPPropertyGridToolTip  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00862310
//
// 00862310  56                   push esi
// 00862311  8bf1                 mov esi, ecx
// 00862313  837e6800             cmp dword ptr [esi + 0x68], 0
// 00862317  0f840a010000         je 0x862427
// 0086231d  53                   push ebx
// 0086231e  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00862322  8b4304               mov eax, dword ptr [ebx + 4]
// 00862325  3d00020000           cmp eax, 0x200
// 0086232a  7207                 jb 0x862333
// 0086232c  3d0a020000           cmp eax, 0x20a
// 00862331  7616                 jbe 0x862349
// 00862333  3da0000000           cmp eax, 0xa0
// 00862338  0f82e8000000         jb 0x862426
// 0086233e  3da9000000           cmp eax, 0xa9
// 00862343  0f87dd000000         ja 0x862426
// 00862349  57                   push edi
// 0086234a  e8a1feffff           call 0x8621f0
// 0086234f  817b0401020000       cmp dword ptr [ebx + 4], 0x201
// 00862356  8bf8                 mov edi, eax
// 00862358  7512                 jne 0x86236c
// 0086235a  85ff                 test edi, edi
// 0086235c  7424                 je 0x862382
// 0086235e  57                   push edi
// 0086235f  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00862365  e866d8ffff           call 0x85fbd0
// 0086236a  eb14                 jmp 0x862380
// 0086236c  85ff                 test edi, edi
// 0086236e  7412                 je 0x862382
// 00862370  57                   push edi
// 00862371  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00862377  e824d8ffff           call 0x85fba0
// 0086237c  85c0                 test eax, eax
// 0086237e  7402                 je 0x862382
// 00862380  33ff                 xor edi, edi
// 00862382  55                   push ebp
// 00862383  8bae18010000         mov ebp, dword ptr [esi + 0x118]
// 00862389  85ed                 test ebp, ebp
// 0086238b  742e                 je 0x8623bb
// 0086238d  8d9ee0000000         lea ebx, [esi + 0xe0]
// 00862393  57                   push edi
// 00862394  8bcb                 mov ecx, ebx
// 00862396  e805d8ffff           call 0x85fba0
// 0086239b  85c0                 test eax, eax
// 0086239d  751c                 jne 0x8623bb
// 0086239f  8b4620               mov eax, dword ptr [esi + 0x20]
// 008623a2  55                   push ebp
// 008623a3  50                   push eax
// 008623a4  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008623aa  8bcb                 mov ecx, ebx
// 008623ac  c7861801000000000000 mov dword ptr [esi + 0x118], 0
// 008623b6  e8f5deffff           call 0x8602b0
// 008623bb  5d                   pop ebp
// 008623bc  85ff                 test edi, edi
// 008623be  745c                 je 0x86241c
// 008623c0  57                   push edi
// 008623c1  8d4e70               lea ecx, [esi + 0x70]
// 008623c4  e8d7d7ffff           call 0x85fba0
// 008623c9  85c0                 test eax, eax
// 008623cb  7558                 jne 0x862425
// 008623cd  ff15fcb29800         call dword ptr [0x98b2fc]
// 008623d3  2b861c010000         sub eax, dword ptr [esi + 0x11c]
// 008623d9  57                   push edi
// 008623da  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 008623e0  723c                 jb 0x86241e
// 008623e2  8d9ee0000000         lea ebx, [esi + 0xe0]
// 008623e8  8bcb                 mov ecx, ebx
// 008623ea  e8b1d7ffff           call 0x85fba0
// 008623ef  85c0                 test eax, eax
// 008623f1  7532                 jne 0x862425
// 008623f3  57                   push edi
// 008623f4  8bcb                 mov ecx, ebx
// 008623f6  e8d5d7ffff           call 0x85fbd0
// 008623fb  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 00862401  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00862404  6a00                 push 0
// 00862406  50                   push eax
// 00862407  6a01                 push 1
// 00862409  51                   push ecx
// 0086240a  ff1558cc9800         call dword ptr [0x98cc58]
// 00862410  5f                   pop edi
// 00862411  5b                   pop ebx
// 00862412  898618010000         mov dword ptr [esi + 0x118], eax
// 00862418  5e                   pop esi
// 00862419  c20400               ret 4
// 0086241c  6a00                 push 0
// 0086241e  8bce                 mov ecx, esi
// 00862420  e86be3ffff           call 0x860790
// 00862425  5f                   pop edi
// 00862426  5b                   pop ebx
// 00862427  5e                   pop esi
// 00862428  c20400               ret 4
// copied from an identical function in another client (function ?RelayEvent@CXTPToolTipContextToolTip@@QAEXPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp