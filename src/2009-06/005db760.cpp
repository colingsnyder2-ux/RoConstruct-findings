// roc 2009-06 005db760  unit: RBX::VInstance::?$NonFactoryProduct  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005db760
//
// 005db760  83ec10               sub esp, 0x10
// 005db763  53                   push ebx
// 005db764  55                   push ebp
// 005db765  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005db769  56                   push esi
// 005db76a  55                   push ebp
// 005db76b  8bf1                 mov esi, ecx
// 005db76d  e8eee2ffff           call 0x5d9a60
// 005db772  8bd8                 mov ebx, eax
// 005db774  895c2410             mov dword ptr [esp + 0x10], ebx
// 005db778  85f6                 test esi, esi
// 005db77a  7506                 jne 0x5db782
// 005db77c  ff15ace98900         call dword ptr [0x89e9ac]
// 005db782  8b06                 mov eax, dword ptr [esi]
// 005db784  57                   push edi
// 005db785  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005db788  89442410             mov dword ptr [esp + 0x10], eax
// 005db78c  85c0                 test eax, eax
// 005db78e  7404                 je 0x5db794
// 005db790  3bc0                 cmp eax, eax
// 005db792  7406                 je 0x5db79a
// 005db794  ff15ace98900         call dword ptr [0x89e9ac]
// 005db79a  3bdf                 cmp ebx, edi
// 005db79c  5f                   pop edi
// 005db79d  7418                 je 0x5db7b7
// 005db79f  83c30c               add ebx, 0xc
// 005db7a2  53                   push ebx
// 005db7a3  55                   push ebp
// 005db7a4  ff15e0e48900         call dword ptr [0x89e4e0]
// 005db7aa  83c408               add esp, 8
// 005db7ad  84c0                 test al, al
// 005db7af  7506                 jne 0x5db7b7
// 005db7b1  8d4c240c             lea ecx, [esp + 0xc]
// 005db7b5  eb11                 jmp 0x5db7c8
// 005db7b7  8b0e                 mov ecx, dword ptr [esi]
// 005db7b9  8b4618               mov eax, dword ptr [esi + 0x18]
// 005db7bc  894c2414             mov dword ptr [esp + 0x14], ecx
// 005db7c0  89442418             mov dword ptr [esp + 0x18], eax
// 005db7c4  8d4c2414             lea ecx, [esp + 0x14]
// 005db7c8  8b11                 mov edx, dword ptr [ecx]
// 005db7ca  8b442420             mov eax, dword ptr [esp + 0x20]
// 005db7ce  8b4904               mov ecx, dword ptr [ecx + 4]
// 005db7d1  5e                   pop esi
// 005db7d2  5d                   pop ebp
// 005db7d3  8910                 mov dword ptr [eax], edx
// 005db7d5  894804               mov dword ptr [eax + 4], ecx
// 005db7d8  5b                   pop ebx
// 005db7d9  83c410               add esp, 0x10
// 005db7dc  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
