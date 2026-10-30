// roc 2012-06 009e14e0  unit: CXTPTabClientWnd  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e14e0
//
// 009e14e0  51                   push ecx
// 009e14e1  53                   push ebx
// 009e14e2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 009e14e6  56                   push esi
// 009e14e7  8d442408             lea eax, [esp + 8]
// 009e14eb  50                   push eax
// 009e14ec  53                   push ebx
// 009e14ed  8bf1                 mov esi, ecx
// 009e14ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 009e14f7  e884f7ffff           call 0x9e0c80
// 009e14fc  85c0                 test eax, eax
// 009e14fe  7473                 je 0x9e1573
// 009e1500  57                   push edi
// 009e1501  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009e1505  85ff                 test edi, edi
// 009e1507  7469                 je 0x9e1572
// 009e1509  8d833ddcffff         lea eax, [ebx - 0x23c3]
// 009e150f  83f803               cmp eax, 3
// 009e1512  775e                 ja 0x9e1572
// 009e1514  ff24857c159e00       jmp dword ptr [eax*4 + 0x9e157c]
// 009e151b  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 009e151e  6a04                 push 4
// 009e1520  51                   push ecx
// 009e1521  57                   push edi
// 009e1522  8bce                 mov ecx, esi
// 009e1524  e837f8ffff           call 0x9e0d60
// 009e1529  5f                   pop edi
// 009e152a  5e                   pop esi
// 009e152b  5b                   pop ebx
// 009e152c  59                   pop ecx
// 009e152d  c20400               ret 4
// 009e1530  8b5760               mov edx, dword ptr [edi + 0x60]
// 009e1533  6a03                 push 3
// 009e1535  52                   push edx
// 009e1536  57                   push edi
// 009e1537  8bce                 mov ecx, esi
// 009e1539  e822f8ffff           call 0x9e0d60
// 009e153e  5f                   pop edi
// 009e153f  5e                   pop esi
// 009e1540  5b                   pop ebx
// 009e1541  59                   pop ecx
// 009e1542  c20400               ret 4
// 009e1545  8b4760               mov eax, dword ptr [edi + 0x60]
// 009e1548  50                   push eax
// 009e1549  8bce                 mov ecx, esi
// 009e154b  e850e8ffff           call 0x9dfda0
// 009e1550  48                   dec eax
// 009e1551  eb0c                 jmp 0x9e155f
// 009e1553  8b4760               mov eax, dword ptr [edi + 0x60]
// 009e1556  50                   push eax
// 009e1557  8bce                 mov ecx, esi
// 009e1559  e842e8ffff           call 0x9dfda0
// 009e155e  40                   inc eax
// 009e155f  6a02                 push 2
// 009e1561  50                   push eax
// 009e1562  8bce                 mov ecx, esi
// 009e1564  e807d7ffff           call 0x9dec70
// 009e1569  50                   push eax
// 009e156a  57                   push edi
// 009e156b  8bce                 mov ecx, esi
// 009e156d  e8eef7ffff           call 0x9e0d60
// 009e1572  5f                   pop edi
// 009e1573  5e                   pop esi
// 009e1574  5b                   pop ebx
// 009e1575  59                   pop ecx
// 009e1576  c20400               ret 4
// 009e1579  8d4900               lea ecx, [ecx]
// 009e157c  45                   inc ebp
// 009e157d  159e005315           adc eax, 0x1553009e
// 009e1582  9e                   sahf 
// 009e1583  0030                 add byte ptr [eax], dh
// 009e1585  159e001b15           adc eax, 0x151b009e
// 009e158a  9e                   sahf 
// copied from an identical function in another client (function ?OnWorkspaceCommand@CXTPTabClientWnd@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp