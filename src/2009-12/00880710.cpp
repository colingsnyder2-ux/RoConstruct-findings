// roc 2009-12 00880710  unit: CXTPOffice2007Theme  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00880710
//
// 00880710  56                   push esi
// 00880711  8b742408             mov esi, dword ptr [esp + 8]
// 00880715  85f6                 test esi, esi
// 00880717  7506                 jne 0x88071f
// 00880719  33c0                 xor eax, eax
// 0088071b  5e                   pop esi
// 0088071c  c20400               ret 4
// 0088071f  53                   push ebx
// 00880720  57                   push edi
// 00880721  8bce                 mov ecx, esi
// 00880723  e84a5d0a00           call 0x926472
// 00880728  8bce                 mov ecx, esi
// 0088072a  8bf8                 mov edi, eax
// 0088072c  e8475d0a00           call 0x926478
// 00880731  8bd8                 mov ebx, eax
// 00880733  84db                 test bl, bl
// 00880735  7808                 js 0x88073f
// 00880737  f7c700000800         test edi, 0x80000
// 0088073d  7508                 jne 0x880747
// 0088073f  5f                   pop edi
// 00880740  5b                   pop ebx
// 00880741  33c0                 xor eax, eax
// 00880743  5e                   pop esi
// 00880744  c20400               ret 4
// 00880747  8b4620               mov eax, dword ptr [esi + 0x20]
// 0088074a  6a00                 push 0
// 0088074c  6a00                 push 0
// 0088074e  6a7f                 push 0x7f
// 00880750  50                   push eax
// 00880751  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00880757  85c0                 test eax, eax
// 00880759  7557                 jne 0x8807b2
// 0088075b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0088075e  6ade                 push -0x22
// 00880760  50                   push eax
// 00880761  ff1568cb9800         call dword ptr [0x98cb68]
// 00880767  85c0                 test eax, eax
// 00880769  7547                 jne 0x8807b2
// 0088076b  81e70000c000         and edi, 0xc00000
// 00880771  81ff00004000         cmp edi, 0x400000
// 00880777  7439                 je 0x8807b2
// 00880779  f6c301               test bl, 1
// 0088077c  7534                 jne 0x8807b2
// 0088077e  8b7620               mov esi, dword ptr [esi + 0x20]
// 00880781  8d4c2410             lea ecx, [esp + 0x10]
// 00880785  51                   push ecx
// 00880786  6a64                 push 0x64
// 00880788  50                   push eax
// 00880789  50                   push eax
// 0088078a  50                   push eax
// 0088078b  6a37                 push 0x37
// 0088078d  56                   push esi
// 0088078e  ff1590cb9800         call dword ptr [0x98cb90]
// 00880794  85c0                 test eax, eax
// 00880796  7408                 je 0x8807a0
// 00880798  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088079c  85c0                 test eax, eax
// 0088079e  7512                 jne 0x8807b2
// 008807a0  e87933f7ff           call 0x7f3b1e
// 008807a5  68057f0000           push 0x7f05
// 008807aa  6a00                 push 0
// 008807ac  ff1574cc9800         call dword ptr [0x98cc74]
// 008807b2  5f                   pop edi
// 008807b3  5b                   pop ebx
// 008807b4  5e                   pop esi
// 008807b5  c20400               ret 4
// copied from an identical function in another client (function ?GetFrameSmallIcon@CXTPOffice2007Theme@@IAEPAUHICON__@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp