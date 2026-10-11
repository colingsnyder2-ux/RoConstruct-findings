// roc 2009-06 00476930  unit: Ogre::RbxMeshLoader  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00476930
//
// 00476930  83ec10               sub esp, 0x10
// 00476933  53                   push ebx
// 00476934  55                   push ebp
// 00476935  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00476939  56                   push esi
// 0047693a  55                   push ebp
// 0047693b  8bf1                 mov esi, ecx
// 0047693d  e80efcffff           call 0x476550
// 00476942  8bd8                 mov ebx, eax
// 00476944  895c2410             mov dword ptr [esp + 0x10], ebx
// 00476948  85f6                 test esi, esi
// 0047694a  7506                 jne 0x476952
// 0047694c  ff15ace98900         call dword ptr [0x89e9ac]
// 00476952  8b06                 mov eax, dword ptr [esi]
// 00476954  57                   push edi
// 00476955  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00476958  89442410             mov dword ptr [esp + 0x10], eax
// 0047695c  85c0                 test eax, eax
// 0047695e  7404                 je 0x476964
// 00476960  3bc0                 cmp eax, eax
// 00476962  7406                 je 0x47696a
// 00476964  ff15ace98900         call dword ptr [0x89e9ac]
// 0047696a  3bdf                 cmp ebx, edi
// 0047696c  5f                   pop edi
// 0047696d  7418                 je 0x476987
// 0047696f  83c30c               add ebx, 0xc
// 00476972  53                   push ebx
// 00476973  55                   push ebp
// 00476974  ff15e0e48900         call dword ptr [0x89e4e0]
// 0047697a  83c408               add esp, 8
// 0047697d  84c0                 test al, al
// 0047697f  7506                 jne 0x476987
// 00476981  8d4c240c             lea ecx, [esp + 0xc]
// 00476985  eb11                 jmp 0x476998
// 00476987  8b0e                 mov ecx, dword ptr [esi]
// 00476989  8b4618               mov eax, dword ptr [esi + 0x18]
// 0047698c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00476990  89442418             mov dword ptr [esp + 0x18], eax
// 00476994  8d4c2414             lea ecx, [esp + 0x14]
// 00476998  8b11                 mov edx, dword ptr [ecx]
// 0047699a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0047699e  8b4904               mov ecx, dword ptr [ecx + 4]
// 004769a1  5e                   pop esi
// 004769a2  5d                   pop ebp
// 004769a3  8910                 mov dword ptr [eax], edx
// 004769a5  894804               mov dword ptr [eax + 4], ecx
// 004769a8  5b                   pop ebx
// 004769a9  83c410               add esp, 0x10
// 004769ac  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
