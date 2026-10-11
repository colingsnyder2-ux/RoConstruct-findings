// roc 2009-06 004faf20  unit: RBX::Network::ServerReplicator  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004faf20
//
// 004faf20  83ec10               sub esp, 0x10
// 004faf23  53                   push ebx
// 004faf24  55                   push ebp
// 004faf25  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004faf29  56                   push esi
// 004faf2a  55                   push ebp
// 004faf2b  8bf1                 mov esi, ecx
// 004faf2d  e8aefaffff           call 0x4fa9e0
// 004faf32  8bd8                 mov ebx, eax
// 004faf34  895c2410             mov dword ptr [esp + 0x10], ebx
// 004faf38  85f6                 test esi, esi
// 004faf3a  7506                 jne 0x4faf42
// 004faf3c  ff15ace98900         call dword ptr [0x89e9ac]
// 004faf42  8b06                 mov eax, dword ptr [esi]
// 004faf44  57                   push edi
// 004faf45  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004faf48  89442410             mov dword ptr [esp + 0x10], eax
// 004faf4c  85c0                 test eax, eax
// 004faf4e  7404                 je 0x4faf54
// 004faf50  3bc0                 cmp eax, eax
// 004faf52  7406                 je 0x4faf5a
// 004faf54  ff15ace98900         call dword ptr [0x89e9ac]
// 004faf5a  3bdf                 cmp ebx, edi
// 004faf5c  5f                   pop edi
// 004faf5d  7418                 je 0x4faf77
// 004faf5f  83c30c               add ebx, 0xc
// 004faf62  53                   push ebx
// 004faf63  55                   push ebp
// 004faf64  ff15e0e48900         call dword ptr [0x89e4e0]
// 004faf6a  83c408               add esp, 8
// 004faf6d  84c0                 test al, al
// 004faf6f  7506                 jne 0x4faf77
// 004faf71  8d4c240c             lea ecx, [esp + 0xc]
// 004faf75  eb11                 jmp 0x4faf88
// 004faf77  8b0e                 mov ecx, dword ptr [esi]
// 004faf79  8b4618               mov eax, dword ptr [esi + 0x18]
// 004faf7c  894c2414             mov dword ptr [esp + 0x14], ecx
// 004faf80  89442418             mov dword ptr [esp + 0x18], eax
// 004faf84  8d4c2414             lea ecx, [esp + 0x14]
// 004faf88  8b11                 mov edx, dword ptr [ecx]
// 004faf8a  8b442420             mov eax, dword ptr [esp + 0x20]
// 004faf8e  8b4904               mov ecx, dword ptr [ecx + 4]
// 004faf91  5e                   pop esi
// 004faf92  5d                   pop ebp
// 004faf93  8910                 mov dword ptr [eax], edx
// 004faf95  894804               mov dword ptr [eax + 4], ecx
// 004faf98  5b                   pop ebx
// 004faf99  83c410               add esp, 0x10
// 004faf9c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
