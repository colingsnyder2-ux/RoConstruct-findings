// roc 2008-06 00696f30  unit: Ogre::RbxSceneManager  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00696f30
//
// 00696f30  83ec10               sub esp, 0x10
// 00696f33  53                   push ebx
// 00696f34  55                   push ebp
// 00696f35  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00696f39  56                   push esi
// 00696f3a  55                   push ebp
// 00696f3b  8bf1                 mov esi, ecx
// 00696f3d  e83ecaebff           call 0x553980
// 00696f42  8bd8                 mov ebx, eax
// 00696f44  895c2410             mov dword ptr [esp + 0x10], ebx
// 00696f48  85f6                 test esi, esi
// 00696f4a  7506                 jne 0x696f52
// 00696f4c  ff1590288000         call dword ptr [0x802890]
// 00696f52  8b06                 mov eax, dword ptr [esi]
// 00696f54  57                   push edi
// 00696f55  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00696f58  89442410             mov dword ptr [esp + 0x10], eax
// 00696f5c  85c0                 test eax, eax
// 00696f5e  7404                 je 0x696f64
// 00696f60  3bc0                 cmp eax, eax
// 00696f62  7406                 je 0x696f6a
// 00696f64  ff1590288000         call dword ptr [0x802890]
// 00696f6a  3bdf                 cmp ebx, edi
// 00696f6c  5f                   pop edi
// 00696f6d  7418                 je 0x696f87
// 00696f6f  83c30c               add ebx, 0xc
// 00696f72  53                   push ebx
// 00696f73  55                   push ebp
// 00696f74  ff155c238000         call dword ptr [0x80235c]
// 00696f7a  83c408               add esp, 8
// 00696f7d  84c0                 test al, al
// 00696f7f  7506                 jne 0x696f87
// 00696f81  8d4c240c             lea ecx, [esp + 0xc]
// 00696f85  eb11                 jmp 0x696f98
// 00696f87  8b0e                 mov ecx, dword ptr [esi]
// 00696f89  8b4618               mov eax, dword ptr [esi + 0x18]
// 00696f8c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00696f90  89442418             mov dword ptr [esp + 0x18], eax
// 00696f94  8d4c2414             lea ecx, [esp + 0x14]
// 00696f98  8b11                 mov edx, dword ptr [ecx]
// 00696f9a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00696f9e  8b4904               mov ecx, dword ptr [ecx + 4]
// 00696fa1  5e                   pop esi
// 00696fa2  5d                   pop ebp
// 00696fa3  8910                 mov dword ptr [eax], edx
// 00696fa5  894804               mov dword ptr [eax + 4], ecx
// 00696fa8  5b                   pop ebx
// 00696fa9  83c410               add esp, 0x10
// 00696fac  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Name.cpp
