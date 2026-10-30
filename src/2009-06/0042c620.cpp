// from server: 100% by tester
// roc 2008-06 004304f0  unit: VCMDIFrameWnd::?$CXTPCommandBarsSiteBase  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004304f0
//
// 004304f0  53                   push ebx
// 004304f1  56                   push esi
// 004304f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004304f6  8b4604               mov eax, dword ptr [esi + 4]
// 004304f9  57                   push edi
// 004304fa  8bd9                 mov ebx, ecx
// 004304fc  3d00010000           cmp eax, 0x100
// 00430501  723c                 jb 0x43053f
// 00430503  3d09010000           cmp eax, 0x109
// 00430508  7735                 ja 0x43053f
// 0043050a  8b4608               mov eax, dword ptr [esi + 8]
// 0043050d  83f80d               cmp eax, 0xd
// 00430510  742d                 je 0x43053f
// 00430512  83f809               cmp eax, 9
// 00430515  7428                 je 0x43053f
// 00430517  83f81b               cmp eax, 0x1b
// 0043051a  7423                 je 0x43053f
// 0043051c  ff15102e8000         call dword ptr [0x802e10]
// 00430522  50                   push eax
// 00430523  e8b6062700           call 0x6a0bde
// 00430528  8bf8                 mov edi, eax
// 0043052a  85ff                 test edi, edi
// 0043052c  7411                 je 0x43053f
// 0043052e  e88d622700           call 0x6a67c0
// 00430533  50                   push eax
// 00430534  8bcf                 mov ecx, edi
// 00430536  e8b5062700           call 0x6a0bf0
// 0043053b  85c0                 test eax, eax
// 0043053d  752b                 jne 0x43056a
// 0043053f  56                   push esi
// 00430540  8bcb                 mov ecx, ebx
// 00430542  e8e70a2700           call 0x6a102e
// 00430547  85c0                 test eax, eax
// 00430549  740b                 je 0x430556
// 0043054b  5f                   pop edi
// 0043054c  5e                   pop esi
// 0043054d  b801000000           mov eax, 1
// 00430552  5b                   pop ebx
// 00430553  c20400               ret 4
// 00430556  8b8bec000000         mov ecx, dword ptr [ebx + 0xec]
// 0043055c  85c9                 test ecx, ecx
// 0043055e  740a                 je 0x43056a
// 00430560  56                   push esi
// 00430561  e87a452700           call 0x6a4ae0
// 00430566  85c0                 test eax, eax
// 00430568  75e1                 jne 0x43054b
// 0043056a  5f                   pop edi
// 0043056b  5e                   pop esi
// 0043056c  33c0                 xor eax, eax
// 0043056e  5b                   pop ebx
// 0043056f  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPFrameWnd.cpp (function ?PreTranslateMessage@?$CXTPCommandBarsSiteBase@VCMDIFrameWnd@@@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPFrameWnd.cpp
