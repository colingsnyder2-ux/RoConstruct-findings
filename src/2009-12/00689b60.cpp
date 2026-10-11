// roc 2009-12 00689b60  unit: TextXmlWriter  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00689b60
//
// 00689b60  83ec10               sub esp, 0x10
// 00689b63  53                   push ebx
// 00689b64  55                   push ebp
// 00689b65  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00689b69  56                   push esi
// 00689b6a  55                   push ebp
// 00689b6b  8bf1                 mov esi, ecx
// 00689b6d  e8aebadfff           call 0x485620
// 00689b72  8bd8                 mov ebx, eax
// 00689b74  895c2410             mov dword ptr [esp + 0x10], ebx
// 00689b78  85f6                 test esi, esi
// 00689b7a  7506                 jne 0x689b82
// 00689b7c  ff1560b79800         call dword ptr [0x98b760]
// 00689b82  8b06                 mov eax, dword ptr [esi]
// 00689b84  57                   push edi
// 00689b85  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00689b88  89442410             mov dword ptr [esp + 0x10], eax
// 00689b8c  85c0                 test eax, eax
// 00689b8e  7404                 je 0x689b94
// 00689b90  3bc0                 cmp eax, eax
// 00689b92  7406                 je 0x689b9a
// 00689b94  ff1560b79800         call dword ptr [0x98b760]
// 00689b9a  3bdf                 cmp ebx, edi
// 00689b9c  5f                   pop edi
// 00689b9d  7418                 je 0x689bb7
// 00689b9f  83c30c               add ebx, 0xc
// 00689ba2  53                   push ebx
// 00689ba3  55                   push ebp
// 00689ba4  ff15d8b59800         call dword ptr [0x98b5d8]
// 00689baa  83c408               add esp, 8
// 00689bad  84c0                 test al, al
// 00689baf  7506                 jne 0x689bb7
// 00689bb1  8d4c240c             lea ecx, [esp + 0xc]
// 00689bb5  eb11                 jmp 0x689bc8
// 00689bb7  8b0e                 mov ecx, dword ptr [esi]
// 00689bb9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00689bbc  894c2414             mov dword ptr [esp + 0x14], ecx
// 00689bc0  89442418             mov dword ptr [esp + 0x18], eax
// 00689bc4  8d4c2414             lea ecx, [esp + 0x14]
// 00689bc8  8b11                 mov edx, dword ptr [ecx]
// 00689bca  8b442420             mov eax, dword ptr [esp + 0x20]
// 00689bce  8b4904               mov ecx, dword ptr [ecx + 4]
// 00689bd1  5e                   pop esi
// 00689bd2  5d                   pop ebp
// 00689bd3  8910                 mov dword ptr [eax], edx
// 00689bd5  894804               mov dword ptr [eax + 4], ecx
// 00689bd8  5b                   pop ebx
// 00689bd9  83c410               add esp, 0x10
// 00689bdc  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
