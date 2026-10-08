// roc 2009-06 005158b0  unit: seg_00510000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005158b0
//
// 005158b0  83ec10               sub esp, 0x10
// 005158b3  53                   push ebx
// 005158b4  55                   push ebp
// 005158b5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005158b9  56                   push esi
// 005158ba  55                   push ebp
// 005158bb  8bf1                 mov esi, ecx
// 005158bd  e88efbffff           call 0x515450
// 005158c2  8bd8                 mov ebx, eax
// 005158c4  895c2410             mov dword ptr [esp + 0x10], ebx
// 005158c8  85f6                 test esi, esi
// 005158ca  7506                 jne 0x5158d2
// 005158cc  ff15ace98900         call dword ptr [0x89e9ac]
// 005158d2  8b06                 mov eax, dword ptr [esi]
// 005158d4  57                   push edi
// 005158d5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 005158d8  89442410             mov dword ptr [esp + 0x10], eax
// 005158dc  85c0                 test eax, eax
// 005158de  7404                 je 0x5158e4
// 005158e0  3bc0                 cmp eax, eax
// 005158e2  7406                 je 0x5158ea
// 005158e4  ff15ace98900         call dword ptr [0x89e9ac]
// 005158ea  3bdf                 cmp ebx, edi
// 005158ec  5f                   pop edi
// 005158ed  7415                 je 0x515904
// 005158ef  83c30c               add ebx, 0xc
// 005158f2  53                   push ebx
// 005158f3  8bcd                 mov ecx, ebp
// 005158f5  e8c6faffff           call 0x5153c0
// 005158fa  84c0                 test al, al
// 005158fc  7506                 jne 0x515904
// 005158fe  8d4c240c             lea ecx, [esp + 0xc]
// 00515902  eb11                 jmp 0x515915
// 00515904  8b0e                 mov ecx, dword ptr [esi]
// 00515906  8b4618               mov eax, dword ptr [esi + 0x18]
// 00515909  894c2414             mov dword ptr [esp + 0x14], ecx
// 0051590d  89442418             mov dword ptr [esp + 0x18], eax
// 00515911  8d4c2414             lea ecx, [esp + 0x14]
// 00515915  8b11                 mov edx, dword ptr [ecx]
// 00515917  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051591b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0051591e  5e                   pop esi
// 0051591f  5d                   pop ebp
// 00515920  8910                 mov dword ptr [eax], edx
// 00515922  894804               mov dword ptr [eax + 4], ecx
// 00515925  5b                   pop ebx
// 00515926  83c410               add esp, 0x10
// 00515929  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
