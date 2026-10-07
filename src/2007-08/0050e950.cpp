// roc 2007-08 0050e950  unit: G3D::TextInput::WrongSymbol  size: 533 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050e950
//
// 0050e950  6aff                 push -1
// 0050e952  688dff7400           push 0x74ff8d
// 0050e957  64a100000000         mov eax, dword ptr fs:[0]
// 0050e95d  50                   push eax
// 0050e95e  83ec74               sub esp, 0x74
// 0050e961  53                   push ebx
// 0050e962  55                   push ebp
// 0050e963  56                   push esi
// 0050e964  57                   push edi
// 0050e965  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050e96a  33c4                 xor eax, esp
// 0050e96c  50                   push eax
// 0050e96d  8d842488000000       lea eax, [esp + 0x88]
// 0050e974  64a300000000         mov dword ptr fs:[0], eax
// 0050e97a  8bf1                 mov esi, ecx
// 0050e97c  89742414             mov dword ptr [esp + 0x14], esi
// 0050e980  33ed                 xor ebp, ebp
// 0050e982  896e04               mov dword ptr [esi + 4], ebp
// 0050e985  896e08               mov dword ptr [esi + 8], ebp
// 0050e988  896e0c               mov dword ptr [esi + 0xc], ebp
// 0050e98b  896e10               mov dword ptr [esi + 0x10], ebp
// 0050e98e  8d5e14               lea ebx, [esi + 0x14]
// 0050e991  89ac2490000000       mov dword ptr [esp + 0x90], ebp
// 0050e998  896b04               mov dword ptr [ebx + 4], ebp
// 0050e99b  896b08               mov dword ptr [ebx + 8], ebp
// 0050e99e  892b                 mov dword ptr [ebx], ebp
// 0050e9a0  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0050e9a7  50                   push eax
// 0050e9a8  8d4e2c               lea ecx, [esi + 0x2c]
// 0050e9ab  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0050e9b3  e8b8ebffff           call 0x50d570
// 0050e9b8  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 0050e9bb  8bbc249c000000       mov edi, dword ptr [esp + 0x9c]
// 0050e9c2  83c101               add ecx, 1
// 0050e9c5  396e48               cmp dword ptr [esi + 0x48], ebp
// 0050e9c8  c684249000000002     mov byte ptr [esp + 0x90], 2
// 0050e9d0  896e20               mov dword ptr [esi + 0x20], ebp
// 0050e9d3  c7462801000000       mov dword ptr [esi + 0x28], 1
// 0050e9da  894e24               mov dword ptr [esi + 0x24], ecx
// 0050e9dd  0f8539010000         jne 0x50eb1c
// 0050e9e3  837f140e             cmp dword ptr [edi + 0x14], 0xe
// 0050e9e7  737f                 jae 0x50ea68
// 0050e9e9  6830627900           push 0x796230
// 0050e9ee  8d4c2454             lea ecx, [esp + 0x54]
// 0050e9f2  ff1598e67700         call dword ptr [0x77e698]
// 0050e9f8  57                   push edi
// 0050e9f9  50                   push eax
// 0050e9fa  8d54243c             lea edx, [esp + 0x3c]
// 0050e9fe  52                   push edx
// 0050e9ff  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 0050ea07  ff1568e57700         call dword ptr [0x77e568]
// 0050ea0d  6830627900           push 0x796230
// 0050ea12  50                   push eax
// 0050ea13  8d44242c             lea eax, [esp + 0x2c]
// 0050ea17  50                   push eax
// 0050ea18  c68424a800000004     mov byte ptr [esp + 0xa8], 4
// 0050ea20  ff1544e67700         call dword ptr [0x77e644]
// 0050ea26  83c418               add esp, 0x18
// 0050ea29  50                   push eax
// 0050ea2a  8d4e34               lea ecx, [esi + 0x34]
// 0050ea2d  c684249400000005     mov byte ptr [esp + 0x94], 5
// 0050ea35  ff1590e67700         call dword ptr [0x77e690]
// 0050ea3b  8d4c2418             lea ecx, [esp + 0x18]
// 0050ea3f  c684249000000004     mov byte ptr [esp + 0x90], 4
// 0050ea47  ff15ace67700         call dword ptr [0x77e6ac]
// 0050ea4d  8d4c2434             lea ecx, [esp + 0x34]
// 0050ea51  c684249000000003     mov byte ptr [esp + 0x90], 3
// 0050ea59  ff15ace67700         call dword ptr [0x77e6ac]
// 0050ea5f  8d4c2450             lea ecx, [esp + 0x50]
// 0050ea63  e9a6000000           jmp 0x50eb0e
// 0050ea68  6a0a                 push 0xa
// 0050ea6a  55                   push ebp
// 0050ea6b  8d4c2474             lea ecx, [esp + 0x74]
// 0050ea6f  51                   push ecx
// 0050ea70  8bcf                 mov ecx, edi
// 0050ea72  ff1538e67700         call dword ptr [0x77e638]
// 0050ea78  8be8                 mov ebp, eax
// 0050ea7a  6830627900           push 0x796230
// 0050ea7f  8d4c241c             lea ecx, [esp + 0x1c]
// 0050ea83  c684249400000006     mov byte ptr [esp + 0x94], 6
// 0050ea8b  ff1598e67700         call dword ptr [0x77e698]
// 0050ea91  55                   push ebp
// 0050ea92  50                   push eax
// 0050ea93  8d54243c             lea edx, [esp + 0x3c]
// 0050ea97  52                   push edx
// 0050ea98  c684249c00000007     mov byte ptr [esp + 0x9c], 7
// 0050eaa0  ff1568e57700         call dword ptr [0x77e568]
// 0050eaa6  68680e7a00           push 0x7a0e68
// 0050eaab  50                   push eax
// 0050eaac  8d442464             lea eax, [esp + 0x64]
// 0050eab0  50                   push eax
// 0050eab1  c68424a800000008     mov byte ptr [esp + 0xa8], 8
// 0050eab9  ff1544e67700         call dword ptr [0x77e644]
// 0050eabf  83c418               add esp, 0x18
// 0050eac2  50                   push eax
// 0050eac3  8d4e34               lea ecx, [esi + 0x34]
// 0050eac6  c684249400000009     mov byte ptr [esp + 0x94], 9
// 0050eace  ff1590e67700         call dword ptr [0x77e690]
// 0050ead4  8d4c2450             lea ecx, [esp + 0x50]
// 0050ead8  c684249000000008     mov byte ptr [esp + 0x90], 8
// 0050eae0  ff15ace67700         call dword ptr [0x77e6ac]
// 0050eae6  8d4c2434             lea ecx, [esp + 0x34]
// 0050eaea  c684249000000007     mov byte ptr [esp + 0x90], 7
// 0050eaf2  ff15ace67700         call dword ptr [0x77e6ac]
// 0050eaf8  8d4c2418             lea ecx, [esp + 0x18]
// 0050eafc  c684249000000006     mov byte ptr [esp + 0x90], 6
// 0050eb04  ff15ace67700         call dword ptr [0x77e6ac]
// 0050eb0a  8d4c246c             lea ecx, [esp + 0x6c]
// 0050eb0e  c684249000000002     mov byte ptr [esp + 0x90], 2
// 0050eb16  ff15ace67700         call dword ptr [0x77e6ac]
// 0050eb1c  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0050eb1f  6a01                 push 1
// 0050eb21  51                   push ecx
// 0050eb22  8bcb                 mov ecx, ebx
// 0050eb24  e8d79fffff           call 0x508b00
// 0050eb29  837f1810             cmp dword ptr [edi + 0x18], 0x10
// 0050eb2d  8b4618               mov eax, dword ptr [esi + 0x18]
// 0050eb30  7205                 jb 0x50eb37
// 0050eb32  8b7f04               mov edi, dword ptr [edi + 4]
// 0050eb35  eb03                 jmp 0x50eb3a
// 0050eb37  83c704               add edi, 4
// 0050eb3a  8b13                 mov edx, dword ptr [ebx]
// 0050eb3c  50                   push eax
// 0050eb3d  57                   push edi
// 0050eb3e  52                   push edx
// 0050eb3f  e8fc19ffff           call 0x500540
// 0050eb44  83c40c               add esp, 0xc
// 0050eb47  8bc6                 mov eax, esi
// 0050eb49  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0050eb50  64890d00000000       mov dword ptr fs:[0], ecx
// 0050eb57  59                   pop ecx
// 0050eb58  5f                   pop edi
// 0050eb59  5e                   pop esi
// 0050eb5a  5d                   pop ebp
// 0050eb5b  5b                   pop ebx
// 0050eb5c  81c480000000         add esp, 0x80
// 0050eb62  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0TextInput@G3D@@QAE@W4FS@01@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVSettings@01@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
