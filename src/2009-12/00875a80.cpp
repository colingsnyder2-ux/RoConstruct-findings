// roc 2009-12 00875a80  unit: CXTPRibbonTheme  size: 431 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00875a80
//
// 00875a80  83ec40               sub esp, 0x40
// 00875a83  53                   push ebx
// 00875a84  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00875a88  55                   push ebp
// 00875a89  56                   push esi
// 00875a8a  57                   push edi
// 00875a8b  8bf9                 mov edi, ecx
// 00875a8d  b84c17a000           mov eax, 0xa0174c
// 00875a92  85db                 test ebx, ebx
// 00875a94  7505                 jne 0x875a9b
// 00875a96  b83417a000           mov eax, 0xa01734
// 00875a9b  50                   push eax
// 00875a9c  e85f920000           call 0x87ed00
// 00875aa1  8bf0                 mov esi, eax
// 00875aa3  85f6                 test esi, esi
// 00875aa5  0f847a010000         je 0x875c25
// 00875aab  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00875aaf  8b85c0000000         mov eax, dword ptr [ebp + 0xc0]
// 00875ab5  8b95c8000000         mov edx, dword ptr [ebp + 0xc8]
// 00875abb  8b8dc4000000         mov ecx, dword ptr [ebp + 0xc4]
// 00875ac1  89442410             mov dword ptr [esp + 0x10], eax
// 00875ac5  8b85cc000000         mov eax, dword ptr [ebp + 0xcc]
// 00875acb  89542418             mov dword ptr [esp + 0x18], edx
// 00875acf  8b5500               mov edx, dword ptr [ebp]
// 00875ad2  894c2414             mov dword ptr [esp + 0x14], ecx
// 00875ad6  8944241c             mov dword ptr [esp + 0x1c], eax
// 00875ada  8b4278               mov eax, dword ptr [edx + 0x78]
// 00875add  8bcd                 mov ecx, ebp
// 00875adf  ffd0                 call eax
// 00875ae1  85c0                 test eax, eax
// 00875ae3  7407                 je 0x875aec
// 00875ae5  bd02000000           mov ebp, 2
// 00875aea  eb12                 jmp 0x875afe
// 00875aec  8b5500               mov edx, dword ptr [ebp]
// 00875aef  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00875af2  8bcd                 mov ecx, ebp
// 00875af4  ffd0                 call eax
// 00875af6  8be8                 mov ebp, eax
// 00875af8  f7dd                 neg ebp
// 00875afa  1bed                 sbb ebp, ebp
// 00875afc  f7dd                 neg ebp
// 00875afe  b81817a000           mov eax, 0xa01718
// 00875b03  85db                 test ebx, ebx
// 00875b05  7505                 jne 0x875b0c
// 00875b07  b8f816a000           mov eax, 0xa016f8
// 00875b0c  50                   push eax
// 00875b0d  8bcf                 mov ecx, edi
// 00875b0f  e8ec910000           call 0x87ed00
// 00875b14  6a03                 push 3
// 00875b16  55                   push ebp
// 00875b17  8d4c2448             lea ecx, [esp + 0x48]
// 00875b1b  8bd8                 mov ebx, eax
// 00875b1d  b806000000           mov eax, 6
// 00875b22  51                   push ecx
// 00875b23  8bce                 mov ecx, esi
// 00875b25  c7462c01000000       mov dword ptr [esi + 0x2c], 1
// 00875b2c  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 00875b34  89442430             mov dword ptr [esp + 0x30], eax
// 00875b38  c744243403000000     mov dword ptr [esp + 0x34], 3
// 00875b40  89442438             mov dword ptr [esp + 0x38], eax
// 00875b44  e877ad0600           call 0x8e08c0
// 00875b49  68ff00ff00           push 0xff00ff
// 00875b4e  8d542424             lea edx, [esp + 0x24]
// 00875b52  52                   push edx
// 00875b53  8b10                 mov edx, dword ptr [eax]
// 00875b55  83ec10               sub esp, 0x10
// 00875b58  8bcc                 mov ecx, esp
// 00875b5a  8911                 mov dword ptr [ecx], edx
// 00875b5c  8b5004               mov edx, dword ptr [eax + 4]
// 00875b5f  895104               mov dword ptr [ecx + 4], edx
// 00875b62  8b5008               mov edx, dword ptr [eax + 8]
// 00875b65  8b400c               mov eax, dword ptr [eax + 0xc]
// 00875b68  895108               mov dword ptr [ecx + 8], edx
// 00875b6b  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00875b6f  89410c               mov dword ptr [ecx + 0xc], eax
// 00875b72  8d4c2428             lea ecx, [esp + 0x28]
// 00875b76  51                   push ecx
// 00875b77  52                   push edx
// 00875b78  8bce                 mov ecx, esi
// 00875b7a  e881b20600           call 0x8e0e00
// 00875b7f  6a03                 push 3
// 00875b81  6a00                 push 0
// 00875b83  8d442448             lea eax, [esp + 0x48]
// 00875b87  50                   push eax
// 00875b88  8bcb                 mov ecx, ebx
// 00875b8a  e831ad0600           call 0x8e08c0
// 00875b8f  8b4808               mov ecx, dword ptr [eax + 8]
// 00875b92  2b08                 sub ecx, dword ptr [eax]
// 00875b94  8b700c               mov esi, dword ptr [eax + 0xc]
// 00875b97  2b7004               sub esi, dword ptr [eax + 4]
// 00875b9a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00875b9e  2bc1                 sub eax, ecx
// 00875ba0  03442418             add eax, dword ptr [esp + 0x18]
// 00875ba4  6a03                 push 3
// 00875ba6  99                   cdq 
// 00875ba7  2bc2                 sub eax, edx
// 00875ba9  8bf8                 mov edi, eax
// 00875bab  8b442420             mov eax, dword ptr [esp + 0x20]
// 00875baf  2bc6                 sub eax, esi
// 00875bb1  03442418             add eax, dword ptr [esp + 0x18]
// 00875bb5  d1ff                 sar edi, 1
// 00875bb7  99                   cdq 
// 00875bb8  2bc2                 sub eax, edx
// 00875bba  d1f8                 sar eax, 1
// 00875bbc  89442438             mov dword ptr [esp + 0x38], eax
// 00875bc0  897c2434             mov dword ptr [esp + 0x34], edi
// 00875bc4  03f9                 add edi, ecx
// 00875bc6  03c6                 add eax, esi
// 00875bc8  55                   push ebp
// 00875bc9  8d4c2448             lea ecx, [esp + 0x48]
// 00875bcd  89442444             mov dword ptr [esp + 0x44], eax
// 00875bd1  33c0                 xor eax, eax
// 00875bd3  51                   push ecx
// 00875bd4  8bcb                 mov ecx, ebx
// 00875bd6  897c2444             mov dword ptr [esp + 0x44], edi
// 00875bda  8944242c             mov dword ptr [esp + 0x2c], eax
// 00875bde  89442430             mov dword ptr [esp + 0x30], eax
// 00875be2  89442434             mov dword ptr [esp + 0x34], eax
// 00875be6  89442438             mov dword ptr [esp + 0x38], eax
// 00875bea  e8d1ac0600           call 0x8e08c0
// 00875bef  68ff00ff00           push 0xff00ff
// 00875bf4  8d542424             lea edx, [esp + 0x24]
// 00875bf8  52                   push edx
// 00875bf9  8b10                 mov edx, dword ptr [eax]
// 00875bfb  83ec10               sub esp, 0x10
// 00875bfe  8bcc                 mov ecx, esp
// 00875c00  8911                 mov dword ptr [ecx], edx
// 00875c02  8b5004               mov edx, dword ptr [eax + 4]
// 00875c05  895104               mov dword ptr [ecx + 4], edx
// 00875c08  8b5008               mov edx, dword ptr [eax + 8]
// 00875c0b  8b400c               mov eax, dword ptr [eax + 0xc]
// 00875c0e  895108               mov dword ptr [ecx + 8], edx
// 00875c11  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00875c15  89410c               mov dword ptr [ecx + 0xc], eax
// 00875c18  8d4c2448             lea ecx, [esp + 0x48]
// 00875c1c  51                   push ecx
// 00875c1d  52                   push edx
// 00875c1e  8bcb                 mov ecx, ebx
// 00875c20  e8dbb10600           call 0x8e0e00
// 00875c25  5f                   pop edi
// 00875c26  5e                   pop esi
// 00875c27  5d                   pop ebp
// 00875c28  5b                   pop ebx
// 00875c29  83c440               add esp, 0x40
// 00875c2c  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonScrollButton@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp