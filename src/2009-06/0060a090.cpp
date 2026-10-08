// roc 2009-06 0060a090  unit: RBX::GlobalSettings  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0060a090
//
// 0060a090  83ec10               sub esp, 0x10
// 0060a093  53                   push ebx
// 0060a094  55                   push ebp
// 0060a095  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0060a099  56                   push esi
// 0060a09a  55                   push ebp
// 0060a09b  8bf1                 mov esi, ecx
// 0060a09d  e8cef9ffff           call 0x609a70
// 0060a0a2  8bd8                 mov ebx, eax
// 0060a0a4  895c2410             mov dword ptr [esp + 0x10], ebx
// 0060a0a8  85f6                 test esi, esi
// 0060a0aa  7506                 jne 0x60a0b2
// 0060a0ac  ff15ace98900         call dword ptr [0x89e9ac]
// 0060a0b2  8b06                 mov eax, dword ptr [esi]
// 0060a0b4  57                   push edi
// 0060a0b5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0060a0b8  89442410             mov dword ptr [esp + 0x10], eax
// 0060a0bc  85c0                 test eax, eax
// 0060a0be  7404                 je 0x60a0c4
// 0060a0c0  3bc0                 cmp eax, eax
// 0060a0c2  7406                 je 0x60a0ca
// 0060a0c4  ff15ace98900         call dword ptr [0x89e9ac]
// 0060a0ca  3bdf                 cmp ebx, edi
// 0060a0cc  5f                   pop edi
// 0060a0cd  7415                 je 0x60a0e4
// 0060a0cf  83c30c               add ebx, 0xc
// 0060a0d2  53                   push ebx
// 0060a0d3  8bcd                 mov ecx, ebp
// 0060a0d5  e8a6240400           call 0x64c580
// 0060a0da  84c0                 test al, al
// 0060a0dc  7506                 jne 0x60a0e4
// 0060a0de  8d4c240c             lea ecx, [esp + 0xc]
// 0060a0e2  eb11                 jmp 0x60a0f5
// 0060a0e4  8b0e                 mov ecx, dword ptr [esi]
// 0060a0e6  8b4618               mov eax, dword ptr [esi + 0x18]
// 0060a0e9  894c2414             mov dword ptr [esp + 0x14], ecx
// 0060a0ed  89442418             mov dword ptr [esp + 0x18], eax
// 0060a0f1  8d4c2414             lea ecx, [esp + 0x14]
// 0060a0f5  8b11                 mov edx, dword ptr [ecx]
// 0060a0f7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0060a0fb  8b4904               mov ecx, dword ptr [ecx + 4]
// 0060a0fe  5e                   pop esi
// 0060a0ff  5d                   pop ebp
// 0060a100  8910                 mov dword ptr [eax], edx
// 0060a102  894804               mov dword ptr [eax + 4], ecx
// 0060a105  5b                   pop ebx
// 0060a106  83c410               add esp, 0x10
// 0060a109  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
