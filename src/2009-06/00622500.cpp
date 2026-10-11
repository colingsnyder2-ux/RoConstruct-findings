// roc 2009-06 00622500  unit: RBX::RootInstance  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00622500
//
// 00622500  83ec10               sub esp, 0x10
// 00622503  53                   push ebx
// 00622504  55                   push ebp
// 00622505  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00622509  56                   push esi
// 0062250a  55                   push ebp
// 0062250b  8bf1                 mov esi, ecx
// 0062250d  e80efdffff           call 0x622220
// 00622512  8bd8                 mov ebx, eax
// 00622514  895c2410             mov dword ptr [esp + 0x10], ebx
// 00622518  85f6                 test esi, esi
// 0062251a  7506                 jne 0x622522
// 0062251c  ff15ace98900         call dword ptr [0x89e9ac]
// 00622522  8b06                 mov eax, dword ptr [esi]
// 00622524  57                   push edi
// 00622525  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00622528  89442410             mov dword ptr [esp + 0x10], eax
// 0062252c  85c0                 test eax, eax
// 0062252e  7404                 je 0x622534
// 00622530  3bc0                 cmp eax, eax
// 00622532  7406                 je 0x62253a
// 00622534  ff15ace98900         call dword ptr [0x89e9ac]
// 0062253a  3bdf                 cmp ebx, edi
// 0062253c  5f                   pop edi
// 0062253d  7418                 je 0x622557
// 0062253f  83c30c               add ebx, 0xc
// 00622542  53                   push ebx
// 00622543  55                   push ebp
// 00622544  ff15e0e48900         call dword ptr [0x89e4e0]
// 0062254a  83c408               add esp, 8
// 0062254d  84c0                 test al, al
// 0062254f  7506                 jne 0x622557
// 00622551  8d4c240c             lea ecx, [esp + 0xc]
// 00622555  eb11                 jmp 0x622568
// 00622557  8b0e                 mov ecx, dword ptr [esi]
// 00622559  8b4618               mov eax, dword ptr [esi + 0x18]
// 0062255c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00622560  89442418             mov dword ptr [esp + 0x18], eax
// 00622564  8d4c2414             lea ecx, [esp + 0x14]
// 00622568  8b11                 mov edx, dword ptr [ecx]
// 0062256a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0062256e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00622571  5e                   pop esi
// 00622572  5d                   pop ebp
// 00622573  8910                 mov dword ptr [eax], edx
// 00622575  894804               mov dword ptr [eax + 4], ecx
// 00622578  5b                   pop ebx
// 00622579  83c410               add esp, 0x10
// 0062257c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
