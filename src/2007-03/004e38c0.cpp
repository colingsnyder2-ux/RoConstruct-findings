// roc 2007-03 004e38c0  unit: seg_004e0000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e38c0
//
// 004e38c0  83ec10               sub esp, 0x10
// 004e38c3  53                   push ebx
// 004e38c4  55                   push ebp
// 004e38c5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004e38c9  56                   push esi
// 004e38ca  57                   push edi
// 004e38cb  55                   push ebp
// 004e38cc  8bf1                 mov esi, ecx
// 004e38ce  e81df6ffff           call 0x4e2ef0
// 004e38d3  85f6                 test esi, esi
// 004e38d5  8bd8                 mov ebx, eax
// 004e38d7  895c2414             mov dword ptr [esp + 0x14], ebx
// 004e38db  7506                 jne 0x4e38e3
// 004e38dd  ff1544e97700         call dword ptr [0x77e944]
// 004e38e3  8b7e04               mov edi, dword ptr [esi + 4]
// 004e38e6  3bdf                 cmp ebx, edi
// 004e38e8  89742410             mov dword ptr [esp + 0x10], esi
// 004e38ec  7415                 je 0x4e3903
// 004e38ee  83c30c               add ebx, 0xc
// 004e38f1  53                   push ebx
// 004e38f2  8bcd                 mov ecx, ebp
// 004e38f4  e897f5ffff           call 0x4e2e90
// 004e38f9  84c0                 test al, al
// 004e38fb  7506                 jne 0x4e3903
// 004e38fd  8d4c2410             lea ecx, [esp + 0x10]
// 004e3901  eb0c                 jmp 0x4e390f
// 004e3903  897c241c             mov dword ptr [esp + 0x1c], edi
// 004e3907  89742418             mov dword ptr [esp + 0x18], esi
// 004e390b  8d4c2418             lea ecx, [esp + 0x18]
// 004e390f  8b11                 mov edx, dword ptr [ecx]
// 004e3911  8b442424             mov eax, dword ptr [esp + 0x24]
// 004e3915  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e3918  5f                   pop edi
// 004e3919  5e                   pop esi
// 004e391a  5d                   pop ebp
// 004e391b  8910                 mov dword ptr [eax], edx
// 004e391d  894804               mov dword ptr [eax + 4], ecx
// 004e3920  5b                   pop ebx
// 004e3921  83c410               add esp, 0x10
// 004e3924  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
