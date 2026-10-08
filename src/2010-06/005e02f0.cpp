// roc 2010-06 005e02f0  unit: RBX::GlobalSettings  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e02f0
//
// 005e02f0  83ec10               sub esp, 0x10
// 005e02f3  53                   push ebx
// 005e02f4  55                   push ebp
// 005e02f5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005e02f9  56                   push esi
// 005e02fa  55                   push ebp
// 005e02fb  8bf1                 mov esi, ecx
// 005e02fd  e8cef9ffff           call 0x5dfcd0
// 005e0302  8bd8                 mov ebx, eax
// 005e0304  895c2410             mov dword ptr [esp + 0x10], ebx
// 005e0308  85f6                 test esi, esi
// 005e030a  7506                 jne 0x5e0312
// 005e030c  ff150ca99e00         call dword ptr [0x9ea90c]
// 005e0312  8b06                 mov eax, dword ptr [esi]
// 005e0314  57                   push edi
// 005e0315  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005e0318  89442410             mov dword ptr [esp + 0x10], eax
// 005e031c  85c0                 test eax, eax
// 005e031e  7404                 je 0x5e0324
// 005e0320  3bc0                 cmp eax, eax
// 005e0322  7406                 je 0x5e032a
// 005e0324  ff150ca99e00         call dword ptr [0x9ea90c]
// 005e032a  3bdf                 cmp ebx, edi
// 005e032c  5f                   pop edi
// 005e032d  7415                 je 0x5e0344
// 005e032f  83c30c               add ebx, 0xc
// 005e0332  53                   push ebx
// 005e0333  8bcd                 mov ecx, ebp
// 005e0335  e866160500           call 0x6319a0
// 005e033a  84c0                 test al, al
// 005e033c  7506                 jne 0x5e0344
// 005e033e  8d4c240c             lea ecx, [esp + 0xc]
// 005e0342  eb11                 jmp 0x5e0355
// 005e0344  8b0e                 mov ecx, dword ptr [esi]
// 005e0346  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e0349  894c2414             mov dword ptr [esp + 0x14], ecx
// 005e034d  89442418             mov dword ptr [esp + 0x18], eax
// 005e0351  8d4c2414             lea ecx, [esp + 0x14]
// 005e0355  8b11                 mov edx, dword ptr [ecx]
// 005e0357  8b442420             mov eax, dword ptr [esp + 0x20]
// 005e035b  8b4904               mov ecx, dword ptr [ecx + 4]
// 005e035e  5e                   pop esi
// 005e035f  5d                   pop ebp
// 005e0360  8910                 mov dword ptr [eax], edx
// 005e0362  894804               mov dword ptr [eax + 4], ecx
// 005e0365  5b                   pop ebx
// 005e0366  83c410               add esp, 0x10
// 005e0369  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
