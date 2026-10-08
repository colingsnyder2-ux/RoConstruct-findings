// roc 2009-06 004c7780  unit: RBX::VInstance::?$NonFactoryProduct  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c7780
//
// 004c7780  83ec10               sub esp, 0x10
// 004c7783  53                   push ebx
// 004c7784  55                   push ebp
// 004c7785  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004c7789  56                   push esi
// 004c778a  55                   push ebp
// 004c778b  8bf1                 mov esi, ecx
// 004c778d  e8bed1ffff           call 0x4c4950
// 004c7792  8bd8                 mov ebx, eax
// 004c7794  895c2410             mov dword ptr [esp + 0x10], ebx
// 004c7798  85f6                 test esi, esi
// 004c779a  7506                 jne 0x4c77a2
// 004c779c  ff15ace98900         call dword ptr [0x89e9ac]
// 004c77a2  8b06                 mov eax, dword ptr [esi]
// 004c77a4  57                   push edi
// 004c77a5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004c77a8  89442410             mov dword ptr [esp + 0x10], eax
// 004c77ac  85c0                 test eax, eax
// 004c77ae  7404                 je 0x4c77b4
// 004c77b0  3bc0                 cmp eax, eax
// 004c77b2  7406                 je 0x4c77ba
// 004c77b4  ff15ace98900         call dword ptr [0x89e9ac]
// 004c77ba  3bdf                 cmp ebx, edi
// 004c77bc  5f                   pop edi
// 004c77bd  7415                 je 0x4c77d4
// 004c77bf  83c30c               add ebx, 0xc
// 004c77c2  53                   push ebx
// 004c77c3  8bcd                 mov ecx, ebp
// 004c77c5  e866b41600           call 0x632c30
// 004c77ca  84c0                 test al, al
// 004c77cc  7506                 jne 0x4c77d4
// 004c77ce  8d4c240c             lea ecx, [esp + 0xc]
// 004c77d2  eb11                 jmp 0x4c77e5
// 004c77d4  8b0e                 mov ecx, dword ptr [esi]
// 004c77d6  8b4618               mov eax, dword ptr [esi + 0x18]
// 004c77d9  894c2414             mov dword ptr [esp + 0x14], ecx
// 004c77dd  89442418             mov dword ptr [esp + 0x18], eax
// 004c77e1  8d4c2414             lea ecx, [esp + 0x14]
// 004c77e5  8b11                 mov edx, dword ptr [ecx]
// 004c77e7  8b442420             mov eax, dword ptr [esp + 0x20]
// 004c77eb  8b4904               mov ecx, dword ptr [ecx + 4]
// 004c77ee  5e                   pop esi
// 004c77ef  5d                   pop ebp
// 004c77f0  8910                 mov dword ptr [eax], edx
// 004c77f2  894804               mov dword ptr [eax + 4], ecx
// 004c77f5  5b                   pop ebx
// 004c77f6  83c410               add esp, 0x10
// 004c77f9  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
