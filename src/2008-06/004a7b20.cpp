// roc 2008-06 004a7b20  unit: RBX::VHint::?$FactoryProduct::Creator  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a7b20
//
// 004a7b20  83ec10               sub esp, 0x10
// 004a7b23  53                   push ebx
// 004a7b24  55                   push ebp
// 004a7b25  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004a7b29  56                   push esi
// 004a7b2a  55                   push ebp
// 004a7b2b  8bf1                 mov esi, ecx
// 004a7b2d  e86ef3ffff           call 0x4a6ea0
// 004a7b32  8bd8                 mov ebx, eax
// 004a7b34  895c2410             mov dword ptr [esp + 0x10], ebx
// 004a7b38  85f6                 test esi, esi
// 004a7b3a  7506                 jne 0x4a7b42
// 004a7b3c  ff1590288000         call dword ptr [0x802890]
// 004a7b42  8b06                 mov eax, dword ptr [esi]
// 004a7b44  57                   push edi
// 004a7b45  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004a7b48  89442410             mov dword ptr [esp + 0x10], eax
// 004a7b4c  85c0                 test eax, eax
// 004a7b4e  7404                 je 0x4a7b54
// 004a7b50  3bc0                 cmp eax, eax
// 004a7b52  7406                 je 0x4a7b5a
// 004a7b54  ff1590288000         call dword ptr [0x802890]
// 004a7b5a  3bdf                 cmp ebx, edi
// 004a7b5c  5f                   pop edi
// 004a7b5d  7415                 je 0x4a7b74
// 004a7b5f  83c30c               add ebx, 0xc
// 004a7b62  53                   push ebx
// 004a7b63  8bcd                 mov ecx, ebp
// 004a7b65  e8a6061000           call 0x5a8210
// 004a7b6a  84c0                 test al, al
// 004a7b6c  7506                 jne 0x4a7b74
// 004a7b6e  8d4c240c             lea ecx, [esp + 0xc]
// 004a7b72  eb11                 jmp 0x4a7b85
// 004a7b74  8b0e                 mov ecx, dword ptr [esi]
// 004a7b76  8b4618               mov eax, dword ptr [esi + 0x18]
// 004a7b79  894c2414             mov dword ptr [esp + 0x14], ecx
// 004a7b7d  89442418             mov dword ptr [esp + 0x18], eax
// 004a7b81  8d4c2414             lea ecx, [esp + 0x14]
// 004a7b85  8b11                 mov edx, dword ptr [ecx]
// 004a7b87  8b442420             mov eax, dword ptr [esp + 0x20]
// 004a7b8b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a7b8e  5e                   pop esi
// 004a7b8f  5d                   pop ebp
// 004a7b90  8910                 mov dword ptr [eax], edx
// 004a7b92  894804               mov dword ptr [eax + 4], ecx
// 004a7b95  5b                   pop ebx
// 004a7b96  83c410               add esp, 0x10
// 004a7b99  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
