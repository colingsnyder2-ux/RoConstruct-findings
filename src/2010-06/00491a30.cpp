// roc 2010-06 00491a30  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491a30
//
// 00491a30  6aff                 push -1
// 00491a32  64a100000000         mov eax, dword ptr fs:[0]
// 00491a38  68e7679800           push 0x9867e7
// 00491a3d  50                   push eax
// 00491a3e  64892500000000       mov dword ptr fs:[0], esp
// 00491a45  83ec1c               sub esp, 0x1c
// 00491a48  53                   push ebx
// 00491a49  55                   push ebp
// 00491a4a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00491a4e  56                   push esi
// 00491a4f  8bf1                 mov esi, ecx
// 00491a51  b801000000           mov eax, 1
// 00491a56  014678               add dword ptr [esi + 0x78], eax
// 00491a59  57                   push edi
// 00491a5a  83fd07               cmp ebp, 7
// 00491a5d  7506                 jne 0x491a65
// 00491a5f  8bae40040000         mov ebp, dword ptr [esi + 0x440]
// 00491a65  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00491a69  83ff07               cmp edi, 7
// 00491a6c  7506                 jne 0x491a74
// 00491a6e  8bbe44040000         mov edi, dword ptr [esi + 0x444]
// 00491a74  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00491a78  83fb05               cmp ebx, 5
// 00491a7b  7506                 jne 0x491a83
// 00491a7d  8b9e48040000         mov ebx, dword ptr [esi + 0x448]
// 00491a83  39be44040000         cmp dword ptr [esi + 0x444], edi
// 00491a89  7514                 jne 0x491a9f
// 00491a8b  39ae40040000         cmp dword ptr [esi + 0x440], ebp
// 00491a91  750c                 jne 0x491a9f
// 00491a93  399e48040000         cmp dword ptr [esi + 0x448], ebx
// 00491a99  0f84ca000000         je 0x491b69
// 00491a9f  014670               add dword ptr [esi + 0x70], eax
// 00491aa2  83ff03               cmp edi, 3
// 00491aa5  751d                 jne 0x491ac4
// 00491aa7  83fd02               cmp ebp, 2
// 00491aaa  7518                 jne 0x491ac4
// 00491aac  3bdd                 cmp ebx, ebp
// 00491aae  7404                 je 0x491ab4
// 00491ab0  3bdf                 cmp ebx, edi
// 00491ab2  7510                 jne 0x491ac4
// 00491ab4  68e20b0000           push 0xbe2
// 00491ab9  ff15e0aa9e00         call dword ptr [0x9eaae0]
// 00491abf  e993000000           jmp 0x491b57
// 00491ac4  68e20b0000           push 0xbe2
// 00491ac9  ff15ecaa9e00         call dword ptr [0x9eaaec]
// 00491acf  8bc7                 mov eax, edi
// 00491ad1  e8caf1ffff           call 0x490ca0
// 00491ad6  50                   push eax
// 00491ad7  8bc5                 mov eax, ebp
// 00491ad9  e8c2f1ffff           call 0x490ca0
// 00491ade  50                   push eax
// 00491adf  ff15a0ab9e00         call dword ptr [0x9eaba0]
// 00491ae5  f605b83cc00001       test byte ptr [0xc03cb8], 1
// 00491aec  754c                 jne 0x491b3a
// 00491aee  830db83cc00001       or dword ptr [0xc03cb8], 1
// 00491af5  68f867a100           push 0xa167f8
// 00491afa  8d4c2414             lea ecx, [esp + 0x14]
// 00491afe  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00491b06  ff1510a49e00         call dword ptr [0x9ea410]
// 00491b0c  8d442410             lea eax, [esp + 0x10]
// 00491b10  50                   push eax
// 00491b11  c644243801           mov byte ptr [esp + 0x38], 1
// 00491b16  e8c5b8ffff           call 0x48d3e0
// 00491b1b  83c404               add esp, 4
// 00491b1e  8d4c2410             lea ecx, [esp + 0x10]
// 00491b22  a2b43cc000           mov byte ptr [0xc03cb4], al
// 00491b27  c644243400           mov byte ptr [esp + 0x34], 0
// 00491b2c  ff1500a49e00         call dword ptr [0x9ea400]
// 00491b32  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00491b3a  803db43cc00000       cmp byte ptr [0xc03cb4], 0
// 00491b41  7414                 je 0x491b57
// 00491b43  8b0dac39c000         mov ecx, dword ptr [0xc039ac]
// 00491b49  85c9                 test ecx, ecx
// 00491b4b  740a                 je 0x491b57
// 00491b4d  8bc3                 mov eax, ebx
// 00491b4f  e88cfeffff           call 0x4919e0
// 00491b54  50                   push eax
// 00491b55  ffd1                 call ecx
// 00491b57  89be44040000         mov dword ptr [esi + 0x444], edi
// 00491b5d  89ae40040000         mov dword ptr [esi + 0x440], ebp
// 00491b63  899e48040000         mov dword ptr [esi + 0x448], ebx
// 00491b69  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00491b6d  5f                   pop edi
// 00491b6e  5e                   pop esi
// 00491b6f  5d                   pop ebp
// 00491b70  5b                   pop ebx
// 00491b71  64890d00000000       mov dword ptr fs:[0], ecx
// 00491b78  83c428               add esp, 0x28
// 00491b7b  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setBlendFunc@RenderDevice@G3D@@QAEXW4BlendFunc@12@0W4BlendEq@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
