// roc 2007-08 004eff50  unit: RBX::Render::AggregatingSceneManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eff50
//
// 004eff50  83ec10               sub esp, 0x10
// 004eff53  53                   push ebx
// 004eff54  55                   push ebp
// 004eff55  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004eff59  56                   push esi
// 004eff5a  57                   push edi
// 004eff5b  55                   push ebp
// 004eff5c  8bf1                 mov esi, ecx
// 004eff5e  e8bdf6ffff           call 0x4ef620
// 004eff63  85f6                 test esi, esi
// 004eff65  8bd8                 mov ebx, eax
// 004eff67  895c2414             mov dword ptr [esp + 0x14], ebx
// 004eff6b  7506                 jne 0x4eff73
// 004eff6d  ff15d8e67700         call dword ptr [0x77e6d8]
// 004eff73  8b7e04               mov edi, dword ptr [esi + 4]
// 004eff76  3bdf                 cmp ebx, edi
// 004eff78  89742410             mov dword ptr [esp + 0x10], esi
// 004eff7c  7415                 je 0x4eff93
// 004eff7e  83c30c               add ebx, 0xc
// 004eff81  53                   push ebx
// 004eff82  8bcd                 mov ecx, ebp
// 004eff84  e817f5ffff           call 0x4ef4a0
// 004eff89  84c0                 test al, al
// 004eff8b  7506                 jne 0x4eff93
// 004eff8d  8d4c2410             lea ecx, [esp + 0x10]
// 004eff91  eb0c                 jmp 0x4eff9f
// 004eff93  897c241c             mov dword ptr [esp + 0x1c], edi
// 004eff97  89742418             mov dword ptr [esp + 0x18], esi
// 004eff9b  8d4c2418             lea ecx, [esp + 0x18]
// 004eff9f  8b11                 mov edx, dword ptr [ecx]
// 004effa1  8b442424             mov eax, dword ptr [esp + 0x24]
// 004effa5  8b4904               mov ecx, dword ptr [ecx + 4]
// 004effa8  5f                   pop edi
// 004effa9  5e                   pop esi
// 004effaa  5d                   pop ebp
// 004effab  8910                 mov dword ptr [eax], edx
// 004effad  894804               mov dword ptr [eax + 4], ecx
// 004effb0  5b                   pop ebx
// 004effb1  83c410               add esp, 0x10
// 004effb4  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
