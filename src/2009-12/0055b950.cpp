// roc 2009-12 0055b950  unit: RBX::Network::ServerReplicator  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0055b950
//
// 0055b950  83ec10               sub esp, 0x10
// 0055b953  53                   push ebx
// 0055b954  55                   push ebp
// 0055b955  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0055b959  56                   push esi
// 0055b95a  55                   push ebp
// 0055b95b  8bf1                 mov esi, ecx
// 0055b95d  e83ef5ffff           call 0x55aea0
// 0055b962  8bd8                 mov ebx, eax
// 0055b964  895c2410             mov dword ptr [esp + 0x10], ebx
// 0055b968  85f6                 test esi, esi
// 0055b96a  7506                 jne 0x55b972
// 0055b96c  ff1560b79800         call dword ptr [0x98b760]
// 0055b972  8b06                 mov eax, dword ptr [esi]
// 0055b974  57                   push edi
// 0055b975  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0055b978  89442410             mov dword ptr [esp + 0x10], eax
// 0055b97c  85c0                 test eax, eax
// 0055b97e  7404                 je 0x55b984
// 0055b980  3bc0                 cmp eax, eax
// 0055b982  7406                 je 0x55b98a
// 0055b984  ff1560b79800         call dword ptr [0x98b760]
// 0055b98a  3bdf                 cmp ebx, edi
// 0055b98c  5f                   pop edi
// 0055b98d  7415                 je 0x55b9a4
// 0055b98f  83c30c               add ebx, 0xc
// 0055b992  53                   push ebx
// 0055b993  8bcd                 mov ecx, ebp
// 0055b995  e876771b00           call 0x713110
// 0055b99a  84c0                 test al, al
// 0055b99c  7506                 jne 0x55b9a4
// 0055b99e  8d4c240c             lea ecx, [esp + 0xc]
// 0055b9a2  eb11                 jmp 0x55b9b5
// 0055b9a4  8b0e                 mov ecx, dword ptr [esi]
// 0055b9a6  8b4618               mov eax, dword ptr [esi + 0x18]
// 0055b9a9  894c2414             mov dword ptr [esp + 0x14], ecx
// 0055b9ad  89442418             mov dword ptr [esp + 0x18], eax
// 0055b9b1  8d4c2414             lea ecx, [esp + 0x14]
// 0055b9b5  8b11                 mov edx, dword ptr [ecx]
// 0055b9b7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055b9bb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0055b9be  5e                   pop esi
// 0055b9bf  5d                   pop ebp
// 0055b9c0  8910                 mov dword ptr [eax], edx
// 0055b9c2  894804               mov dword ptr [eax + 4], ecx
// 0055b9c5  5b                   pop ebx
// 0055b9c6  83c410               add esp, 0x10
// 0055b9c9  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
