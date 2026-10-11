// roc 2009-12 00486950  unit: Ogre::GfxClustererPart  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00486950
//
// 00486950  83ec10               sub esp, 0x10
// 00486953  53                   push ebx
// 00486954  55                   push ebp
// 00486955  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00486959  56                   push esi
// 0048695a  55                   push ebp
// 0048695b  8bf1                 mov esi, ecx
// 0048695d  e80ef4ffff           call 0x485d70
// 00486962  8bd8                 mov ebx, eax
// 00486964  895c2410             mov dword ptr [esp + 0x10], ebx
// 00486968  85f6                 test esi, esi
// 0048696a  7506                 jne 0x486972
// 0048696c  ff1560b79800         call dword ptr [0x98b760]
// 00486972  8b06                 mov eax, dword ptr [esi]
// 00486974  57                   push edi
// 00486975  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00486978  89442410             mov dword ptr [esp + 0x10], eax
// 0048697c  85c0                 test eax, eax
// 0048697e  7404                 je 0x486984
// 00486980  3bc0                 cmp eax, eax
// 00486982  7406                 je 0x48698a
// 00486984  ff1560b79800         call dword ptr [0x98b760]
// 0048698a  3bdf                 cmp ebx, edi
// 0048698c  5f                   pop edi
// 0048698d  7418                 je 0x4869a7
// 0048698f  83c30c               add ebx, 0xc
// 00486992  53                   push ebx
// 00486993  55                   push ebp
// 00486994  ff15d8b59800         call dword ptr [0x98b5d8]
// 0048699a  83c408               add esp, 8
// 0048699d  84c0                 test al, al
// 0048699f  7506                 jne 0x4869a7
// 004869a1  8d4c240c             lea ecx, [esp + 0xc]
// 004869a5  eb11                 jmp 0x4869b8
// 004869a7  8b0e                 mov ecx, dword ptr [esi]
// 004869a9  8b4618               mov eax, dword ptr [esi + 0x18]
// 004869ac  894c2414             mov dword ptr [esp + 0x14], ecx
// 004869b0  89442418             mov dword ptr [esp + 0x18], eax
// 004869b4  8d4c2414             lea ecx, [esp + 0x14]
// 004869b8  8b11                 mov edx, dword ptr [ecx]
// 004869ba  8b442420             mov eax, dword ptr [esp + 0x20]
// 004869be  8b4904               mov ecx, dword ptr [ecx + 4]
// 004869c1  5e                   pop esi
// 004869c2  5d                   pop ebp
// 004869c3  8910                 mov dword ptr [eax], edx
// 004869c5  894804               mov dword ptr [eax + 4], ecx
// 004869c8  5b                   pop ebx
// 004869c9  83c410               add esp, 0x10
// 004869cc  c20800               ret 8
// library openrbx-client/App\util\Name.cpp (function ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVName@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Name.cpp
