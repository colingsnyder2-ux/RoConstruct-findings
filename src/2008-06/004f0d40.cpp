// roc 2008-06 004f0d40  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f0d40
//
// 004f0d40  83ec10               sub esp, 0x10
// 004f0d43  53                   push ebx
// 004f0d44  55                   push ebp
// 004f0d45  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004f0d49  56                   push esi
// 004f0d4a  55                   push ebp
// 004f0d4b  8bf1                 mov esi, ecx
// 004f0d4d  e86efbffff           call 0x4f08c0
// 004f0d52  8bd8                 mov ebx, eax
// 004f0d54  895c2410             mov dword ptr [esp + 0x10], ebx
// 004f0d58  85f6                 test esi, esi
// 004f0d5a  7506                 jne 0x4f0d62
// 004f0d5c  ff1590288000         call dword ptr [0x802890]
// 004f0d62  8b06                 mov eax, dword ptr [esi]
// 004f0d64  57                   push edi
// 004f0d65  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004f0d68  89442410             mov dword ptr [esp + 0x10], eax
// 004f0d6c  85c0                 test eax, eax
// 004f0d6e  7404                 je 0x4f0d74
// 004f0d70  3bc0                 cmp eax, eax
// 004f0d72  7406                 je 0x4f0d7a
// 004f0d74  ff1590288000         call dword ptr [0x802890]
// 004f0d7a  3bdf                 cmp ebx, edi
// 004f0d7c  5f                   pop edi
// 004f0d7d  7415                 je 0x4f0d94
// 004f0d7f  83c30c               add ebx, 0xc
// 004f0d82  53                   push ebx
// 004f0d83  8bcd                 mov ecx, ebp
// 004f0d85  e826faffff           call 0x4f07b0
// 004f0d8a  84c0                 test al, al
// 004f0d8c  7506                 jne 0x4f0d94
// 004f0d8e  8d4c240c             lea ecx, [esp + 0xc]
// 004f0d92  eb11                 jmp 0x4f0da5
// 004f0d94  8b0e                 mov ecx, dword ptr [esi]
// 004f0d96  8b4618               mov eax, dword ptr [esi + 0x18]
// 004f0d99  894c2414             mov dword ptr [esp + 0x14], ecx
// 004f0d9d  89442418             mov dword ptr [esp + 0x18], eax
// 004f0da1  8d4c2414             lea ecx, [esp + 0x14]
// 004f0da5  8b11                 mov edx, dword ptr [ecx]
// 004f0da7  8b442420             mov eax, dword ptr [esp + 0x20]
// 004f0dab  8b4904               mov ecx, dword ptr [ecx + 4]
// 004f0dae  5e                   pop esi
// 004f0daf  5d                   pop ebp
// 004f0db0  8910                 mov dword ptr [eax], edx
// 004f0db2  894804               mov dword ptr [eax + 4], ecx
// 004f0db5  5b                   pop ebx
// 004f0db6  83c410               add esp, 0x10
// 004f0db9  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
