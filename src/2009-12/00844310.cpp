// roc 2009-12 00844310  unit: CXTPPopupBar  size: 444 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00844310
//
// 00844310  83ec08               sub esp, 8
// 00844313  53                   push ebx
// 00844314  56                   push esi
// 00844315  57                   push edi
// 00844316  8bf1                 mov esi, ecx
// 00844318  e8330ffcff           call 0x805250
// 0084431d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00844321  8d8b77ecffff         lea ecx, [ebx - 0x1389]
// 00844327  83f903               cmp ecx, 3
// 0084432a  0f877a010000         ja 0x8444aa
// 00844330  ff248dbc448400       jmp dword ptr [ecx*4 + 0x8444bc]
// 00844337  8b8e20020000         mov ecx, dword ptr [esi + 0x220]
// 0084433d  3bc8                 cmp ecx, eax
// 0084433f  7514                 jne 0x844355
// 00844341  8d8e24020000         lea ecx, [esi + 0x224]
// 00844347  e894dbffff           call 0x841ee0
// 0084434c  5f                   pop edi
// 0084434d  5e                   pop esi
// 0084434e  5b                   pop ebx
// 0084434f  83c408               add esp, 8
// 00844352  c20400               ret 4
// 00844355  6a01                 push 1
// 00844357  41                   inc ecx
// 00844358  6a01                 push 1
// 0084435a  898e20020000         mov dword ptr [esi + 0x220], ecx
// 00844360  6a00                 push 0
// 00844362  8bce                 mov ecx, esi
// 00844364  e8c7e7ffff           call 0x842b30
// 00844369  53                   push ebx
// 0084436a  8bce                 mov ecx, esi
// 0084436c  e81f0ffcff           call 0x805290
// 00844371  5f                   pop edi
// 00844372  5e                   pop esi
// 00844373  5b                   pop ebx
// 00844374  83c408               add esp, 8
// 00844377  c20400               ret 4
// 0084437a  8b861c020000         mov eax, dword ptr [esi + 0x21c]
// 00844380  85c0                 test eax, eax
// 00844382  7514                 jne 0x844398
// 00844384  8d8e40020000         lea ecx, [esi + 0x240]
// 0084438a  e851dbffff           call 0x841ee0
// 0084438f  5f                   pop edi
// 00844390  5e                   pop esi
// 00844391  5b                   pop ebx
// 00844392  83c408               add esp, 8
// 00844395  c20400               ret 4
// 00844398  6a01                 push 1
// 0084439a  6a00                 push 0
// 0084439c  48                   dec eax
// 0084439d  6a00                 push 0
// 0084439f  8bce                 mov ecx, esi
// 008443a1  89861c020000         mov dword ptr [esi + 0x21c], eax
// 008443a7  e884e7ffff           call 0x842b30
// 008443ac  53                   push ebx
// 008443ad  8bce                 mov ecx, esi
// 008443af  e8dc0efcff           call 0x805290
// 008443b4  5f                   pop edi
// 008443b5  5e                   pop esi
// 008443b6  5b                   pop ebx
// 008443b7  83c408               add esp, 8
// 008443ba  c20400               ret 4
// 008443bd  8d44240c             lea eax, [esp + 0xc]
// 008443c1  50                   push eax
// 008443c2  ff1538cc9800         call dword ptr [0x98cc38]
// 008443c8  8b5620               mov edx, dword ptr [esi + 0x20]
// 008443cb  8d4c240c             lea ecx, [esp + 0xc]
// 008443cf  51                   push ecx
// 008443d0  52                   push edx
// 008443d1  ff1534cc9800         call dword ptr [0x98cc34]
// 008443d7  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 008443de  8b3d5cca9800         mov edi, dword ptr [0x98ca5c]
// 008443e4  753e                 jne 0x844424
// 008443e6  8b442410             mov eax, dword ptr [esp + 0x10]
// 008443ea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008443ee  50                   push eax
// 008443ef  51                   push ecx
// 008443f0  8d96b4010000         lea edx, [esi + 0x1b4]
// 008443f6  52                   push edx
// 008443f7  ffd7                 call edi
// 008443f9  85c0                 test eax, eax
// 008443fb  741a                 je 0x844417
// 008443fd  8b06                 mov eax, dword ptr [esi]
// 008443ff  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00844405  6a01                 push 1
// 00844407  6a00                 push 0
// 00844409  8bce                 mov ecx, esi
// 0084440b  c786d801000001000000 mov dword ptr [esi + 0x1d8], 1
// 00844415  ffd2                 call edx
// 00844417  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 0084441e  0f8486000000         je 0x8444aa
// 00844424  8b442410             mov eax, dword ptr [esp + 0x10]
// 00844428  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0084442c  50                   push eax
// 0084442d  51                   push ecx
// 0084442e  8d96b4010000         lea edx, [esi + 0x1b4]
// 00844434  52                   push edx
// 00844435  ffd7                 call edi
// 00844437  85c0                 test eax, eax
// 00844439  756f                 jne 0x8444aa
// 0084443b  3986e0010000         cmp dword ptr [esi + 0x1e0], eax
// 00844441  7567                 jne 0x8444aa
// 00844443  8986d8010000         mov dword ptr [esi + 0x1d8], eax
// 00844449  8b06                 mov eax, dword ptr [esi]
// 0084444b  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 00844451  6a01                 push 1
// 00844453  6a00                 push 0
// 00844455  8bce                 mov ecx, esi
// 00844457  ffd2                 call edx
// 00844459  8b86dc010000         mov eax, dword ptr [esi + 0x1dc]
// 0084445f  50                   push eax
// 00844460  eb3e                 jmp 0x8444a0
// 00844462  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00844468  83f8ff               cmp eax, -1
// 0084446b  742e                 je 0x84449b
// 0084446d  50                   push eax
// 0084446e  8bce                 mov ecx, esi
// 00844470  e8eb0dfcff           call 0x805260
// 00844475  81b884000000be230000 cmp dword ptr [eax + 0x84], 0x23be
// 0084447f  751a                 jne 0x84449b
// 00844481  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 00844487  52                   push edx
// 00844488  8bce                 mov ecx, esi
// 0084448a  e8d10dfcff           call 0x805260
// 0084448f  8b10                 mov edx, dword ptr [eax]
// 00844491  8bc8                 mov ecx, eax
// 00844493  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 00844499  ffd0                 call eax
// 0084449b  688c130000           push 0x138c
// 008444a0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008444a3  51                   push ecx
// 008444a4  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008444aa  53                   push ebx
// 008444ab  8bce                 mov ecx, esi
// 008444ad  e8de0dfcff           call 0x805290
// 008444b2  5f                   pop edi
// 008444b3  5e                   pop esi
// 008444b4  5b                   pop ebx
// 008444b5  83c408               add esp, 8
// 008444b8  c20400               ret 4
// 008444bb  90                   nop 
// 008444bc  37                   aaa 
// 008444bd  43                   inc ebx
// 008444be  8400                 test byte ptr [eax], al
// 008444c0  7a43                 jp 0x844505
// 008444c2  8400                 test byte ptr [eax], al
// 008444c4  bd43840062           mov ebp, 0x62008443
// 008444c9  44                   inc esp
// 008444ca  8400                 test byte ptr [eax], al
// copied from an identical function in another client (function ?OnTimer@CXTPPopupBar@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp