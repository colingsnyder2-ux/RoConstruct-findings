// roc 2010-06 00541f00  unit: RBX::AggregatingSceneManager::Bucket  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00541f00
//
// 00541f00  83ec08               sub esp, 8
// 00541f03  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00541f06  53                   push ebx
// 00541f07  55                   push ebp
// 00541f08  56                   push esi
// 00541f09  8b7108               mov esi, dword ptr [ecx + 8]
// 00541f0c  57                   push edi
// 00541f0d  8b38                 mov edi, dword ptr [eax]
// 00541f0f  897c2414             mov dword ptr [esp + 0x14], edi
// 00541f13  89742410             mov dword ptr [esp + 0x10], esi
// 00541f17  8bd8                 mov ebx, eax
// 00541f19  8bee                 mov ebp, esi
// 00541f1b  eb03                 jmp 0x541f20
// 00541f1d  8d4900               lea ecx, [ecx]
// 00541f20  85f6                 test esi, esi
// 00541f22  7404                 je 0x541f28
// 00541f24  3bf5                 cmp esi, ebp
// 00541f26  7406                 je 0x541f2e
// 00541f28  ff150ca99e00         call dword ptr [0x9ea90c]
// 00541f2e  3bfb                 cmp edi, ebx
// 00541f30  743d                 je 0x541f6f
// 00541f32  85f6                 test esi, esi
// 00541f34  7535                 jne 0x541f6b
// 00541f36  ff150ca99e00         call dword ptr [0x9ea90c]
// 00541f3c  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 00541f3f  7506                 jne 0x541f47
// 00541f41  ff150ca99e00         call dword ptr [0x9ea90c]
// 00541f47  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00541f4b  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00541f4e  52                   push edx
// 00541f4f  e8fcf7ffff           call 0x541750
// 00541f54  84c0                 test al, al
// 00541f56  7517                 jne 0x541f6f
// 00541f58  8d4c2410             lea ecx, [esp + 0x10]
// 00541f5c  e86fc30400           call 0x58e2d0
// 00541f61  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00541f65  8b742410             mov esi, dword ptr [esp + 0x10]
// 00541f69  ebb5                 jmp 0x541f20
// 00541f6b  8b36                 mov esi, dword ptr [esi]
// 00541f6d  ebcd                 jmp 0x541f3c
// 00541f6f  5f                   pop edi
// 00541f70  5e                   pop esi
// 00541f71  5d                   pop ebp
// 00541f72  5b                   pop ebx
// 00541f73  83c408               add esp, 8
// 00541f76  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?dequeueSleepingChunk@AggregatingSceneManager@Render@RBX@@AAEXABV?$ReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
