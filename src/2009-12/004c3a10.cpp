// roc 2009-12 004c3a10  unit: Ogre::RbxCluster::VRbxPartBinding::?$sp_counted_impl_p  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c3a10
//
// 004c3a10  83ec10               sub esp, 0x10
// 004c3a13  53                   push ebx
// 004c3a14  55                   push ebp
// 004c3a15  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004c3a19  56                   push esi
// 004c3a1a  55                   push ebp
// 004c3a1b  8bf1                 mov esi, ecx
// 004c3a1d  e89ef1ffff           call 0x4c2bc0
// 004c3a22  8bd8                 mov ebx, eax
// 004c3a24  895c2410             mov dword ptr [esp + 0x10], ebx
// 004c3a28  85f6                 test esi, esi
// 004c3a2a  7506                 jne 0x4c3a32
// 004c3a2c  ff1560b79800         call dword ptr [0x98b760]
// 004c3a32  8b06                 mov eax, dword ptr [esi]
// 004c3a34  57                   push edi
// 004c3a35  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004c3a38  89442410             mov dword ptr [esp + 0x10], eax
// 004c3a3c  85c0                 test eax, eax
// 004c3a3e  7404                 je 0x4c3a44
// 004c3a40  3bc0                 cmp eax, eax
// 004c3a42  7406                 je 0x4c3a4a
// 004c3a44  ff1560b79800         call dword ptr [0x98b760]
// 004c3a4a  3bdf                 cmp ebx, edi
// 004c3a4c  5f                   pop edi
// 004c3a4d  7418                 je 0x4c3a67
// 004c3a4f  83c30c               add ebx, 0xc
// 004c3a52  53                   push ebx
// 004c3a53  55                   push ebp
// 004c3a54  ff15d8b59800         call dword ptr [0x98b5d8]
// 004c3a5a  83c408               add esp, 8
// 004c3a5d  84c0                 test al, al
// 004c3a5f  7506                 jne 0x4c3a67
// 004c3a61  8d4c240c             lea ecx, [esp + 0xc]
// 004c3a65  eb11                 jmp 0x4c3a78
// 004c3a67  8b0e                 mov ecx, dword ptr [esi]
// 004c3a69  8b4618               mov eax, dword ptr [esi + 0x18]
// 004c3a6c  894c2414             mov dword ptr [esp + 0x14], ecx
// 004c3a70  89442418             mov dword ptr [esp + 0x18], eax
// 004c3a74  8d4c2414             lea ecx, [esp + 0x14]
// 004c3a78  8b11                 mov edx, dword ptr [ecx]
// 004c3a7a  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c3a7e  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c3a81  5e                   pop esi
// 004c3a82  5d                   pop ebp
// 004c3a83  8910                 mov dword ptr [eax], edx
// 004c3a85  894804               mov dword ptr [eax + 4], ecx
// 004c3a88  5b                   pop ebx
// 004c3a89  83c410               add esp, 0x10
// 004c3a8c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
