// roc 2011-06 007823e0  unit: seg_00780000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007823e0
//
// 007823e0  83ec64               sub esp, 0x64
// 007823e3  6a01                 push 1
// 007823e5  56                   push esi
// 007823e6  e86501feff           call 0x762550
// 007823eb  83c408               add esp, 8
// 007823ee  83f806               cmp eax, 6
// 007823f1  750f                 jne 0x782402
// 007823f3  6a01                 push 1
// 007823f5  56                   push esi
// 007823f6  e82501feff           call 0x762520
// 007823fb  83c408               add esp, 8
// 007823fe  83c464               add esp, 0x64
// 00782401  c3                   ret 
// 00782402  837c246800           cmp dword ptr [esp + 0x68], 0
// 00782407  57                   push edi
// 00782408  6a01                 push 1
// 0078240a  740d                 je 0x782419
// 0078240c  6a01                 push 1
// 0078240e  56                   push esi
// 0078240f  e82c1ffeff           call 0x764340
// 00782414  83c40c               add esp, 0xc
// 00782417  eb09                 jmp 0x782422
// 00782419  56                   push esi
// 0078241a  e8b11efeff           call 0x7642d0
// 0078241f  83c408               add esp, 8
// 00782422  8bf8                 mov edi, eax
// 00782424  85ff                 test edi, edi
// 00782426  7d10                 jge 0x782438
// 00782428  689081ab00           push 0xab8190
// 0078242d  6a01                 push 1
// 0078242f  56                   push esi
// 00782430  e86b1bfeff           call 0x763fa0
// 00782435  83c40c               add esp, 0xc
// 00782438  8d442404             lea eax, [esp + 4]
// 0078243c  50                   push eax
// 0078243d  57                   push edi
// 0078243e  56                   push esi
// 0078243f  e8fcabffff           call 0x77d040
// 00782444  83c40c               add esp, 0xc
// 00782447  85c0                 test eax, eax
// 00782449  7510                 jne 0x78245b
// 0078244b  688081ab00           push 0xab8180
// 00782450  6a01                 push 1
// 00782452  56                   push esi
// 00782453  e8481bfeff           call 0x763fa0
// 00782458  83c40c               add esp, 0xc
// 0078245b  8d4c2404             lea ecx, [esp + 4]
// 0078245f  51                   push ecx
// 00782460  687c81ab00           push 0xab817c
// 00782465  56                   push esi
// 00782466  e805b9ffff           call 0x77dd70
// 0078246b  6aff                 push -1
// 0078246d  56                   push esi
// 0078246e  e8dd00feff           call 0x762550
// 00782473  83c414               add esp, 0x14
// 00782476  85c0                 test eax, eax
// 00782478  750f                 jne 0x782489
// 0078247a  57                   push edi
// 0078247b  684881ab00           push 0xab8148
// 00782480  56                   push esi
// 00782481  e88a12feff           call 0x763710
// 00782486  83c40c               add esp, 0xc
// 00782489  5f                   pop edi
// 0078248a  83c464               add esp, 0x64
// 0078248d  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _getfunc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
