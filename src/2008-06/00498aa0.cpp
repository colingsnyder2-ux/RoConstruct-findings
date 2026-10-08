// roc 2008-06 00498aa0  unit: RBX::Network::VPlayers::?$SignalDesc  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00498aa0
//
// 00498aa0  83ec10               sub esp, 0x10
// 00498aa3  53                   push ebx
// 00498aa4  55                   push ebp
// 00498aa5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00498aa9  56                   push esi
// 00498aaa  55                   push ebp
// 00498aab  8bf1                 mov esi, ecx
// 00498aad  e8aedaffff           call 0x496560
// 00498ab2  8bd8                 mov ebx, eax
// 00498ab4  895c2410             mov dword ptr [esp + 0x10], ebx
// 00498ab8  85f6                 test esi, esi
// 00498aba  7506                 jne 0x498ac2
// 00498abc  ff1590288000         call dword ptr [0x802890]
// 00498ac2  8b06                 mov eax, dword ptr [esi]
// 00498ac4  57                   push edi
// 00498ac5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00498ac8  89442410             mov dword ptr [esp + 0x10], eax
// 00498acc  85c0                 test eax, eax
// 00498ace  7404                 je 0x498ad4
// 00498ad0  3bc0                 cmp eax, eax
// 00498ad2  7406                 je 0x498ada
// 00498ad4  ff1590288000         call dword ptr [0x802890]
// 00498ada  3bdf                 cmp ebx, edi
// 00498adc  5f                   pop edi
// 00498add  7415                 je 0x498af4
// 00498adf  83c30c               add ebx, 0xc
// 00498ae2  53                   push ebx
// 00498ae3  8bcd                 mov ecx, ebp
// 00498ae5  e826f71000           call 0x5a8210
// 00498aea  84c0                 test al, al
// 00498aec  7506                 jne 0x498af4
// 00498aee  8d4c240c             lea ecx, [esp + 0xc]
// 00498af2  eb11                 jmp 0x498b05
// 00498af4  8b0e                 mov ecx, dword ptr [esi]
// 00498af6  8b4618               mov eax, dword ptr [esi + 0x18]
// 00498af9  894c2414             mov dword ptr [esp + 0x14], ecx
// 00498afd  89442418             mov dword ptr [esp + 0x18], eax
// 00498b01  8d4c2414             lea ecx, [esp + 0x14]
// 00498b05  8b11                 mov edx, dword ptr [ecx]
// 00498b07  8b442420             mov eax, dword ptr [esp + 0x20]
// 00498b0b  8b4904               mov ecx, dword ptr [ecx + 4]
// 00498b0e  5e                   pop esi
// 00498b0f  5d                   pop ebp
// 00498b10  8910                 mov dword ptr [eax], edx
// 00498b12  894804               mov dword ptr [eax + 4], ecx
// 00498b15  5b                   pop ebx
// 00498b16  83c410               add esp, 0x10
// 00498b19  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
