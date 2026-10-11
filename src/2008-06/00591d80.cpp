// roc 2008-06 00591d80  unit: RBX::RootInstance  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00591d80
//
// 00591d80  83ec10               sub esp, 0x10
// 00591d83  53                   push ebx
// 00591d84  55                   push ebp
// 00591d85  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00591d89  56                   push esi
// 00591d8a  55                   push ebp
// 00591d8b  8bf1                 mov esi, ecx
// 00591d8d  e84efaffff           call 0x5917e0
// 00591d92  8bd8                 mov ebx, eax
// 00591d94  895c2410             mov dword ptr [esp + 0x10], ebx
// 00591d98  85f6                 test esi, esi
// 00591d9a  7506                 jne 0x591da2
// 00591d9c  ff1590288000         call dword ptr [0x802890]
// 00591da2  8b06                 mov eax, dword ptr [esi]
// 00591da4  57                   push edi
// 00591da5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00591da8  89442410             mov dword ptr [esp + 0x10], eax
// 00591dac  85c0                 test eax, eax
// 00591dae  7404                 je 0x591db4
// 00591db0  3bc0                 cmp eax, eax
// 00591db2  7406                 je 0x591dba
// 00591db4  ff1590288000         call dword ptr [0x802890]
// 00591dba  3bdf                 cmp ebx, edi
// 00591dbc  5f                   pop edi
// 00591dbd  7418                 je 0x591dd7
// 00591dbf  83c30c               add ebx, 0xc
// 00591dc2  53                   push ebx
// 00591dc3  55                   push ebp
// 00591dc4  ff155c238000         call dword ptr [0x80235c]
// 00591dca  83c408               add esp, 8
// 00591dcd  84c0                 test al, al
// 00591dcf  7506                 jne 0x591dd7
// 00591dd1  8d4c240c             lea ecx, [esp + 0xc]
// 00591dd5  eb11                 jmp 0x591de8
// 00591dd7  8b0e                 mov ecx, dword ptr [esi]
// 00591dd9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00591ddc  894c2414             mov dword ptr [esp + 0x14], ecx
// 00591de0  89442418             mov dword ptr [esp + 0x18], eax
// 00591de4  8d4c2414             lea ecx, [esp + 0x14]
// 00591de8  8b11                 mov edx, dword ptr [ecx]
// 00591dea  8b442420             mov eax, dword ptr [esp + 0x20]
// 00591dee  8b4904               mov ecx, dword ptr [ecx + 4]
// 00591df1  5e                   pop esi
// 00591df2  5d                   pop ebp
// 00591df3  8910                 mov dword ptr [eax], edx
// 00591df5  894804               mov dword ptr [eax + 4], ecx
// 00591df8  5b                   pop ebx
// 00591df9  83c410               add esp, 0x10
// 00591dfc  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
