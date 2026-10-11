// roc 2008-06 00678cf0  unit: Ogre::RbxSceneManagerFactory  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00678cf0
//
// 00678cf0  83ec10               sub esp, 0x10
// 00678cf3  53                   push ebx
// 00678cf4  55                   push ebp
// 00678cf5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00678cf9  56                   push esi
// 00678cfa  55                   push ebp
// 00678cfb  8bf1                 mov esi, ecx
// 00678cfd  e82efbffff           call 0x678830
// 00678d02  8bd8                 mov ebx, eax
// 00678d04  895c2410             mov dword ptr [esp + 0x10], ebx
// 00678d08  85f6                 test esi, esi
// 00678d0a  7506                 jne 0x678d12
// 00678d0c  ff1590288000         call dword ptr [0x802890]
// 00678d12  8b06                 mov eax, dword ptr [esi]
// 00678d14  57                   push edi
// 00678d15  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00678d18  89442410             mov dword ptr [esp + 0x10], eax
// 00678d1c  85c0                 test eax, eax
// 00678d1e  7404                 je 0x678d24
// 00678d20  3bc0                 cmp eax, eax
// 00678d22  7406                 je 0x678d2a
// 00678d24  ff1590288000         call dword ptr [0x802890]
// 00678d2a  3bdf                 cmp ebx, edi
// 00678d2c  5f                   pop edi
// 00678d2d  7418                 je 0x678d47
// 00678d2f  83c30c               add ebx, 0xc
// 00678d32  53                   push ebx
// 00678d33  55                   push ebp
// 00678d34  ff155c238000         call dword ptr [0x80235c]
// 00678d3a  83c408               add esp, 8
// 00678d3d  84c0                 test al, al
// 00678d3f  7506                 jne 0x678d47
// 00678d41  8d4c240c             lea ecx, [esp + 0xc]
// 00678d45  eb11                 jmp 0x678d58
// 00678d47  8b0e                 mov ecx, dword ptr [esi]
// 00678d49  8b4618               mov eax, dword ptr [esi + 0x18]
// 00678d4c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00678d50  89442418             mov dword ptr [esp + 0x18], eax
// 00678d54  8d4c2414             lea ecx, [esp + 0x14]
// 00678d58  8b11                 mov edx, dword ptr [ecx]
// 00678d5a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00678d5e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00678d61  5e                   pop esi
// 00678d62  5d                   pop ebp
// 00678d63  8910                 mov dword ptr [eax], edx
// 00678d65  894804               mov dword ptr [eax + 4], ecx
// 00678d68  5b                   pop ebx
// 00678d69  83c410               add esp, 0x10
// 00678d6c  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
