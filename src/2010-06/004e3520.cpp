// roc 2010-06 004e3520  unit: RBX::Network::IdSerializer  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e3520
//
// 004e3520  83ec10               sub esp, 0x10
// 004e3523  53                   push ebx
// 004e3524  55                   push ebp
// 004e3525  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004e3529  56                   push esi
// 004e352a  55                   push ebp
// 004e352b  8bf1                 mov esi, ecx
// 004e352d  e87eecffff           call 0x4e21b0
// 004e3532  8bd8                 mov ebx, eax
// 004e3534  895c2410             mov dword ptr [esp + 0x10], ebx
// 004e3538  85f6                 test esi, esi
// 004e353a  7506                 jne 0x4e3542
// 004e353c  ff150ca99e00         call dword ptr [0x9ea90c]
// 004e3542  8b06                 mov eax, dword ptr [esi]
// 004e3544  57                   push edi
// 004e3545  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004e3548  89442410             mov dword ptr [esp + 0x10], eax
// 004e354c  85c0                 test eax, eax
// 004e354e  7404                 je 0x4e3554
// 004e3550  3bc0                 cmp eax, eax
// 004e3552  7406                 je 0x4e355a
// 004e3554  ff150ca99e00         call dword ptr [0x9ea90c]
// 004e355a  3bdf                 cmp ebx, edi
// 004e355c  5f                   pop edi
// 004e355d  7415                 je 0x4e3574
// 004e355f  83c30c               add ebx, 0xc
// 004e3562  53                   push ebx
// 004e3563  8bcd                 mov ecx, ebp
// 004e3565  e8666e1200           call 0x60a3d0
// 004e356a  84c0                 test al, al
// 004e356c  7506                 jne 0x4e3574
// 004e356e  8d4c240c             lea ecx, [esp + 0xc]
// 004e3572  eb11                 jmp 0x4e3585
// 004e3574  8b0e                 mov ecx, dword ptr [esi]
// 004e3576  8b4618               mov eax, dword ptr [esi + 0x18]
// 004e3579  894c2414             mov dword ptr [esp + 0x14], ecx
// 004e357d  89442418             mov dword ptr [esp + 0x18], eax
// 004e3581  8d4c2414             lea ecx, [esp + 0x14]
// 004e3585  8b11                 mov edx, dword ptr [ecx]
// 004e3587  8b442420             mov eax, dword ptr [esp + 0x20]
// 004e358b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e358e  5e                   pop esi
// 004e358f  5d                   pop ebp
// 004e3590  8910                 mov dword ptr [eax], edx
// 004e3592  894804               mov dword ptr [eax + 4], ecx
// 004e3595  5b                   pop ebx
// 004e3596  83c410               add esp, 0x10
// 004e3599  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
