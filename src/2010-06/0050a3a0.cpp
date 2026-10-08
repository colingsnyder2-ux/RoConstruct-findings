// roc 2010-06 0050a3a0  unit: RBX::Network::ServerReplicator  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0050a3a0
//
// 0050a3a0  83ec10               sub esp, 0x10
// 0050a3a3  53                   push ebx
// 0050a3a4  55                   push ebp
// 0050a3a5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0050a3a9  56                   push esi
// 0050a3aa  55                   push ebp
// 0050a3ab  8bf1                 mov esi, ecx
// 0050a3ad  e8aef5ffff           call 0x509960
// 0050a3b2  8bd8                 mov ebx, eax
// 0050a3b4  895c2410             mov dword ptr [esp + 0x10], ebx
// 0050a3b8  85f6                 test esi, esi
// 0050a3ba  7506                 jne 0x50a3c2
// 0050a3bc  ff150ca99e00         call dword ptr [0x9ea90c]
// 0050a3c2  8b06                 mov eax, dword ptr [esi]
// 0050a3c4  57                   push edi
// 0050a3c5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0050a3c8  89442410             mov dword ptr [esp + 0x10], eax
// 0050a3cc  85c0                 test eax, eax
// 0050a3ce  7404                 je 0x50a3d4
// 0050a3d0  3bc0                 cmp eax, eax
// 0050a3d2  7406                 je 0x50a3da
// 0050a3d4  ff150ca99e00         call dword ptr [0x9ea90c]
// 0050a3da  3bdf                 cmp ebx, edi
// 0050a3dc  5f                   pop edi
// 0050a3dd  7415                 je 0x50a3f4
// 0050a3df  83c30c               add ebx, 0xc
// 0050a3e2  53                   push ebx
// 0050a3e3  8bcd                 mov ecx, ebp
// 0050a3e5  e8c637ffff           call 0x4fdbb0
// 0050a3ea  84c0                 test al, al
// 0050a3ec  7506                 jne 0x50a3f4
// 0050a3ee  8d4c240c             lea ecx, [esp + 0xc]
// 0050a3f2  eb11                 jmp 0x50a405
// 0050a3f4  8b0e                 mov ecx, dword ptr [esi]
// 0050a3f6  8b4618               mov eax, dword ptr [esi + 0x18]
// 0050a3f9  894c2414             mov dword ptr [esp + 0x14], ecx
// 0050a3fd  89442418             mov dword ptr [esp + 0x18], eax
// 0050a401  8d4c2414             lea ecx, [esp + 0x14]
// 0050a405  8b11                 mov edx, dword ptr [ecx]
// 0050a407  8b442420             mov eax, dword ptr [esp + 0x20]
// 0050a40b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0050a40e  5e                   pop esi
// 0050a40f  5d                   pop ebp
// 0050a410  8910                 mov dword ptr [eax], edx
// 0050a412  894804               mov dword ptr [eax + 4], ecx
// 0050a415  5b                   pop ebx
// 0050a416  83c410               add esp, 0x10
// 0050a419  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
