// roc 2008-06 0055e750  unit: RBX::MD5HasherImpl  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055e750
//
// 0055e750  83ec10               sub esp, 0x10
// 0055e753  53                   push ebx
// 0055e754  55                   push ebp
// 0055e755  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0055e759  56                   push esi
// 0055e75a  55                   push ebp
// 0055e75b  8bf1                 mov esi, ecx
// 0055e75d  e82ee3ffff           call 0x55ca90
// 0055e762  8bd8                 mov ebx, eax
// 0055e764  895c2410             mov dword ptr [esp + 0x10], ebx
// 0055e768  85f6                 test esi, esi
// 0055e76a  7506                 jne 0x55e772
// 0055e76c  ff1590288000         call dword ptr [0x802890]
// 0055e772  8b06                 mov eax, dword ptr [esi]
// 0055e774  57                   push edi
// 0055e775  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0055e778  89442410             mov dword ptr [esp + 0x10], eax
// 0055e77c  85c0                 test eax, eax
// 0055e77e  7404                 je 0x55e784
// 0055e780  3bc0                 cmp eax, eax
// 0055e782  7406                 je 0x55e78a
// 0055e784  ff1590288000         call dword ptr [0x802890]
// 0055e78a  3bdf                 cmp ebx, edi
// 0055e78c  5f                   pop edi
// 0055e78d  7418                 je 0x55e7a7
// 0055e78f  83c30c               add ebx, 0xc
// 0055e792  53                   push ebx
// 0055e793  55                   push ebp
// 0055e794  ff155c238000         call dword ptr [0x80235c]
// 0055e79a  83c408               add esp, 8
// 0055e79d  84c0                 test al, al
// 0055e79f  7506                 jne 0x55e7a7
// 0055e7a1  8d4c240c             lea ecx, [esp + 0xc]
// 0055e7a5  eb11                 jmp 0x55e7b8
// 0055e7a7  8b0e                 mov ecx, dword ptr [esi]
// 0055e7a9  8b4618               mov eax, dword ptr [esi + 0x18]
// 0055e7ac  894c2414             mov dword ptr [esp + 0x14], ecx
// 0055e7b0  89442418             mov dword ptr [esp + 0x18], eax
// 0055e7b4  8d4c2414             lea ecx, [esp + 0x14]
// 0055e7b8  8b11                 mov edx, dword ptr [ecx]
// 0055e7ba  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055e7be  8b4904               mov ecx, dword ptr [ecx + 4]
// 0055e7c1  5e                   pop esi
// 0055e7c2  5d                   pop ebp
// 0055e7c3  8910                 mov dword ptr [eax], edx
// 0055e7c5  894804               mov dword ptr [eax + 4], ecx
// 0055e7c8  5b                   pop ebx
// 0055e7c9  83c410               add esp, 0x10
// 0055e7cc  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
