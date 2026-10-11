// roc 2009-06 004fc540  unit: RBX::Network::ServerReplicator  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004fc540
//
// 004fc540  83ec10               sub esp, 0x10
// 004fc543  53                   push ebx
// 004fc544  55                   push ebp
// 004fc545  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004fc549  56                   push esi
// 004fc54a  55                   push ebp
// 004fc54b  8bf1                 mov esi, ecx
// 004fc54d  e85ef4ffff           call 0x4fb9b0
// 004fc552  8bd8                 mov ebx, eax
// 004fc554  895c2410             mov dword ptr [esp + 0x10], ebx
// 004fc558  85f6                 test esi, esi
// 004fc55a  7506                 jne 0x4fc562
// 004fc55c  ff15ace98900         call dword ptr [0x89e9ac]
// 004fc562  8b06                 mov eax, dword ptr [esi]
// 004fc564  57                   push edi
// 004fc565  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004fc568  89442410             mov dword ptr [esp + 0x10], eax
// 004fc56c  85c0                 test eax, eax
// 004fc56e  7404                 je 0x4fc574
// 004fc570  3bc0                 cmp eax, eax
// 004fc572  7406                 je 0x4fc57a
// 004fc574  ff15ace98900         call dword ptr [0x89e9ac]
// 004fc57a  3bdf                 cmp ebx, edi
// 004fc57c  5f                   pop edi
// 004fc57d  7418                 je 0x4fc597
// 004fc57f  83c30c               add ebx, 0xc
// 004fc582  53                   push ebx
// 004fc583  55                   push ebp
// 004fc584  ff15e0e48900         call dword ptr [0x89e4e0]
// 004fc58a  83c408               add esp, 8
// 004fc58d  84c0                 test al, al
// 004fc58f  7506                 jne 0x4fc597
// 004fc591  8d4c240c             lea ecx, [esp + 0xc]
// 004fc595  eb11                 jmp 0x4fc5a8
// 004fc597  8b0e                 mov ecx, dword ptr [esi]
// 004fc599  8b4618               mov eax, dword ptr [esi + 0x18]
// 004fc59c  894c2414             mov dword ptr [esp + 0x14], ecx
// 004fc5a0  89442418             mov dword ptr [esp + 0x18], eax
// 004fc5a4  8d4c2414             lea ecx, [esp + 0x14]
// 004fc5a8  8b11                 mov edx, dword ptr [ecx]
// 004fc5aa  8b442420             mov eax, dword ptr [esp + 0x20]
// 004fc5ae  8b4904               mov ecx, dword ptr [ecx + 4]
// 004fc5b1  5e                   pop esi
// 004fc5b2  5d                   pop ebp
// 004fc5b3  8910                 mov dword ptr [eax], edx
// 004fc5b5  894804               mov dword ptr [eax + 4], ecx
// 004fc5b8  5b                   pop ebx
// 004fc5b9  83c410               add esp, 0x10
// 004fc5bc  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
