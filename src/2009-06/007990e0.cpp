// roc 2009-06 007990e0  unit: CXTPRibbonTheme  size: 431 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007990e0
//
// 007990e0  83ec40               sub esp, 0x40
// 007990e3  53                   push ebx
// 007990e4  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 007990e8  55                   push ebp
// 007990e9  56                   push esi
// 007990ea  57                   push edi
// 007990eb  8bf9                 mov edi, ecx
// 007990ed  b86c0b9000           mov eax, 0x900b6c
// 007990f2  85db                 test ebx, ebx
// 007990f4  7505                 jne 0x7990fb
// 007990f6  b8540b9000           mov eax, 0x900b54
// 007990fb  50                   push eax
// 007990fc  e8bfac0000           call 0x7a3dc0
// 00799101  8bf0                 mov esi, eax
// 00799103  85f6                 test esi, esi
// 00799105  0f847a010000         je 0x799285
// 0079910b  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 0079910f  8b85c0000000         mov eax, dword ptr [ebp + 0xc0]
// 00799115  8b95c8000000         mov edx, dword ptr [ebp + 0xc8]
// 0079911b  8b8dc4000000         mov ecx, dword ptr [ebp + 0xc4]
// 00799121  89442410             mov dword ptr [esp + 0x10], eax
// 00799125  8b85cc000000         mov eax, dword ptr [ebp + 0xcc]
// 0079912b  89542418             mov dword ptr [esp + 0x18], edx
// 0079912f  8b5500               mov edx, dword ptr [ebp]
// 00799132  894c2414             mov dword ptr [esp + 0x14], ecx
// 00799136  8944241c             mov dword ptr [esp + 0x1c], eax
// 0079913a  8b4278               mov eax, dword ptr [edx + 0x78]
// 0079913d  8bcd                 mov ecx, ebp
// 0079913f  ffd0                 call eax
// 00799141  85c0                 test eax, eax
// 00799143  7407                 je 0x79914c
// 00799145  bd02000000           mov ebp, 2
// 0079914a  eb12                 jmp 0x79915e
// 0079914c  8b5500               mov edx, dword ptr [ebp]
// 0079914f  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00799152  8bcd                 mov ecx, ebp
// 00799154  ffd0                 call eax
// 00799156  8be8                 mov ebp, eax
// 00799158  f7dd                 neg ebp
// 0079915a  1bed                 sbb ebp, ebp
// 0079915c  f7dd                 neg ebp
// 0079915e  b8380b9000           mov eax, 0x900b38
// 00799163  85db                 test ebx, ebx
// 00799165  7505                 jne 0x79916c
// 00799167  b8180b9000           mov eax, 0x900b18
// 0079916c  50                   push eax
// 0079916d  8bcf                 mov ecx, edi
// 0079916f  e84cac0000           call 0x7a3dc0
// 00799174  6a03                 push 3
// 00799176  55                   push ebp
// 00799177  8d4c2448             lea ecx, [esp + 0x48]
// 0079917b  8bd8                 mov ebx, eax
// 0079917d  b806000000           mov eax, 6
// 00799182  51                   push ecx
// 00799183  8bce                 mov ecx, esi
// 00799185  c7462c01000000       mov dword ptr [esi + 0x2c], 1
// 0079918c  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 00799194  89442430             mov dword ptr [esp + 0x30], eax
// 00799198  c744243403000000     mov dword ptr [esp + 0x34], 3
// 007991a0  89442438             mov dword ptr [esp + 0x38], eax
// 007991a4  e817cc0600           call 0x805dc0
// 007991a9  68ff00ff00           push 0xff00ff
// 007991ae  8d542424             lea edx, [esp + 0x24]
// 007991b2  52                   push edx
// 007991b3  8b10                 mov edx, dword ptr [eax]
// 007991b5  83ec10               sub esp, 0x10
// 007991b8  8bcc                 mov ecx, esp
// 007991ba  8911                 mov dword ptr [ecx], edx
// 007991bc  8b5004               mov edx, dword ptr [eax + 4]
// 007991bf  895104               mov dword ptr [ecx + 4], edx
// 007991c2  8b5008               mov edx, dword ptr [eax + 8]
// 007991c5  8b400c               mov eax, dword ptr [eax + 0xc]
// 007991c8  895108               mov dword ptr [ecx + 8], edx
// 007991cb  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 007991cf  89410c               mov dword ptr [ecx + 0xc], eax
// 007991d2  8d4c2428             lea ecx, [esp + 0x28]
// 007991d6  51                   push ecx
// 007991d7  52                   push edx
// 007991d8  8bce                 mov ecx, esi
// 007991da  e821d10600           call 0x806300
// 007991df  6a03                 push 3
// 007991e1  6a00                 push 0
// 007991e3  8d442448             lea eax, [esp + 0x48]
// 007991e7  50                   push eax
// 007991e8  8bcb                 mov ecx, ebx
// 007991ea  e8d1cb0600           call 0x805dc0
// 007991ef  8b4808               mov ecx, dword ptr [eax + 8]
// 007991f2  2b08                 sub ecx, dword ptr [eax]
// 007991f4  8b700c               mov esi, dword ptr [eax + 0xc]
// 007991f7  2b7004               sub esi, dword ptr [eax + 4]
// 007991fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 007991fe  2bc1                 sub eax, ecx
// 00799200  03442418             add eax, dword ptr [esp + 0x18]
// 00799204  6a03                 push 3
// 00799206  99                   cdq 
// 00799207  2bc2                 sub eax, edx
// 00799209  8bf8                 mov edi, eax
// 0079920b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0079920f  2bc6                 sub eax, esi
// 00799211  03442418             add eax, dword ptr [esp + 0x18]
// 00799215  d1ff                 sar edi, 1
// 00799217  99                   cdq 
// 00799218  2bc2                 sub eax, edx
// 0079921a  d1f8                 sar eax, 1
// 0079921c  89442438             mov dword ptr [esp + 0x38], eax
// 00799220  897c2434             mov dword ptr [esp + 0x34], edi
// 00799224  03f9                 add edi, ecx
// 00799226  03c6                 add eax, esi
// 00799228  55                   push ebp
// 00799229  8d4c2448             lea ecx, [esp + 0x48]
// 0079922d  89442444             mov dword ptr [esp + 0x44], eax
// 00799231  33c0                 xor eax, eax
// 00799233  51                   push ecx
// 00799234  8bcb                 mov ecx, ebx
// 00799236  897c2444             mov dword ptr [esp + 0x44], edi
// 0079923a  8944242c             mov dword ptr [esp + 0x2c], eax
// 0079923e  89442430             mov dword ptr [esp + 0x30], eax
// 00799242  89442434             mov dword ptr [esp + 0x34], eax
// 00799246  89442438             mov dword ptr [esp + 0x38], eax
// 0079924a  e871cb0600           call 0x805dc0
// 0079924f  68ff00ff00           push 0xff00ff
// 00799254  8d542424             lea edx, [esp + 0x24]
// 00799258  52                   push edx
// 00799259  8b10                 mov edx, dword ptr [eax]
// 0079925b  83ec10               sub esp, 0x10
// 0079925e  8bcc                 mov ecx, esp
// 00799260  8911                 mov dword ptr [ecx], edx
// 00799262  8b5004               mov edx, dword ptr [eax + 4]
// 00799265  895104               mov dword ptr [ecx + 4], edx
// 00799268  8b5008               mov edx, dword ptr [eax + 8]
// 0079926b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0079926e  895108               mov dword ptr [ecx + 8], edx
// 00799271  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00799275  89410c               mov dword ptr [ecx + 0xc], eax
// 00799278  8d4c2448             lea ecx, [esp + 0x48]
// 0079927c  51                   push ecx
// 0079927d  52                   push edx
// 0079927e  8bcb                 mov ecx, ebx
// 00799280  e87bd00600           call 0x806300
// 00799285  5f                   pop edi
// 00799286  5e                   pop esi
// 00799287  5d                   pop ebp
// 00799288  5b                   pop ebx
// 00799289  83c440               add esp, 0x40
// 0079928c  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonScrollButton@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp