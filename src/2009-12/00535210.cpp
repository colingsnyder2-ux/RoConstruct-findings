// roc 2009-12 00535210  unit: RBX::Network::IdSerializer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00535210
//
// 00535210  83ec10               sub esp, 0x10
// 00535213  53                   push ebx
// 00535214  55                   push ebp
// 00535215  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00535219  56                   push esi
// 0053521a  55                   push ebp
// 0053521b  8bf1                 mov esi, ecx
// 0053521d  e83eecffff           call 0x533e60
// 00535222  8bd8                 mov ebx, eax
// 00535224  895c2410             mov dword ptr [esp + 0x10], ebx
// 00535228  85f6                 test esi, esi
// 0053522a  7506                 jne 0x535232
// 0053522c  ff1560b79800         call dword ptr [0x98b760]
// 00535232  8b06                 mov eax, dword ptr [esi]
// 00535234  57                   push edi
// 00535235  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00535238  89442410             mov dword ptr [esp + 0x10], eax
// 0053523c  85c0                 test eax, eax
// 0053523e  7404                 je 0x535244
// 00535240  3bc0                 cmp eax, eax
// 00535242  7406                 je 0x53524a
// 00535244  ff1560b79800         call dword ptr [0x98b760]
// 0053524a  3bdf                 cmp ebx, edi
// 0053524c  5f                   pop edi
// 0053524d  7415                 je 0x535264
// 0053524f  83c30c               add ebx, 0xc
// 00535252  53                   push ebx
// 00535253  8bcd                 mov ecx, ebp
// 00535255  e886981600           call 0x69eae0
// 0053525a  84c0                 test al, al
// 0053525c  7506                 jne 0x535264
// 0053525e  8d4c240c             lea ecx, [esp + 0xc]
// 00535262  eb11                 jmp 0x535275
// 00535264  8b0e                 mov ecx, dword ptr [esi]
// 00535266  8b4618               mov eax, dword ptr [esi + 0x18]
// 00535269  894c2414             mov dword ptr [esp + 0x14], ecx
// 0053526d  89442418             mov dword ptr [esp + 0x18], eax
// 00535271  8d4c2414             lea ecx, [esp + 0x14]
// 00535275  8b11                 mov edx, dword ptr [ecx]
// 00535277  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053527b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0053527e  5e                   pop esi
// 0053527f  5d                   pop ebp
// 00535280  8910                 mov dword ptr [eax], edx
// 00535282  894804               mov dword ptr [eax + 4], ecx
// 00535285  5b                   pop ebx
// 00535286  83c410               add esp, 0x10
// 00535289  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
