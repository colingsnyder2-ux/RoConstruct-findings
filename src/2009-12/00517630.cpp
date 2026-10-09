// roc 2009-12 00517630  unit: RBX::VInstance::?$NonFactoryProduct  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00517630
//
// 00517630  83ec10               sub esp, 0x10
// 00517633  53                   push ebx
// 00517634  55                   push ebp
// 00517635  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00517639  56                   push esi
// 0051763a  55                   push ebp
// 0051763b  8bf1                 mov esi, ecx
// 0051763d  e81ec3ffff           call 0x513960
// 00517642  8bd8                 mov ebx, eax
// 00517644  895c2410             mov dword ptr [esp + 0x10], ebx
// 00517648  85f6                 test esi, esi
// 0051764a  7506                 jne 0x517652
// 0051764c  ff1560b79800         call dword ptr [0x98b760]
// 00517652  8b06                 mov eax, dword ptr [esi]
// 00517654  57                   push edi
// 00517655  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00517658  89442410             mov dword ptr [esp + 0x10], eax
// 0051765c  85c0                 test eax, eax
// 0051765e  7404                 je 0x517664
// 00517660  3bc0                 cmp eax, eax
// 00517662  7406                 je 0x51766a
// 00517664  ff1560b79800         call dword ptr [0x98b760]
// 0051766a  3bdf                 cmp ebx, edi
// 0051766c  5f                   pop edi
// 0051766d  7415                 je 0x517684
// 0051766f  83c30c               add ebx, 0xc
// 00517672  53                   push ebx
// 00517673  8bcd                 mov ecx, ebp
// 00517675  e866741800           call 0x69eae0
// 0051767a  84c0                 test al, al
// 0051767c  7506                 jne 0x517684
// 0051767e  8d4c240c             lea ecx, [esp + 0xc]
// 00517682  eb11                 jmp 0x517695
// 00517684  8b0e                 mov ecx, dword ptr [esi]
// 00517686  8b4618               mov eax, dword ptr [esi + 0x18]
// 00517689  894c2414             mov dword ptr [esp + 0x14], ecx
// 0051768d  89442418             mov dword ptr [esp + 0x18], eax
// 00517691  8d4c2414             lea ecx, [esp + 0x14]
// 00517695  8b11                 mov edx, dword ptr [ecx]
// 00517697  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051769b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0051769e  5e                   pop esi
// 0051769f  5d                   pop ebp
// 005176a0  8910                 mov dword ptr [eax], edx
// 005176a2  894804               mov dword ptr [eax + 4], ecx
// 005176a5  5b                   pop ebx
// 005176a6  83c410               add esp, 0x10
// 005176a9  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
