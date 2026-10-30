// roc 2009-12 008980d0  unit: CXTPRibbonBar  size: 468 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008980d0
//
// 008980d0  83ec1c               sub esp, 0x1c
// 008980d3  56                   push esi
// 008980d4  8bf1                 mov esi, ecx
// 008980d6  e8f5c3f6ff           call 0x8044d0
// 008980db  8944240c             mov dword ptr [esp + 0xc], eax
// 008980df  85c0                 test eax, eax
// 008980e1  0f84b6010000         je 0x89829d
// 008980e7  55                   push ebp
// 008980e8  57                   push edi
// 008980e9  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008980ed  8d442410             lea eax, [esp + 0x10]
// 008980f1  50                   push eax
// 008980f2  8d4c2410             lea ecx, [esp + 0x10]
// 008980f6  51                   push ecx
// 008980f7  8d542420             lea edx, [esp + 0x20]
// 008980fb  52                   push edx
// 008980fc  8d442440             lea eax, [esp + 0x40]
// 00898100  50                   push eax
// 00898101  57                   push edi
// 00898102  8bce                 mov ecx, esi
// 00898104  e877d7f6ff           call 0x805880
// 00898109  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089810d  83f9ff               cmp ecx, -1
// 00898110  746f                 je 0x898181
// 00898112  51                   push ecx
// 00898113  8bce                 mov ecx, esi
// 00898115  e846d1f6ff           call 0x805260
// 0089811a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089811e  8be8                 mov ebp, eax
// 00898120  83f9ff               cmp ecx, -1
// 00898123  0f840a010000         je 0x898233
// 00898129  3bfd                 cmp edi, ebp
// 0089812b  0f8502010000         jne 0x898233
// 00898131  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00898135  2b442434             sub eax, dword ptr [esp + 0x34]
// 00898139  99                   cdq 
// 0089813a  33c2                 xor eax, edx
// 0089813c  2bc2                 sub eax, edx
// 0089813e  83f804               cmp eax, 4
// 00898141  7f16                 jg 0x898159
// 00898143  8b442440             mov eax, dword ptr [esp + 0x40]
// 00898147  2b442438             sub eax, dword ptr [esp + 0x38]
// 0089814b  99                   cdq 
// 0089814c  33c2                 xor eax, edx
// 0089814e  2bc2                 sub eax, edx
// 00898150  83f804               cmp eax, 4
// 00898153  0f8ece000000         jle 0x898227
// 00898159  51                   push ecx
// 0089815a  8bce                 mov ecx, esi
// 0089815c  e8ffd0f6ff           call 0x805260
// 00898161  837c241000           cmp dword ptr [esp + 0x10], 0
// 00898166  0f84af000000         je 0x89821b
// 0089816c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00898171  0f84a4000000         je 0x89821b
// 00898177  ba01000000           mov edx, 1
// 0089817c  e99c000000           jmp 0x89821d
// 00898181  33ed                 xor ebp, ebp
// 00898183  33ff                 xor edi, edi
// 00898185  837c241000           cmp dword ptr [esp + 0x10], 0
// 0089818a  7405                 je 0x898191
// 0089818c  41                   inc ecx
// 0089818d  894c240c             mov dword ptr [esp + 0xc], ecx
// 00898191  53                   push ebx
// 00898192  6a00                 push 0
// 00898194  6aff                 push -1
// 00898196  8bce                 mov ecx, esi
// 00898198  e803e4f6ff           call 0x8065a0
// 0089819d  8b16                 mov edx, dword ptr [esi]
// 0089819f  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 008981a5  6a00                 push 0
// 008981a7  6aff                 push -1
// 008981a9  8bce                 mov ecx, esi
// 008981ab  ffd0                 call eax
// 008981ad  33db                 xor ebx, ebx
// 008981af  395c2414             cmp dword ptr [esp + 0x14], ebx
// 008981b3  753e                 jne 0x8981f3
// 008981b5  395c2410             cmp dword ptr [esp + 0x10], ebx
// 008981b9  7c38                 jl 0x8981f3
// 008981bb  8bce                 mov ecx, esi
// 008981bd  e88ed0f6ff           call 0x805250
// 008981c2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008981c6  3bc8                 cmp ecx, eax
// 008981c8  7d29                 jge 0x8981f3
// 008981ca  51                   push ecx
// 008981cb  8bce                 mov ecx, esi
// 008981cd  e88ed0f6ff           call 0x805260
// 008981d2  8b9898000000         mov ebx, dword ptr [eax + 0x98]
// 008981d8  85db                 test ebx, ebx
// 008981da  7417                 je 0x8981f3
// 008981dc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008981e0  51                   push ecx
// 008981e1  8bce                 mov ecx, esi
// 008981e3  e878d0f6ff           call 0x805260
// 008981e8  8b10                 mov edx, dword ptr [eax]
// 008981ea  8bc8                 mov ecx, eax
// 008981ec  8b4264               mov eax, dword ptr [edx + 0x64]
// 008981ef  6a00                 push 0
// 008981f1  ffd0                 call eax
// 008981f3  6a00                 push 0
// 008981f5  85ff                 test edi, edi
// 008981f7  744d                 je 0x898246
// 008981f9  55                   push ebp
// 008981fa  8bcf                 mov ecx, edi
// 008981fc  e8df1a0500           call 0x8e9ce0
// 00898201  8b542434             mov edx, dword ptr [esp + 0x34]
// 00898205  33c9                 xor ecx, ecx
// 00898207  394c2418             cmp dword ptr [esp + 0x18], ecx
// 0089820b  0f95c1               setne cl
// 0089820e  03c1                 add eax, ecx
// 00898210  50                   push eax
// 00898211  52                   push edx
// 00898212  8bcf                 mov ecx, edi
// 00898214  e887200500           call 0x8ea2a0
// 00898219  eb40                 jmp 0x89825b
// 0089821b  33d2                 xor edx, edx
// 0089821d  8b38                 mov edi, dword ptr [eax]
// 0089821f  52                   push edx
// 00898220  8b5764               mov edx, dword ptr [edi + 0x64]
// 00898223  8bc8                 mov ecx, eax
// 00898225  ffd2                 call edx
// 00898227  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089822b  c70005000000         mov dword ptr [eax], 5
// 00898231  eb3f                 jmp 0x898272
// 00898233  85ed                 test ebp, ebp
// 00898235  0f8448ffffff         je 0x898183
// 0089823b  8bbd58010000         mov edi, dword ptr [ebp + 0x158]
// 00898241  e93fffffff           jmp 0x898185
// 00898246  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089824a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089824e  50                   push eax
// 0089824f  51                   push ecx
// 00898250  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00898256  e855f0faff           call 0x8472b0
// 0089825b  8bf8                 mov edi, eax
// 0089825d  8b17                 mov edx, dword ptr [edi]
// 0089825f  8b4264               mov eax, dword ptr [edx + 0x64]
// 00898262  53                   push ebx
// 00898263  8bcf                 mov ecx, edi
// 00898265  ffd0                 call eax
// 00898267  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089826b  57                   push edi
// 0089826c  e82fcbf7ff           call 0x814da0
// 00898271  5b                   pop ebx
// 00898272  8b16                 mov edx, dword ptr [esi]
// 00898274  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 0089827a  8bce                 mov ecx, esi
// 0089827c  ffd0                 call eax
// 0089827e  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00898284  51                   push ecx
// 00898285  ff159cca9800         call dword ptr [0x98ca9c]
// 0089828b  8b16                 mov edx, dword ptr [esi]
// 0089828d  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 00898293  6a01                 push 1
// 00898295  6a00                 push 0
// 00898297  8bce                 mov ecx, esi
// 00898299  ffd0                 call eax
// 0089829b  5f                   pop edi
// 0089829c  5d                   pop ebp
// 0089829d  5e                   pop esi
// 0089829e  83c41c               add esp, 0x1c
// 008982a1  c21800               ret 0x18
// copied from an identical function in another client (function ?OnCustomizeDrop@CXTPRibbonBar@@MAEXPAVCXTPControl@@AAKVCPoint@@2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp