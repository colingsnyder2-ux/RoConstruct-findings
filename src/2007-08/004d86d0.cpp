// roc 2007-08 004d86d0  unit: RBX::View::MegaTextureProxy  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d86d0
//
// 004d86d0  83ec10               sub esp, 0x10
// 004d86d3  53                   push ebx
// 004d86d4  55                   push ebp
// 004d86d5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004d86d9  56                   push esi
// 004d86da  57                   push edi
// 004d86db  55                   push ebp
// 004d86dc  8bf1                 mov esi, ecx
// 004d86de  e8fdf9ffff           call 0x4d80e0
// 004d86e3  85f6                 test esi, esi
// 004d86e5  8bd8                 mov ebx, eax
// 004d86e7  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d86eb  7506                 jne 0x4d86f3
// 004d86ed  ff15d8e67700         call dword ptr [0x77e6d8]
// 004d86f3  8b7e04               mov edi, dword ptr [esi + 4]
// 004d86f6  3bdf                 cmp ebx, edi
// 004d86f8  89742410             mov dword ptr [esp + 0x10], esi
// 004d86fc  7415                 je 0x4d8713
// 004d86fe  83c30c               add ebx, 0xc
// 004d8701  53                   push ebx
// 004d8702  8bcd                 mov ecx, ebp
// 004d8704  e877f9ffff           call 0x4d8080
// 004d8709  84c0                 test al, al
// 004d870b  7506                 jne 0x4d8713
// 004d870d  8d4c2410             lea ecx, [esp + 0x10]
// 004d8711  eb0c                 jmp 0x4d871f
// 004d8713  897c241c             mov dword ptr [esp + 0x1c], edi
// 004d8717  89742418             mov dword ptr [esp + 0x18], esi
// 004d871b  8d4c2418             lea ecx, [esp + 0x18]
// 004d871f  8b11                 mov edx, dword ptr [ecx]
// 004d8721  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d8725  8b4904               mov ecx, dword ptr [ecx + 4]
// 004d8728  5f                   pop edi
// 004d8729  5e                   pop esi
// 004d872a  5d                   pop ebp
// 004d872b  8910                 mov dword ptr [eax], edx
// 004d872d  894804               mov dword ptr [eax + 4], ecx
// 004d8730  5b                   pop ebx
// 004d8731  83c410               add esp, 0x10
// 004d8734  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
