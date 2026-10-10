// roc 2012-06 00a37480  unit: CXTPDockingPaneWindowSelect  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a37480
//
// 00a37480  56                   push esi
// 00a37481  8bf1                 mov esi, ecx
// 00a37483  e808fdf9ff           call 0x9d7190
// 00a37488  8d442408             lea eax, [esp + 8]
// 00a3748c  50                   push eax
// 00a3748d  56                   push esi
// 00a3748e  e89debf9ff           call 0x9d6030
// 00a37493  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a37497  83c408               add esp, 8
// 00a3749a  83f809               cmp eax, 9
// 00a3749d  0f85a4000000         jne 0xa37547
// 00a374a3  6a10                 push 0x10
// 00a374a5  ff15843ab200         call dword ptr [0xb23a84]
// 00a374ab  6685c0               test ax, ax
// 00a374ae  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00a374b4  7c48                 jl 0xa374fe
// 00a374b6  85c0                 test eax, eax
// 00a374b8  7406                 je 0xa374c0
// 00a374ba  8b4014               mov eax, dword ptr [eax + 0x14]
// 00a374bd  40                   inc eax
// 00a374be  eb02                 jmp 0xa374c2
// 00a374c0  33c0                 xor eax, eax
// 00a374c2  8b9604010000         mov edx, dword ptr [esi + 0x104]
// 00a374c8  3bc2                 cmp eax, edx
// 00a374ca  7c1c                 jl 0xa374e8
// 00a374cc  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 00a374d2  8bc1                 mov eax, ecx
// 00a374d4  2bc2                 sub eax, edx
// 00a374d6  f7d8                 neg eax
// 00a374d8  1bc0                 sbb eax, eax
// 00a374da  23c1                 and eax, ecx
// 00a374dc  50                   push eax
// 00a374dd  8bce                 mov ecx, esi
// 00a374df  e86cffffff           call 0xa37450
// 00a374e4  5e                   pop esi
// 00a374e5  c20c00               ret 0xc
// 00a374e8  3b8630010000         cmp eax, dword ptr [esi + 0x130]
// 00a374ee  7502                 jne 0xa374f2
// 00a374f0  33c0                 xor eax, eax
// 00a374f2  50                   push eax
// 00a374f3  8bce                 mov ecx, esi
// 00a374f5  e856ffffff           call 0xa37450
// 00a374fa  5e                   pop esi
// 00a374fb  c20c00               ret 0xc
// 00a374fe  85c0                 test eax, eax
// 00a37500  7405                 je 0xa37507
// 00a37502  8b4014               mov eax, dword ptr [eax + 0x14]
// 00a37505  eb06                 jmp 0xa3750d
// 00a37507  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 00a3750d  48                   dec eax
// 00a3750e  85c0                 test eax, eax
// 00a37510  7d17                 jge 0xa37529
// 00a37512  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 00a37518  85c0                 test eax, eax
// 00a3751a  7418                 je 0xa37534
// 00a3751c  48                   dec eax
// 00a3751d  50                   push eax
// 00a3751e  8bce                 mov ecx, esi
// 00a37520  e82bffffff           call 0xa37450
// 00a37525  5e                   pop esi
// 00a37526  c20c00               ret 0xc
// 00a37529  8b8e30010000         mov ecx, dword ptr [esi + 0x130]
// 00a3752f  49                   dec ecx
// 00a37530  3bc1                 cmp eax, ecx
// 00a37532  7507                 jne 0xa3753b
// 00a37534  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 00a3753a  48                   dec eax
// 00a3753b  50                   push eax
// 00a3753c  8bce                 mov ecx, esi
// 00a3753e  e80dffffff           call 0xa37450
// 00a37543  5e                   pop esi
// 00a37544  c20c00               ret 0xc
// 00a37547  57                   push edi
// 00a37548  83f825               cmp eax, 0x25
// 00a3754b  755d                 jne 0xa375aa
// 00a3754d  8bbe18010000         mov edi, dword ptr [esi + 0x118]
// 00a37553  83ff01               cmp edi, 1
// 00a37556  0f8e19010000         jle 0xa37675
// 00a3755c  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00a37562  85c0                 test eax, eax
// 00a37564  0f840b010000         je 0xa37675
// 00a3756a  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00a3756d  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00a37570  8d41ff               lea eax, [ecx - 1]
// 00a37573  85c9                 test ecx, ecx
// 00a37575  7f03                 jg 0xa3757a
// 00a37577  8d47ff               lea eax, [edi - 1]
// 00a3757a  85c0                 test eax, eax
// 00a3757c  7c27                 jl 0xa375a5
// 00a3757e  3bc7                 cmp eax, edi
// 00a37580  7d23                 jge 0xa375a5
// 00a37582  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 00a37588  8d04c1               lea eax, [ecx + eax*8]
// 00a3758b  8b08                 mov ecx, dword ptr [eax]
// 00a3758d  8b4004               mov eax, dword ptr [eax + 4]
// 00a37590  03ca                 add ecx, edx
// 00a37592  3bc8                 cmp ecx, eax
// 00a37594  7f02                 jg 0xa37598
// 00a37596  8bc1                 mov eax, ecx
// 00a37598  50                   push eax
// 00a37599  8bce                 mov ecx, esi
// 00a3759b  e8b0feffff           call 0xa37450
// 00a375a0  5f                   pop edi
// 00a375a1  5e                   pop esi
// 00a375a2  c20c00               ret 0xc
// 00a375a5  e816aef4ff           call 0x9823c0
// 00a375aa  83f827               cmp eax, 0x27
// 00a375ad  7556                 jne 0xa37605
// 00a375af  8b9618010000         mov edx, dword ptr [esi + 0x118]
// 00a375b5  83fa01               cmp edx, 1
// 00a375b8  0f8eb7000000         jle 0xa37675
// 00a375be  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00a375c4  85c0                 test eax, eax
// 00a375c6  0f84a9000000         je 0xa37675
// 00a375cc  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00a375cf  8b781c               mov edi, dword ptr [eax + 0x1c]
// 00a375d2  4a                   dec edx
// 00a375d3  3bca                 cmp ecx, edx
// 00a375d5  7d05                 jge 0xa375dc
// 00a375d7  8d4101               lea eax, [ecx + 1]
// 00a375da  eb02                 jmp 0xa375de
// 00a375dc  33c0                 xor eax, eax
// 00a375de  50                   push eax
// 00a375df  8d8e10010000         lea ecx, [esi + 0x110]
// 00a375e5  e8c6ebffff           call 0xa361b0
// 00a375ea  8b10                 mov edx, dword ptr [eax]
// 00a375ec  8b4004               mov eax, dword ptr [eax + 4]
// 00a375ef  8d0c3a               lea ecx, [edx + edi]
// 00a375f2  3bc8                 cmp ecx, eax
// 00a375f4  7f02                 jg 0xa375f8
// 00a375f6  8bc1                 mov eax, ecx
// 00a375f8  50                   push eax
// 00a375f9  8bce                 mov ecx, esi
// 00a375fb  e850feffff           call 0xa37450
// 00a37600  5f                   pop edi
// 00a37601  5e                   pop esi
// 00a37602  c20c00               ret 0xc
// 00a37605  83f828               cmp eax, 0x28
// 00a37608  752d                 jne 0xa37637
// 00a3760a  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00a37610  85c0                 test eax, eax
// 00a37612  7406                 je 0xa3761a
// 00a37614  8b4014               mov eax, dword ptr [eax + 0x14]
// 00a37617  40                   inc eax
// 00a37618  eb02                 jmp 0xa3761c
// 00a3761a  33c0                 xor eax, eax
// 00a3761c  33c9                 xor ecx, ecx
// 00a3761e  3b8604010000         cmp eax, dword ptr [esi + 0x104]
// 00a37624  0f9dc1               setge cl
// 00a37627  49                   dec ecx
// 00a37628  23c8                 and ecx, eax
// 00a3762a  51                   push ecx
// 00a3762b  8bce                 mov ecx, esi
// 00a3762d  e81efeffff           call 0xa37450
// 00a37632  5f                   pop edi
// 00a37633  5e                   pop esi
// 00a37634  c20c00               ret 0xc
// 00a37637  83f826               cmp eax, 0x26
// 00a3763a  7526                 jne 0xa37662
// 00a3763c  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00a37642  85c0                 test eax, eax
// 00a37644  7408                 je 0xa3764e
// 00a37646  8b4014               mov eax, dword ptr [eax + 0x14]
// 00a37649  83e801               sub eax, 1
// 00a3764c  7907                 jns 0xa37655
// 00a3764e  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 00a37654  48                   dec eax
// 00a37655  50                   push eax
// 00a37656  8bce                 mov ecx, esi
// 00a37658  e8f3fdffff           call 0xa37450
// 00a3765d  5f                   pop edi
// 00a3765e  5e                   pop esi
// 00a3765f  c20c00               ret 0xc
// 00a37662  83f810               cmp eax, 0x10
// 00a37665  740e                 je 0xa37675
// 00a37667  8b16                 mov edx, dword ptr [esi]
// 00a37669  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 00a3766f  6a01                 push 1
// 00a37671  8bce                 mov ecx, esi
// 00a37673  ffd0                 call eax
// 00a37675  5f                   pop edi
// 00a37676  5e                   pop esi
// 00a37677  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneKeyboardHook.cpp (function ?OnKeyDown@CXTPDockingPaneWindowSelect@@QAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneKeyboardHook.cpp
