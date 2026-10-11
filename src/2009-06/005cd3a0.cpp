// roc 2009-06 005cd3a0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cd3a0
//
// 005cd3a0  83ec10               sub esp, 0x10
// 005cd3a3  53                   push ebx
// 005cd3a4  55                   push ebp
// 005cd3a5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005cd3a9  56                   push esi
// 005cd3aa  55                   push ebp
// 005cd3ab  8bf1                 mov esi, ecx
// 005cd3ad  e8fefbffff           call 0x5ccfb0
// 005cd3b2  8bd8                 mov ebx, eax
// 005cd3b4  895c2410             mov dword ptr [esp + 0x10], ebx
// 005cd3b8  85f6                 test esi, esi
// 005cd3ba  7506                 jne 0x5cd3c2
// 005cd3bc  ff15ace98900         call dword ptr [0x89e9ac]
// 005cd3c2  8b06                 mov eax, dword ptr [esi]
// 005cd3c4  57                   push edi
// 005cd3c5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005cd3c8  89442410             mov dword ptr [esp + 0x10], eax
// 005cd3cc  85c0                 test eax, eax
// 005cd3ce  7404                 je 0x5cd3d4
// 005cd3d0  3bc0                 cmp eax, eax
// 005cd3d2  7406                 je 0x5cd3da
// 005cd3d4  ff15ace98900         call dword ptr [0x89e9ac]
// 005cd3da  3bdf                 cmp ebx, edi
// 005cd3dc  5f                   pop edi
// 005cd3dd  7418                 je 0x5cd3f7
// 005cd3df  83c30c               add ebx, 0xc
// 005cd3e2  53                   push ebx
// 005cd3e3  55                   push ebp
// 005cd3e4  ff15e0e48900         call dword ptr [0x89e4e0]
// 005cd3ea  83c408               add esp, 8
// 005cd3ed  84c0                 test al, al
// 005cd3ef  7506                 jne 0x5cd3f7
// 005cd3f1  8d4c240c             lea ecx, [esp + 0xc]
// 005cd3f5  eb11                 jmp 0x5cd408
// 005cd3f7  8b0e                 mov ecx, dword ptr [esi]
// 005cd3f9  8b4618               mov eax, dword ptr [esi + 0x18]
// 005cd3fc  894c2414             mov dword ptr [esp + 0x14], ecx
// 005cd400  89442418             mov dword ptr [esp + 0x18], eax
// 005cd404  8d4c2414             lea ecx, [esp + 0x14]
// 005cd408  8b11                 mov edx, dword ptr [ecx]
// 005cd40a  8b442420             mov eax, dword ptr [esp + 0x20]
// 005cd40e  8b4904               mov ecx, dword ptr [ecx + 4]
// 005cd411  5e                   pop esi
// 005cd412  5d                   pop ebp
// 005cd413  8910                 mov dword ptr [eax], edx
// 005cd415  894804               mov dword ptr [eax + 4], ecx
// 005cd418  5b                   pop ebx
// 005cd419  83c410               add esp, 0x10
// 005cd41c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
