// roc 2009-06 0051a840  unit: G3D::VVector3::?$Table  size: 796 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0051a840
//
// 0051a840  6aff                 push -1
// 0051a842  68b2db8500           push 0x85dbb2
// 0051a847  64a100000000         mov eax, dword ptr fs:[0]
// 0051a84d  50                   push eax
// 0051a84e  64892500000000       mov dword ptr fs:[0], esp
// 0051a855  83ec48               sub esp, 0x48
// 0051a858  8b442460             mov eax, dword ptr [esp + 0x60]
// 0051a85c  80782900             cmp byte ptr [eax + 0x29], 0
// 0051a860  53                   push ebx
// 0051a861  8bd9                 mov ebx, ecx
// 0051a863  895c2404             mov dword ptr [esp + 4], ebx
// 0051a867  7459                 je 0x51a8c2
// 0051a869  68a4c98a00           push 0x8ac9a4
// 0051a86e  8d4c240c             lea ecx, [esp + 0xc]
// 0051a872  ff15b4e48900         call dword ptr [0x89e4b4]
// 0051a878  8d4c2424             lea ecx, [esp + 0x24]
// 0051a87c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0051a884  ff15b8e98900         call dword ptr [0x89e9b8]
// 0051a88a  8d442408             lea eax, [esp + 8]
// 0051a88e  50                   push eax
// 0051a88f  8d4c2434             lea ecx, [esp + 0x34]
// 0051a893  c644245801           mov byte ptr [esp + 0x58], 1
// 0051a898  c744242844c98a00     mov dword ptr [esp + 0x28], 0x8ac944
// 0051a8a0  ff15b8e48900         call dword ptr [0x89e4b8]
// 0051a8a6  68dc919700           push 0x9791dc
// 0051a8ab  8d4c2428             lea ecx, [esp + 0x28]
// 0051a8af  51                   push ecx
// 0051a8b0  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0051a8b5  c744242c5cc98a00     mov dword ptr [esp + 0x2c], 0x8ac95c
// 0051a8bd  e888f11f00           call 0x719a4a
// 0051a8c2  55                   push ebp
// 0051a8c3  56                   push esi
// 0051a8c4  57                   push edi
// 0051a8c5  8d4c246c             lea ecx, [esp + 0x6c]
// 0051a8c9  8be8                 mov ebp, eax
// 0051a8cb  e8a0cfffff           call 0x517870
// 0051a8d0  8b4d00               mov ecx, dword ptr [ebp]
// 0051a8d3  80792900             cmp byte ptr [ecx + 0x29], 0
// 0051a8d7  7405                 je 0x51a8de
// 0051a8d9  8b7d08               mov edi, dword ptr [ebp + 8]
// 0051a8dc  eb1b                 jmp 0x51a8f9
// 0051a8de  8b5508               mov edx, dword ptr [ebp + 8]
// 0051a8e1  807a2900             cmp byte ptr [edx + 0x29], 0
// 0051a8e5  7404                 je 0x51a8eb
// 0051a8e7  8bf9                 mov edi, ecx
// 0051a8e9  eb0e                 jmp 0x51a8f9
// 0051a8eb  8b442470             mov eax, dword ptr [esp + 0x70]
// 0051a8ef  8b7808               mov edi, dword ptr [eax + 8]
// 0051a8f2  8d5008               lea edx, [eax + 8]
// 0051a8f5  3bc5                 cmp eax, ebp
// 0051a8f7  7567                 jne 0x51a960
// 0051a8f9  807f2900             cmp byte ptr [edi + 0x29], 0
// 0051a8fd  8b7504               mov esi, dword ptr [ebp + 4]
// 0051a900  7503                 jne 0x51a905
// 0051a902  897704               mov dword ptr [edi + 4], esi
// 0051a905  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0051a908  396804               cmp dword ptr [eax + 4], ebp
// 0051a90b  7505                 jne 0x51a912
// 0051a90d  897804               mov dword ptr [eax + 4], edi
// 0051a910  eb0b                 jmp 0x51a91d
// 0051a912  392e                 cmp dword ptr [esi], ebp
// 0051a914  7504                 jne 0x51a91a
// 0051a916  893e                 mov dword ptr [esi], edi
// 0051a918  eb03                 jmp 0x51a91d
// 0051a91a  897e08               mov dword ptr [esi + 8], edi
// 0051a91d  8b5b18               mov ebx, dword ptr [ebx + 0x18]
// 0051a920  392b                 cmp dword ptr [ebx], ebp
// 0051a922  7515                 jne 0x51a939
// 0051a924  807f2900             cmp byte ptr [edi + 0x29], 0
// 0051a928  7404                 je 0x51a92e
// 0051a92a  8bc6                 mov eax, esi
// 0051a92c  eb09                 jmp 0x51a937
// 0051a92e  57                   push edi
// 0051a92f  e89cc1ffff           call 0x516ad0
// 0051a934  83c404               add esp, 4
// 0051a937  8903                 mov dword ptr [ebx], eax
// 0051a939  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051a93d  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0051a940  396b08               cmp dword ptr [ebx + 8], ebp
// 0051a943  7578                 jne 0x51a9bd
// 0051a945  807f2900             cmp byte ptr [edi + 0x29], 0
// 0051a949  7407                 je 0x51a952
// 0051a94b  8bc6                 mov eax, esi
// 0051a94d  894308               mov dword ptr [ebx + 8], eax
// 0051a950  eb6b                 jmp 0x51a9bd
// 0051a952  57                   push edi
// 0051a953  e8a8761c00           call 0x6e2000
// 0051a958  83c404               add esp, 4
// 0051a95b  894308               mov dword ptr [ebx + 8], eax
// 0051a95e  eb5d                 jmp 0x51a9bd
// 0051a960  894104               mov dword ptr [ecx + 4], eax
// 0051a963  8b4d00               mov ecx, dword ptr [ebp]
// 0051a966  8908                 mov dword ptr [eax], ecx
// 0051a968  3b4508               cmp eax, dword ptr [ebp + 8]
// 0051a96b  7504                 jne 0x51a971
// 0051a96d  8bf0                 mov esi, eax
// 0051a96f  eb19                 jmp 0x51a98a
// 0051a971  807f2900             cmp byte ptr [edi + 0x29], 0
// 0051a975  8b7004               mov esi, dword ptr [eax + 4]
// 0051a978  7503                 jne 0x51a97d
// 0051a97a  897704               mov dword ptr [edi + 4], esi
// 0051a97d  893e                 mov dword ptr [esi], edi
// 0051a97f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0051a982  890a                 mov dword ptr [edx], ecx
// 0051a984  8b5508               mov edx, dword ptr [ebp + 8]
// 0051a987  894204               mov dword ptr [edx + 4], eax
// 0051a98a  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 0051a98d  396904               cmp dword ptr [ecx + 4], ebp
// 0051a990  7505                 jne 0x51a997
// 0051a992  894104               mov dword ptr [ecx + 4], eax
// 0051a995  eb0e                 jmp 0x51a9a5
// 0051a997  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0051a99a  3929                 cmp dword ptr [ecx], ebp
// 0051a99c  7504                 jne 0x51a9a2
// 0051a99e  8901                 mov dword ptr [ecx], eax
// 0051a9a0  eb03                 jmp 0x51a9a5
// 0051a9a2  894108               mov dword ptr [ecx + 8], eax
// 0051a9a5  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0051a9a8  894804               mov dword ptr [eax + 4], ecx
// 0051a9ab  8d4d28               lea ecx, [ebp + 0x28]
// 0051a9ae  83c028               add eax, 0x28
// 0051a9b1  3bc1                 cmp eax, ecx
// 0051a9b3  7408                 je 0x51a9bd
// 0051a9b5  8a19                 mov bl, byte ptr [ecx]
// 0051a9b7  8a10                 mov dl, byte ptr [eax]
// 0051a9b9  8818                 mov byte ptr [eax], bl
// 0051a9bb  8811                 mov byte ptr [ecx], dl
// 0051a9bd  bb01000000           mov ebx, 1
// 0051a9c2  385d28               cmp byte ptr [ebp + 0x28], bl
// 0051a9c5  0f8504010000         jne 0x51aacf
// 0051a9cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051a9cf  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0051a9d2  3b7a04               cmp edi, dword ptr [edx + 4]
// 0051a9d5  0f84f1000000         je 0x51aacc
// 0051a9db  eb03                 jmp 0x51a9e0
// 0051a9dd  8d4900               lea ecx, [ecx]
// 0051a9e0  385f28               cmp byte ptr [edi + 0x28], bl
// 0051a9e3  0f85e3000000         jne 0x51aacc
// 0051a9e9  8b06                 mov eax, dword ptr [esi]
// 0051a9eb  3bf8                 cmp edi, eax
// 0051a9ed  7567                 jne 0x51aa56
// 0051a9ef  8b4608               mov eax, dword ptr [esi + 8]
// 0051a9f2  80782800             cmp byte ptr [eax + 0x28], 0
// 0051a9f6  7514                 jne 0x51aa0c
// 0051a9f8  885828               mov byte ptr [eax + 0x28], bl
// 0051a9fb  56                   push esi
// 0051a9fc  c6462800             mov byte ptr [esi + 0x28], 0
// 0051aa00  e8cb771c00           call 0x6e21d0
// 0051aa05  8b4608               mov eax, dword ptr [esi + 8]
// 0051aa08  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051aa0c  80782900             cmp byte ptr [eax + 0x29], 0
// 0051aa10  7576                 jne 0x51aa88
// 0051aa12  8b10                 mov edx, dword ptr [eax]
// 0051aa14  385a28               cmp byte ptr [edx + 0x28], bl
// 0051aa17  7508                 jne 0x51aa21
// 0051aa19  8b5008               mov edx, dword ptr [eax + 8]
// 0051aa1c  385a28               cmp byte ptr [edx + 0x28], bl
// 0051aa1f  7463                 je 0x51aa84
// 0051aa21  8b5008               mov edx, dword ptr [eax + 8]
// 0051aa24  385a28               cmp byte ptr [edx + 0x28], bl
// 0051aa27  7516                 jne 0x51aa3f
// 0051aa29  8b10                 mov edx, dword ptr [eax]
// 0051aa2b  885a28               mov byte ptr [edx + 0x28], bl
// 0051aa2e  50                   push eax
// 0051aa2f  c6402800             mov byte ptr [eax + 0x28], 0
// 0051aa33  e8b8bfffff           call 0x5169f0
// 0051aa38  8b4608               mov eax, dword ptr [esi + 8]
// 0051aa3b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051aa3f  8a5628               mov dl, byte ptr [esi + 0x28]
// 0051aa42  885028               mov byte ptr [eax + 0x28], dl
// 0051aa45  885e28               mov byte ptr [esi + 0x28], bl
// 0051aa48  8b4008               mov eax, dword ptr [eax + 8]
// 0051aa4b  56                   push esi
// 0051aa4c  885828               mov byte ptr [eax + 0x28], bl
// 0051aa4f  e87c771c00           call 0x6e21d0
// 0051aa54  eb76                 jmp 0x51aacc
// 0051aa56  80782800             cmp byte ptr [eax + 0x28], 0
// 0051aa5a  7513                 jne 0x51aa6f
// 0051aa5c  885828               mov byte ptr [eax + 0x28], bl
// 0051aa5f  56                   push esi
// 0051aa60  c6462800             mov byte ptr [esi + 0x28], 0
// 0051aa64  e887bfffff           call 0x5169f0
// 0051aa69  8b06                 mov eax, dword ptr [esi]
// 0051aa6b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051aa6f  80782900             cmp byte ptr [eax + 0x29], 0
// 0051aa73  7513                 jne 0x51aa88
// 0051aa75  8b5008               mov edx, dword ptr [eax + 8]
// 0051aa78  385a28               cmp byte ptr [edx + 0x28], bl
// 0051aa7b  751e                 jne 0x51aa9b
// 0051aa7d  8b10                 mov edx, dword ptr [eax]
// 0051aa7f  385a28               cmp byte ptr [edx + 0x28], bl
// 0051aa82  7517                 jne 0x51aa9b
// 0051aa84  c6402800             mov byte ptr [eax + 0x28], 0
// 0051aa88  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0051aa8b  8bfe                 mov edi, esi
// 0051aa8d  8b7604               mov esi, dword ptr [esi + 4]
// 0051aa90  3b7804               cmp edi, dword ptr [eax + 4]
// 0051aa93  0f8547ffffff         jne 0x51a9e0
// 0051aa99  eb31                 jmp 0x51aacc
// 0051aa9b  8b10                 mov edx, dword ptr [eax]
// 0051aa9d  385a28               cmp byte ptr [edx + 0x28], bl
// 0051aaa0  7516                 jne 0x51aab8
// 0051aaa2  8b5008               mov edx, dword ptr [eax + 8]
// 0051aaa5  885a28               mov byte ptr [edx + 0x28], bl
// 0051aaa8  50                   push eax
// 0051aaa9  c6402800             mov byte ptr [eax + 0x28], 0
// 0051aaad  e81e771c00           call 0x6e21d0
// 0051aab2  8b06                 mov eax, dword ptr [esi]
// 0051aab4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051aab8  8a5628               mov dl, byte ptr [esi + 0x28]
// 0051aabb  885028               mov byte ptr [eax + 0x28], dl
// 0051aabe  885e28               mov byte ptr [esi + 0x28], bl
// 0051aac1  8b00                 mov eax, dword ptr [eax]
// 0051aac3  56                   push esi
// 0051aac4  885828               mov byte ptr [eax + 0x28], bl
// 0051aac7  e824bfffff           call 0x5169f0
// 0051aacc  885f28               mov byte ptr [edi + 0x28], bl
// 0051aacf  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0051aad2  85c0                 test eax, eax
// 0051aad4  744a                 je 0x51ab20
// 0051aad6  83c004               add eax, 4
// 0051aad9  50                   push eax
// 0051aada  ff15a4e18900         call dword ptr [0x89e1a4]
// 0051aae0  85c0                 test eax, eax
// 0051aae2  7535                 jne 0x51ab19
// 0051aae4  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0051aae7  8b7108               mov esi, dword ptr [ecx + 8]
// 0051aaea  85f6                 test esi, esi
// 0051aaec  741d                 je 0x51ab0b
// 0051aaee  8bff                 mov edi, edi
// 0051aaf0  8b0e                 mov ecx, dword ptr [esi]
// 0051aaf2  8b11                 mov edx, dword ptr [ecx]
// 0051aaf4  8b4204               mov eax, dword ptr [edx + 4]
// 0051aaf7  ffd0                 call eax
// 0051aaf9  8bc6                 mov eax, esi
// 0051aafb  8b7604               mov esi, dword ptr [esi + 4]
// 0051aafe  50                   push eax
// 0051aaff  e82edf1f00           call 0x718a32
// 0051ab04  83c404               add esp, 4
// 0051ab07  85f6                 test esi, esi
// 0051ab09  75e5                 jne 0x51aaf0
// 0051ab0b  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0051ab0e  85c9                 test ecx, ecx
// 0051ab10  7407                 je 0x51ab19
// 0051ab12  8b11                 mov edx, dword ptr [ecx]
// 0051ab14  8b02                 mov eax, dword ptr [edx]
// 0051ab16  53                   push ebx
// 0051ab17  ffd0                 call eax
// 0051ab19  c7452400000000       mov dword ptr [ebp + 0x24], 0
// 0051ab20  55                   push ebp
// 0051ab21  e80cdf1f00           call 0x718a32
// 0051ab26  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051ab2a  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0051ab2d  83c404               add esp, 4
// 0051ab30  5f                   pop edi
// 0051ab31  5e                   pop esi
// 0051ab32  5d                   pop ebp
// 0051ab33  85c0                 test eax, eax
// 0051ab35  7604                 jbe 0x51ab3b
// 0051ab37  48                   dec eax
// 0051ab38  89421c               mov dword ptr [edx + 0x1c], eax
// 0051ab3b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0051ab3f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0051ab43  8b12                 mov edx, dword ptr [edx]
// 0051ab45  894804               mov dword ptr [eax + 4], ecx
// 0051ab48  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0051ab4c  8910                 mov dword ptr [eax], edx
// 0051ab4e  5b                   pop ebx
// 0051ab4f  64890d00000000       mov dword ptr fs:[0], ecx
// 0051ab56  83c454               add esp, 0x54
// 0051ab59  c20c00               ret 0xc
// library openrbx-client/RbxView\PBBMesh.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@U?$less@VTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@@std@@V?$allocator@U?$pair@$$CBVTextureKey@?$MeshFactory@VPBBMesh@View@RBX@@$03@View@RBX@@V?$ReferenceCountedPointer@VMesh@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/PBBMesh.cpp
