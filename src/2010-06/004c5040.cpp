// roc 2010-06 004c5040  unit: RBX::VInstance::?$NonFactoryProduct  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c5040
//
// 004c5040  83ec10               sub esp, 0x10
// 004c5043  53                   push ebx
// 004c5044  55                   push ebp
// 004c5045  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004c5049  56                   push esi
// 004c504a  55                   push ebp
// 004c504b  8bf1                 mov esi, ecx
// 004c504d  e8aebdffff           call 0x4c0e00
// 004c5052  8bd8                 mov ebx, eax
// 004c5054  895c2410             mov dword ptr [esp + 0x10], ebx
// 004c5058  85f6                 test esi, esi
// 004c505a  7506                 jne 0x4c5062
// 004c505c  ff150ca99e00         call dword ptr [0x9ea90c]
// 004c5062  8b06                 mov eax, dword ptr [esi]
// 004c5064  57                   push edi
// 004c5065  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004c5068  89442410             mov dword ptr [esp + 0x10], eax
// 004c506c  85c0                 test eax, eax
// 004c506e  7404                 je 0x4c5074
// 004c5070  3bc0                 cmp eax, eax
// 004c5072  7406                 je 0x4c507a
// 004c5074  ff150ca99e00         call dword ptr [0x9ea90c]
// 004c507a  3bdf                 cmp ebx, edi
// 004c507c  5f                   pop edi
// 004c507d  7415                 je 0x4c5094
// 004c507f  83c30c               add ebx, 0xc
// 004c5082  53                   push ebx
// 004c5083  8bcd                 mov ecx, ebp
// 004c5085  e846531400           call 0x60a3d0
// 004c508a  84c0                 test al, al
// 004c508c  7506                 jne 0x4c5094
// 004c508e  8d4c240c             lea ecx, [esp + 0xc]
// 004c5092  eb11                 jmp 0x4c50a5
// 004c5094  8b0e                 mov ecx, dword ptr [esi]
// 004c5096  8b4618               mov eax, dword ptr [esi + 0x18]
// 004c5099  894c2414             mov dword ptr [esp + 0x14], ecx
// 004c509d  89442418             mov dword ptr [esp + 0x18], eax
// 004c50a1  8d4c2414             lea ecx, [esp + 0x14]
// 004c50a5  8b11                 mov edx, dword ptr [ecx]
// 004c50a7  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c50ab  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c50ae  5e                   pop esi
// 004c50af  5d                   pop ebp
// 004c50b0  8910                 mov dword ptr [eax], edx
// 004c50b2  894804               mov dword ptr [eax + 4], ecx
// 004c50b5  5b                   pop ebx
// 004c50b6  83c410               add esp, 0x10
// 004c50b9  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
