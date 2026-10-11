// roc 2010-06 005f1190  unit: TextXmlWriter  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f1190
//
// 005f1190  83ec10               sub esp, 0x10
// 005f1193  53                   push ebx
// 005f1194  55                   push ebp
// 005f1195  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005f1199  56                   push esi
// 005f119a  55                   push ebp
// 005f119b  8bf1                 mov esi, ecx
// 005f119d  e8aee9ffff           call 0x5efb50
// 005f11a2  8bd8                 mov ebx, eax
// 005f11a4  895c2410             mov dword ptr [esp + 0x10], ebx
// 005f11a8  85f6                 test esi, esi
// 005f11aa  7506                 jne 0x5f11b2
// 005f11ac  ff150ca99e00         call dword ptr [0x9ea90c]
// 005f11b2  8b06                 mov eax, dword ptr [esi]
// 005f11b4  57                   push edi
// 005f11b5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005f11b8  89442410             mov dword ptr [esp + 0x10], eax
// 005f11bc  85c0                 test eax, eax
// 005f11be  7404                 je 0x5f11c4
// 005f11c0  3bc0                 cmp eax, eax
// 005f11c2  7406                 je 0x5f11ca
// 005f11c4  ff150ca99e00         call dword ptr [0x9ea90c]
// 005f11ca  3bdf                 cmp ebx, edi
// 005f11cc  5f                   pop edi
// 005f11cd  7418                 je 0x5f11e7
// 005f11cf  83c30c               add ebx, 0xc
// 005f11d2  53                   push ebx
// 005f11d3  55                   push ebp
// 005f11d4  ff151ca59e00         call dword ptr [0x9ea51c]
// 005f11da  83c408               add esp, 8
// 005f11dd  84c0                 test al, al
// 005f11df  7506                 jne 0x5f11e7
// 005f11e1  8d4c240c             lea ecx, [esp + 0xc]
// 005f11e5  eb11                 jmp 0x5f11f8
// 005f11e7  8b0e                 mov ecx, dword ptr [esi]
// 005f11e9  8b4618               mov eax, dword ptr [esi + 0x18]
// 005f11ec  894c2414             mov dword ptr [esp + 0x14], ecx
// 005f11f0  89442418             mov dword ptr [esp + 0x18], eax
// 005f11f4  8d4c2414             lea ecx, [esp + 0x14]
// 005f11f8  8b11                 mov edx, dword ptr [ecx]
// 005f11fa  8b442420             mov eax, dword ptr [esp + 0x20]
// 005f11fe  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f1201  5e                   pop esi
// 005f1202  5d                   pop ebp
// 005f1203  8910                 mov dword ptr [eax], edx
// 005f1205  894804               mov dword ptr [eax + 4], ecx
// 005f1208  5b                   pop ebx
// 005f1209  83c410               add esp, 0x10
// 005f120c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
