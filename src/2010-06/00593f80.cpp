// roc 2010-06 00593f80  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00593f80
//
// 00593f80  83ec10               sub esp, 0x10
// 00593f83  53                   push ebx
// 00593f84  55                   push ebp
// 00593f85  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00593f89  56                   push esi
// 00593f8a  55                   push ebp
// 00593f8b  8bf1                 mov esi, ecx
// 00593f8d  e81effffff           call 0x593eb0
// 00593f92  8bd8                 mov ebx, eax
// 00593f94  895c2410             mov dword ptr [esp + 0x10], ebx
// 00593f98  85f6                 test esi, esi
// 00593f9a  7506                 jne 0x593fa2
// 00593f9c  ff150ca99e00         call dword ptr [0x9ea90c]
// 00593fa2  8b06                 mov eax, dword ptr [esi]
// 00593fa4  57                   push edi
// 00593fa5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00593fa8  89442410             mov dword ptr [esp + 0x10], eax
// 00593fac  85c0                 test eax, eax
// 00593fae  7404                 je 0x593fb4
// 00593fb0  3bc0                 cmp eax, eax
// 00593fb2  7406                 je 0x593fba
// 00593fb4  ff150ca99e00         call dword ptr [0x9ea90c]
// 00593fba  3bdf                 cmp ebx, edi
// 00593fbc  5f                   pop edi
// 00593fbd  7418                 je 0x593fd7
// 00593fbf  83c30c               add ebx, 0xc
// 00593fc2  53                   push ebx
// 00593fc3  55                   push ebp
// 00593fc4  ff151ca59e00         call dword ptr [0x9ea51c]
// 00593fca  83c408               add esp, 8
// 00593fcd  84c0                 test al, al
// 00593fcf  7506                 jne 0x593fd7
// 00593fd1  8d4c240c             lea ecx, [esp + 0xc]
// 00593fd5  eb11                 jmp 0x593fe8
// 00593fd7  8b0e                 mov ecx, dword ptr [esi]
// 00593fd9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00593fdc  894c2414             mov dword ptr [esp + 0x14], ecx
// 00593fe0  89442418             mov dword ptr [esp + 0x18], eax
// 00593fe4  8d4c2414             lea ecx, [esp + 0x14]
// 00593fe8  8b11                 mov edx, dword ptr [ecx]
// 00593fea  8b442420             mov eax, dword ptr [esp + 0x20]
// 00593fee  8b4904               mov ecx, dword ptr [ecx + 4]
// 00593ff1  5e                   pop esi
// 00593ff2  5d                   pop ebp
// 00593ff3  8910                 mov dword ptr [eax], edx
// 00593ff5  894804               mov dword ptr [eax + 4], ecx
// 00593ff8  5b                   pop ebx
// 00593ff9  83c410               add esp, 0x10
// 00593ffc  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
