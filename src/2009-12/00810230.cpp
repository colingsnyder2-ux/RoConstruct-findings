// roc 2009-12 00810230  unit: CXTPImageManager  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00810230
//
// 00810230  6aff                 push -1
// 00810232  68e09f9500           push 0x959fe0
// 00810237  64a100000000         mov eax, dword ptr fs:[0]
// 0081023d  50                   push eax
// 0081023e  83ec70               sub esp, 0x70
// 00810241  55                   push ebp
// 00810242  56                   push esi
// 00810243  57                   push edi
// 00810244  a10052b600           mov eax, dword ptr [0xb65200]
// 00810249  33c4                 xor eax, esp
// 0081024b  50                   push eax
// 0081024c  8d842480000000       lea eax, [esp + 0x80]
// 00810253  64a300000000         mov dword ptr fs:[0], eax
// 00810259  8bf1                 mov esi, ecx
// 0081025b  6800040000           push 0x400
// 00810260  8d4c2414             lea ecx, [esp + 0x14]
// 00810264  e82f631100           call 0x926598
// 00810269  6a00                 push 0
// 0081026b  6800100000           push 0x1000
// 00810270  6a00                 push 0
// 00810272  8d44241c             lea eax, [esp + 0x1c]
// 00810276  50                   push eax
// 00810277  8d4c2448             lea ecx, [esp + 0x48]
// 0081027b  c784249800000000000000 mov dword ptr [esp + 0x98], 0
// 00810286  e807631100           call 0x926592
// 0081028b  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 00810292  8d4c2438             lea ecx, [esp + 0x38]
// 00810296  51                   push ecx
// 00810297  52                   push edx
// 00810298  8bce                 mov ecx, esi
// 0081029a  c684249000000001     mov byte ptr [esp + 0x90], 1
// 008102a2  e839fcffff           call 0x80fee0
// 008102a7  8d4c2438             lea ecx, [esp + 0x38]
// 008102ab  e8ac621100           call 0x92655c
// 008102b0  8d4c2410             lea ecx, [esp + 0x10]
// 008102b4  e8d3621100           call 0x92658c
// 008102b9  8d4c2410             lea ecx, [esp + 0x10]
// 008102bd  8bf8                 mov edi, eax
// 008102bf  e8c2621100           call 0x926586
// 008102c4  57                   push edi
// 008102c5  6a02                 push 2
// 008102c7  8be8                 mov ebp, eax
// 008102c9  ff15c8b19800         call dword ptr [0x98b1c8]
// 008102cf  8bf0                 mov esi, eax
// 008102d1  85f6                 test esi, esi
// 008102d3  742a                 je 0x8102ff
// 008102d5  56                   push esi
// 008102d6  ff15ccb19800         call dword ptr [0x98b1cc]
// 008102dc  57                   push edi
// 008102dd  55                   push ebp
// 008102de  57                   push edi
// 008102df  50                   push eax
// 008102e0  ff157cb79800         call dword ptr [0x98b77c]
// 008102e6  83c410               add esp, 0x10
// 008102e9  56                   push esi
// 008102ea  ff15d0b19800         call dword ptr [0x98b1d0]
// 008102f0  0fb705b0adb900       movzx eax, word ptr [0xb9adb0]
// 008102f7  56                   push esi
// 008102f8  50                   push eax
// 008102f9  ff1518cc9800         call dword ptr [0x98cc18]
// 008102ff  8d4c2438             lea ecx, [esp + 0x38]
// 00810303  e878621100           call 0x926580
// 00810308  8d4c2410             lea ecx, [esp + 0x10]
// 0081030c  e869621100           call 0x92657a
// 00810311  55                   push ebp
// 00810312  ff1540b79800         call dword ptr [0x98b740]
// 00810318  83c404               add esp, 4
// 0081031b  8d4c2438             lea ecx, [esp + 0x38]
// 0081031f  c684248800000000     mov byte ptr [esp + 0x88], 0
// 00810327  e848621100           call 0x926574
// 0081032c  8d4c2410             lea ecx, [esp + 0x10]
// 00810330  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 0081033b  e89c43feff           call 0x7f46dc
// 00810340  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00810347  64890d00000000       mov dword ptr fs:[0], ecx
// 0081034e  59                   pop ecx
// 0081034f  5f                   pop edi
// 00810350  5e                   pop esi
// 00810351  5d                   pop ebp
// 00810352  83c47c               add esp, 0x7c
// 00810355  c20400               ret 4
// copied from an identical function in another client (function ?CopyImage@CXTPImageManager@@AAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp