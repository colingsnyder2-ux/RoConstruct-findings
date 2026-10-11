// roc 2009-12 00480520  unit: RBX::AdornRbxGfx  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00480520
//
// 00480520  83ec10               sub esp, 0x10
// 00480523  53                   push ebx
// 00480524  55                   push ebp
// 00480525  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00480529  56                   push esi
// 0048052a  55                   push ebp
// 0048052b  8bf1                 mov esi, ecx
// 0048052d  e8bee9ffff           call 0x47eef0
// 00480532  8bd8                 mov ebx, eax
// 00480534  895c2410             mov dword ptr [esp + 0x10], ebx
// 00480538  85f6                 test esi, esi
// 0048053a  7506                 jne 0x480542
// 0048053c  ff1560b79800         call dword ptr [0x98b760]
// 00480542  8b06                 mov eax, dword ptr [esi]
// 00480544  57                   push edi
// 00480545  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00480548  89442410             mov dword ptr [esp + 0x10], eax
// 0048054c  85c0                 test eax, eax
// 0048054e  7404                 je 0x480554
// 00480550  3bc0                 cmp eax, eax
// 00480552  7406                 je 0x48055a
// 00480554  ff1560b79800         call dword ptr [0x98b760]
// 0048055a  3bdf                 cmp ebx, edi
// 0048055c  5f                   pop edi
// 0048055d  7418                 je 0x480577
// 0048055f  83c30c               add ebx, 0xc
// 00480562  53                   push ebx
// 00480563  55                   push ebp
// 00480564  ff15d8b59800         call dword ptr [0x98b5d8]
// 0048056a  83c408               add esp, 8
// 0048056d  84c0                 test al, al
// 0048056f  7506                 jne 0x480577
// 00480571  8d4c240c             lea ecx, [esp + 0xc]
// 00480575  eb11                 jmp 0x480588
// 00480577  8b0e                 mov ecx, dword ptr [esi]
// 00480579  8b4618               mov eax, dword ptr [esi + 0x18]
// 0048057c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00480580  89442418             mov dword ptr [esp + 0x18], eax
// 00480584  8d4c2414             lea ecx, [esp + 0x14]
// 00480588  8b11                 mov edx, dword ptr [ecx]
// 0048058a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0048058e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00480591  5e                   pop esi
// 00480592  5d                   pop ebp
// 00480593  8910                 mov dword ptr [eax], edx
// 00480595  894804               mov dword ptr [eax + 4], ecx
// 00480598  5b                   pop ebx
// 00480599  83c410               add esp, 0x10
// 0048059c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
