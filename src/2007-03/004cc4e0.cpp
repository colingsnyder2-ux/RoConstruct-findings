// roc 2007-03 004cc4e0  unit: seg_004c0000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004cc4e0
//
// 004cc4e0  83ec10               sub esp, 0x10
// 004cc4e3  53                   push ebx
// 004cc4e4  55                   push ebp
// 004cc4e5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004cc4e9  56                   push esi
// 004cc4ea  57                   push edi
// 004cc4eb  55                   push ebp
// 004cc4ec  8bf1                 mov esi, ecx
// 004cc4ee  e81dfaffff           call 0x4cbf10
// 004cc4f3  85f6                 test esi, esi
// 004cc4f5  8bd8                 mov ebx, eax
// 004cc4f7  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cc4fb  7506                 jne 0x4cc503
// 004cc4fd  ff1544e97700         call dword ptr [0x77e944]
// 004cc503  8b7e04               mov edi, dword ptr [esi + 4]
// 004cc506  3bdf                 cmp ebx, edi
// 004cc508  89742410             mov dword ptr [esp + 0x10], esi
// 004cc50c  7415                 je 0x4cc523
// 004cc50e  83c30c               add ebx, 0xc
// 004cc511  53                   push ebx
// 004cc512  8bcd                 mov ecx, ebp
// 004cc514  e877f9ffff           call 0x4cbe90
// 004cc519  84c0                 test al, al
// 004cc51b  7506                 jne 0x4cc523
// 004cc51d  8d4c2410             lea ecx, [esp + 0x10]
// 004cc521  eb0c                 jmp 0x4cc52f
// 004cc523  897c241c             mov dword ptr [esp + 0x1c], edi
// 004cc527  89742418             mov dword ptr [esp + 0x18], esi
// 004cc52b  8d4c2418             lea ecx, [esp + 0x18]
// 004cc52f  8b11                 mov edx, dword ptr [ecx]
// 004cc531  8b442424             mov eax, dword ptr [esp + 0x24]
// 004cc535  8b4904               mov ecx, dword ptr [ecx + 4]
// 004cc538  5f                   pop edi
// 004cc539  5e                   pop esi
// 004cc53a  5d                   pop ebp
// 004cc53b  8910                 mov dword ptr [eax], edx
// 004cc53d  894804               mov dword ptr [eax + 4], ecx
// 004cc540  5b                   pop ebx
// 004cc541  83c410               add esp, 0x10
// 004cc544  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
