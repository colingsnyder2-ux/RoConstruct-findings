// roc 2009-12 007691b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007691b0
//
// 007691b0  83ec10               sub esp, 0x10
// 007691b3  53                   push ebx
// 007691b4  55                   push ebp
// 007691b5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007691b9  56                   push esi
// 007691ba  55                   push ebp
// 007691bb  8bf1                 mov esi, ecx
// 007691bd  e87e57fdff           call 0x73e940
// 007691c2  8bd8                 mov ebx, eax
// 007691c4  895c2410             mov dword ptr [esp + 0x10], ebx
// 007691c8  85f6                 test esi, esi
// 007691ca  7506                 jne 0x7691d2
// 007691cc  ff1560b79800         call dword ptr [0x98b760]
// 007691d2  8b06                 mov eax, dword ptr [esi]
// 007691d4  57                   push edi
// 007691d5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 007691d8  89442410             mov dword ptr [esp + 0x10], eax
// 007691dc  85c0                 test eax, eax
// 007691de  7404                 je 0x7691e4
// 007691e0  3bc0                 cmp eax, eax
// 007691e2  7406                 je 0x7691ea
// 007691e4  ff1560b79800         call dword ptr [0x98b760]
// 007691ea  3bdf                 cmp ebx, edi
// 007691ec  5f                   pop edi
// 007691ed  7418                 je 0x769207
// 007691ef  83c30c               add ebx, 0xc
// 007691f2  53                   push ebx
// 007691f3  55                   push ebp
// 007691f4  ff15d8b59800         call dword ptr [0x98b5d8]
// 007691fa  83c408               add esp, 8
// 007691fd  84c0                 test al, al
// 007691ff  7506                 jne 0x769207
// 00769201  8d4c240c             lea ecx, [esp + 0xc]
// 00769205  eb11                 jmp 0x769218
// 00769207  8b0e                 mov ecx, dword ptr [esi]
// 00769209  8b4618               mov eax, dword ptr [esi + 0x18]
// 0076920c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00769210  89442418             mov dword ptr [esp + 0x18], eax
// 00769214  8d4c2414             lea ecx, [esp + 0x14]
// 00769218  8b11                 mov edx, dword ptr [ecx]
// 0076921a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0076921e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00769221  5e                   pop esi
// 00769222  5d                   pop ebp
// 00769223  8910                 mov dword ptr [eax], edx
// 00769225  894804               mov dword ptr [eax + 4], ecx
// 00769228  5b                   pop ebx
// 00769229  83c410               add esp, 0x10
// 0076922c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
