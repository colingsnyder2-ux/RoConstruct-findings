// roc 2009-12 00677500  unit: RBX::GlobalSettings  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00677500
//
// 00677500  83ec10               sub esp, 0x10
// 00677503  53                   push ebx
// 00677504  55                   push ebp
// 00677505  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00677509  56                   push esi
// 0067750a  55                   push ebp
// 0067750b  8bf1                 mov esi, ecx
// 0067750d  e85ef9ffff           call 0x676e70
// 00677512  8bd8                 mov ebx, eax
// 00677514  895c2410             mov dword ptr [esp + 0x10], ebx
// 00677518  85f6                 test esi, esi
// 0067751a  7506                 jne 0x677522
// 0067751c  ff1560b79800         call dword ptr [0x98b760]
// 00677522  8b06                 mov eax, dword ptr [esi]
// 00677524  57                   push edi
// 00677525  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00677528  89442410             mov dword ptr [esp + 0x10], eax
// 0067752c  85c0                 test eax, eax
// 0067752e  7404                 je 0x677534
// 00677530  3bc0                 cmp eax, eax
// 00677532  7406                 je 0x67753a
// 00677534  ff1560b79800         call dword ptr [0x98b760]
// 0067753a  3bdf                 cmp ebx, edi
// 0067753c  5f                   pop edi
// 0067753d  7415                 je 0x677554
// 0067753f  83c30c               add ebx, 0xc
// 00677542  53                   push ebx
// 00677543  8bcd                 mov ecx, ebp
// 00677545  e8b6e60400           call 0x6c5c00
// 0067754a  84c0                 test al, al
// 0067754c  7506                 jne 0x677554
// 0067754e  8d4c240c             lea ecx, [esp + 0xc]
// 00677552  eb11                 jmp 0x677565
// 00677554  8b0e                 mov ecx, dword ptr [esi]
// 00677556  8b4618               mov eax, dword ptr [esi + 0x18]
// 00677559  894c2414             mov dword ptr [esp + 0x14], ecx
// 0067755d  89442418             mov dword ptr [esp + 0x18], eax
// 00677561  8d4c2414             lea ecx, [esp + 0x14]
// 00677565  8b11                 mov edx, dword ptr [ecx]
// 00677567  8b442420             mov eax, dword ptr [esp + 0x20]
// 0067756b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0067756e  5e                   pop esi
// 0067756f  5d                   pop ebp
// 00677570  8910                 mov dword ptr [eax], edx
// 00677572  894804               mov dword ptr [eax + 4], ecx
// 00677575  5b                   pop ebx
// 00677576  83c410               add esp, 0x10
// 00677579  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
