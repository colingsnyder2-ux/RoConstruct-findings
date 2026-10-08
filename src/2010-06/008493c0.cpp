// roc 2010-06 008493c0  unit: CXTPRibbonBar  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008493c0
//
// 008493c0  56                   push esi
// 008493c1  8bf1                 mov esi, ecx
// 008493c3  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 008493c9  57                   push edi
// 008493ca  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008493ce  85c0                 test eax, eax
// 008493d0  7421                 je 0x8493f3
// 008493d2  8b542410             mov edx, dword ptr [esp + 0x10]
// 008493d6  57                   push edi
// 008493d7  52                   push edx
// 008493d8  8b542414             mov edx, dword ptr [esp + 0x14]
// 008493dc  8d8884010000         lea ecx, [eax + 0x184]
// 008493e2  8b01                 mov eax, dword ptr [ecx]
// 008493e4  8b4050               mov eax, dword ptr [eax + 0x50]
// 008493e7  52                   push edx
// 008493e8  8b5620               mov edx, dword ptr [esi + 0x20]
// 008493eb  52                   push edx
// 008493ec  ffd0                 call eax
// 008493ee  83f8ff               cmp eax, -1
// 008493f1  756d                 jne 0x849460
// 008493f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008493f7  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008493fb  57                   push edi
// 008493fc  51                   push ecx
// 008493fd  52                   push edx
// 008493fe  8bce                 mov ecx, esi
// 00849400  e83bccf7ff           call 0x7c6040
// 00849405  83f8ff               cmp eax, -1
// 00849408  7507                 jne 0x849411
// 0084940a  5f                   pop edi
// 0084940b  0bc0                 or eax, eax
// 0084940d  5e                   pop esi
// 0084940e  c20c00               ret 0xc
// 00849411  85ff                 test edi, edi
// 00849413  744b                 je 0x849460
// 00849415  833f2c               cmp dword ptr [edi], 0x2c
// 00849418  7546                 jne 0x849460
// 0084941a  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00849420  85c9                 test ecx, ecx
// 00849422  743c                 je 0x849460
// 00849424  83792000             cmp dword ptr [ecx + 0x20], 0
// 00849428  7436                 je 0x849460
// 0084942a  8b7f28               mov edi, dword ptr [edi + 0x28]
// 0084942d  85ff                 test edi, edi
// 0084942f  742f                 je 0x849460
// 00849431  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00849434  85c9                 test ecx, ecx
// 00849436  7428                 je 0x849460
// 00849438  83b95801000000       cmp dword ptr [ecx + 0x158], 0
// 0084943f  741f                 je 0x849460
// 00849441  8d8eec010000         lea ecx, [esi + 0x1ec]
// 00849447  8b31                 mov esi, dword ptr [ecx]
// 00849449  8d570c               lea edx, [edi + 0xc]
// 0084944c  8932                 mov dword ptr [edx], esi
// 0084944e  8b7104               mov esi, dword ptr [ecx + 4]
// 00849451  897204               mov dword ptr [edx + 4], esi
// 00849454  8b7108               mov esi, dword ptr [ecx + 8]
// 00849457  897208               mov dword ptr [edx + 8], esi
// 0084945a  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0084945d  894a0c               mov dword ptr [edx + 0xc], ecx
// 00849460  5f                   pop edi
// 00849461  5e                   pop esi
// 00849462  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnToolHitTest@CXTPRibbonBar@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
