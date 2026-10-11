// roc 2010-06 00909780  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00909780
//
// 00909780  83ec10               sub esp, 0x10
// 00909783  53                   push ebx
// 00909784  55                   push ebp
// 00909785  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00909789  56                   push esi
// 0090978a  55                   push ebp
// 0090978b  8bf1                 mov esi, ecx
// 0090978d  e85ef2ffff           call 0x9089f0
// 00909792  8bd8                 mov ebx, eax
// 00909794  895c2410             mov dword ptr [esp + 0x10], ebx
// 00909798  85f6                 test esi, esi
// 0090979a  7506                 jne 0x9097a2
// 0090979c  ff150ca99e00         call dword ptr [0x9ea90c]
// 009097a2  8b06                 mov eax, dword ptr [esi]
// 009097a4  57                   push edi
// 009097a5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 009097a8  89442410             mov dword ptr [esp + 0x10], eax
// 009097ac  85c0                 test eax, eax
// 009097ae  7404                 je 0x9097b4
// 009097b0  3bc0                 cmp eax, eax
// 009097b2  7406                 je 0x9097ba
// 009097b4  ff150ca99e00         call dword ptr [0x9ea90c]
// 009097ba  3bdf                 cmp ebx, edi
// 009097bc  5f                   pop edi
// 009097bd  7418                 je 0x9097d7
// 009097bf  83c30c               add ebx, 0xc
// 009097c2  53                   push ebx
// 009097c3  55                   push ebp
// 009097c4  ff151ca59e00         call dword ptr [0x9ea51c]
// 009097ca  83c408               add esp, 8
// 009097cd  84c0                 test al, al
// 009097cf  7506                 jne 0x9097d7
// 009097d1  8d4c240c             lea ecx, [esp + 0xc]
// 009097d5  eb11                 jmp 0x9097e8
// 009097d7  8b0e                 mov ecx, dword ptr [esi]
// 009097d9  8b4618               mov eax, dword ptr [esi + 0x18]
// 009097dc  894c2414             mov dword ptr [esp + 0x14], ecx
// 009097e0  89442418             mov dword ptr [esp + 0x18], eax
// 009097e4  8d4c2414             lea ecx, [esp + 0x14]
// 009097e8  8b11                 mov edx, dword ptr [ecx]
// 009097ea  8b442420             mov eax, dword ptr [esp + 0x20]
// 009097ee  8b4904               mov ecx, dword ptr [ecx + 4]
// 009097f1  5e                   pop esi
// 009097f2  5d                   pop ebp
// 009097f3  8910                 mov dword ptr [eax], edx
// 009097f5  894804               mov dword ptr [eax + 4], ecx
// 009097f8  5b                   pop ebx
// 009097f9  83c410               add esp, 0x10
// 009097fc  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
