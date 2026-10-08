// roc 2008-06 0057c8b0  unit: RBX::VInstance::?$SignalDesc  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057c8b0
//
// 0057c8b0  83ec10               sub esp, 0x10
// 0057c8b3  53                   push ebx
// 0057c8b4  55                   push ebp
// 0057c8b5  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0057c8b9  56                   push esi
// 0057c8ba  55                   push ebp
// 0057c8bb  8bf1                 mov esi, ecx
// 0057c8bd  e8aef9ffff           call 0x57c270
// 0057c8c2  8bd8                 mov ebx, eax
// 0057c8c4  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057c8c8  85f6                 test esi, esi
// 0057c8ca  7506                 jne 0x57c8d2
// 0057c8cc  ff1590288000         call dword ptr [0x802890]
// 0057c8d2  8b06                 mov eax, dword ptr [esi]
// 0057c8d4  57                   push edi
// 0057c8d5  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0057c8d8  89442410             mov dword ptr [esp + 0x10], eax
// 0057c8dc  85c0                 test eax, eax
// 0057c8de  7404                 je 0x57c8e4
// 0057c8e0  3bc0                 cmp eax, eax
// 0057c8e2  7406                 je 0x57c8ea
// 0057c8e4  ff1590288000         call dword ptr [0x802890]
// 0057c8ea  3bdf                 cmp ebx, edi
// 0057c8ec  5f                   pop edi
// 0057c8ed  7415                 je 0x57c904
// 0057c8ef  83c30c               add ebx, 0xc
// 0057c8f2  53                   push ebx
// 0057c8f3  8bcd                 mov ecx, ebp
// 0057c8f5  e8e6840100           call 0x594de0
// 0057c8fa  84c0                 test al, al
// 0057c8fc  7506                 jne 0x57c904
// 0057c8fe  8d4c240c             lea ecx, [esp + 0xc]
// 0057c902  eb11                 jmp 0x57c915
// 0057c904  8b0e                 mov ecx, dword ptr [esi]
// 0057c906  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057c909  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057c90d  89442418             mov dword ptr [esp + 0x18], eax
// 0057c911  8d4c2414             lea ecx, [esp + 0x14]
// 0057c915  8b11                 mov edx, dword ptr [ecx]
// 0057c917  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057c91b  8b4904               mov ecx, dword ptr [ecx + 4]
// 0057c91e  5e                   pop esi
// 0057c91f  5d                   pop ebp
// 0057c920  8910                 mov dword ptr [eax], edx
// 0057c922  894804               mov dword ptr [eax + 4], ecx
// 0057c925  5b                   pop ebx
// 0057c926  83c410               add esp, 0x10
// 0057c929  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?find@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
