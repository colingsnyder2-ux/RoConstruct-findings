// roc 2009-12 004804a0  unit: RBX::AdornRbxGfx  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004804a0
//
// 004804a0  83ec10               sub esp, 0x10
// 004804a3  53                   push ebx
// 004804a4  55                   push ebp
// 004804a5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004804a9  56                   push esi
// 004804aa  55                   push ebp
// 004804ab  8bf1                 mov esi, ecx
// 004804ad  e80e191b00           call 0x631dc0
// 004804b2  8bd8                 mov ebx, eax
// 004804b4  895c2410             mov dword ptr [esp + 0x10], ebx
// 004804b8  85f6                 test esi, esi
// 004804ba  7506                 jne 0x4804c2
// 004804bc  ff1560b79800         call dword ptr [0x98b760]
// 004804c2  8b06                 mov eax, dword ptr [esi]
// 004804c4  57                   push edi
// 004804c5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004804c8  89442410             mov dword ptr [esp + 0x10], eax
// 004804cc  85c0                 test eax, eax
// 004804ce  7404                 je 0x4804d4
// 004804d0  3bc0                 cmp eax, eax
// 004804d2  7406                 je 0x4804da
// 004804d4  ff1560b79800         call dword ptr [0x98b760]
// 004804da  3bdf                 cmp ebx, edi
// 004804dc  5f                   pop edi
// 004804dd  7418                 je 0x4804f7
// 004804df  83c30c               add ebx, 0xc
// 004804e2  53                   push ebx
// 004804e3  55                   push ebp
// 004804e4  ff15d8b59800         call dword ptr [0x98b5d8]
// 004804ea  83c408               add esp, 8
// 004804ed  84c0                 test al, al
// 004804ef  7506                 jne 0x4804f7
// 004804f1  8d4c240c             lea ecx, [esp + 0xc]
// 004804f5  eb11                 jmp 0x480508
// 004804f7  8b0e                 mov ecx, dword ptr [esi]
// 004804f9  8b4618               mov eax, dword ptr [esi + 0x18]
// 004804fc  894c2414             mov dword ptr [esp + 0x14], ecx
// 00480500  89442418             mov dword ptr [esp + 0x18], eax
// 00480504  8d4c2414             lea ecx, [esp + 0x14]
// 00480508  8b11                 mov edx, dword ptr [ecx]
// 0048050a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0048050e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00480511  5e                   pop esi
// 00480512  5d                   pop ebp
// 00480513  8910                 mov dword ptr [eax], edx
// 00480515  894804               mov dword ptr [eax + 4], ecx
// 00480518  5b                   pop ebx
// 00480519  83c410               add esp, 0x10
// 0048051c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
