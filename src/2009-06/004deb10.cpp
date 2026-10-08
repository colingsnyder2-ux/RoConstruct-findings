// roc 2009-06 004deb10  unit: RBX::Network::IdSerializer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004deb10
//
// 004deb10  83ec10               sub esp, 0x10
// 004deb13  53                   push ebx
// 004deb14  55                   push ebp
// 004deb15  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004deb19  56                   push esi
// 004deb1a  55                   push ebp
// 004deb1b  8bf1                 mov esi, ecx
// 004deb1d  e83ef3ffff           call 0x4dde60
// 004deb22  8bd8                 mov ebx, eax
// 004deb24  895c2410             mov dword ptr [esp + 0x10], ebx
// 004deb28  85f6                 test esi, esi
// 004deb2a  7506                 jne 0x4deb32
// 004deb2c  ff15ace98900         call dword ptr [0x89e9ac]
// 004deb32  8b06                 mov eax, dword ptr [esi]
// 004deb34  57                   push edi
// 004deb35  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004deb38  89442410             mov dword ptr [esp + 0x10], eax
// 004deb3c  85c0                 test eax, eax
// 004deb3e  7404                 je 0x4deb44
// 004deb40  3bc0                 cmp eax, eax
// 004deb42  7406                 je 0x4deb4a
// 004deb44  ff15ace98900         call dword ptr [0x89e9ac]
// 004deb4a  3bdf                 cmp ebx, edi
// 004deb4c  5f                   pop edi
// 004deb4d  7415                 je 0x4deb64
// 004deb4f  83c30c               add ebx, 0xc
// 004deb52  53                   push ebx
// 004deb53  8bcd                 mov ecx, ebp
// 004deb55  e8d6401500           call 0x632c30
// 004deb5a  84c0                 test al, al
// 004deb5c  7506                 jne 0x4deb64
// 004deb5e  8d4c240c             lea ecx, [esp + 0xc]
// 004deb62  eb11                 jmp 0x4deb75
// 004deb64  8b0e                 mov ecx, dword ptr [esi]
// 004deb66  8b4618               mov eax, dword ptr [esi + 0x18]
// 004deb69  894c2414             mov dword ptr [esp + 0x14], ecx
// 004deb6d  89442418             mov dword ptr [esp + 0x18], eax
// 004deb71  8d4c2414             lea ecx, [esp + 0x14]
// 004deb75  8b11                 mov edx, dword ptr [ecx]
// 004deb77  8b442420             mov eax, dword ptr [esp + 0x20]
// 004deb7b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004deb7e  5e                   pop esi
// 004deb7f  5d                   pop ebp
// 004deb80  8910                 mov dword ptr [eax], edx
// 004deb82  894804               mov dword ptr [eax + 4], ecx
// 004deb85  5b                   pop ebx
// 004deb86  83c410               add esp, 0x10
// 004deb89  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
