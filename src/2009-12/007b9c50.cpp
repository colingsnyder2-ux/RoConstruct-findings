// roc 2009-12 007b9c50  unit: RBX::TreeStage  size: 510 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b9c50
//
// 007b9c50  64a100000000         mov eax, dword ptr fs:[0]
// 007b9c56  6aff                 push -1
// 007b9c58  6812699500           push 0x956912
// 007b9c5d  50                   push eax
// 007b9c5e  64892500000000       mov dword ptr fs:[0], esp
// 007b9c65  83ec44               sub esp, 0x44
// 007b9c68  57                   push edi
// 007b9c69  8bf9                 mov edi, ecx
// 007b9c6b  817f1cfeffff3f       cmp dword ptr [edi + 0x1c], 0x3ffffffe
// 007b9c72  7259                 jb 0x7b9ccd
// 007b9c74  6800f59900           push 0x99f500
// 007b9c79  8d4c2408             lea ecx, [esp + 8]
// 007b9c7d  ff15f4b69800         call dword ptr [0x98b6f4]
// 007b9c83  8d4c2420             lea ecx, [esp + 0x20]
// 007b9c87  c744245000000000     mov dword ptr [esp + 0x50], 0
// 007b9c8f  ff1554b79800         call dword ptr [0x98b754]
// 007b9c95  8d442404             lea eax, [esp + 4]
// 007b9c99  50                   push eax
// 007b9c9a  8d4c2430             lea ecx, [esp + 0x30]
// 007b9c9e  c644245401           mov byte ptr [esp + 0x54], 1
// 007b9ca3  c744242484f49900     mov dword ptr [esp + 0x24], 0x99f484
// 007b9cab  ff15f0b69800         call dword ptr [0x98b6f0]
// 007b9cb1  68e4efa800           push 0xa8efe4
// 007b9cb6  8d4c2424             lea ecx, [esp + 0x24]
// 007b9cba  51                   push ecx
// 007b9cbb  c644245800           mov byte ptr [esp + 0x58], 0
// 007b9cc0  c744242890f49900     mov dword ptr [esp + 0x28], 0x99f490
// 007b9cc8  e8abab0300           call 0x7f4878
// 007b9ccd  8b542464             mov edx, dword ptr [esp + 0x64]
// 007b9cd1  8b4718               mov eax, dword ptr [edi + 0x18]
// 007b9cd4  53                   push ebx
// 007b9cd5  55                   push ebp
// 007b9cd6  56                   push esi
// 007b9cd7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007b9cdb  6a00                 push 0
// 007b9cdd  52                   push edx
// 007b9cde  50                   push eax
// 007b9cdf  56                   push esi
// 007b9ce0  50                   push eax
// 007b9ce1  e86a080200           call 0x7da550
// 007b9ce6  8be8                 mov ebp, eax
// 007b9ce8  8b4718               mov eax, dword ptr [edi + 0x18]
// 007b9ceb  bb01000000           mov ebx, 1
// 007b9cf0  015f1c               add dword ptr [edi + 0x1c], ebx
// 007b9cf3  3bf0                 cmp esi, eax
// 007b9cf5  7510                 jne 0x7b9d07
// 007b9cf7  896804               mov dword ptr [eax + 4], ebp
// 007b9cfa  8b4718               mov eax, dword ptr [edi + 0x18]
// 007b9cfd  8928                 mov dword ptr [eax], ebp
// 007b9cff  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 007b9d02  896908               mov dword ptr [ecx + 8], ebp
// 007b9d05  eb22                 jmp 0x7b9d29
// 007b9d07  807c246800           cmp byte ptr [esp + 0x68], 0
// 007b9d0c  740d                 je 0x7b9d1b
// 007b9d0e  892e                 mov dword ptr [esi], ebp
// 007b9d10  8b4718               mov eax, dword ptr [edi + 0x18]
// 007b9d13  3b30                 cmp esi, dword ptr [eax]
// 007b9d15  7512                 jne 0x7b9d29
// 007b9d17  8928                 mov dword ptr [eax], ebp
// 007b9d19  eb0e                 jmp 0x7b9d29
// 007b9d1b  896e08               mov dword ptr [esi + 8], ebp
// 007b9d1e  8b4718               mov eax, dword ptr [edi + 0x18]
// 007b9d21  3b7008               cmp esi, dword ptr [eax + 8]
// 007b9d24  7503                 jne 0x7b9d29
// 007b9d26  896808               mov dword ptr [eax + 8], ebp
// 007b9d29  8b5504               mov edx, dword ptr [ebp + 4]
// 007b9d2c  807a1000             cmp byte ptr [edx + 0x10], 0
// 007b9d30  8d4504               lea eax, [ebp + 4]
// 007b9d33  8bf5                 mov esi, ebp
// 007b9d35  0f85ea000000         jne 0x7b9e25
// 007b9d3b  eb03                 jmp 0x7b9d40
// 007b9d3d  8d4900               lea ecx, [ecx]
// 007b9d40  8b08                 mov ecx, dword ptr [eax]
// 007b9d42  8b5104               mov edx, dword ptr [ecx + 4]
// 007b9d45  3b0a                 cmp ecx, dword ptr [edx]
// 007b9d47  7551                 jne 0x7b9d9a
// 007b9d49  8b5208               mov edx, dword ptr [edx + 8]
// 007b9d4c  807a1000             cmp byte ptr [edx + 0x10], 0
// 007b9d50  7519                 jne 0x7b9d6b
// 007b9d52  885910               mov byte ptr [ecx + 0x10], bl
// 007b9d55  885a10               mov byte ptr [edx + 0x10], bl
// 007b9d58  8b10                 mov edx, dword ptr [eax]
// 007b9d5a  8b4a04               mov ecx, dword ptr [edx + 4]
// 007b9d5d  c6411000             mov byte ptr [ecx + 0x10], 0
// 007b9d61  8b10                 mov edx, dword ptr [eax]
// 007b9d63  8b7204               mov esi, dword ptr [edx + 4]
// 007b9d66  e9aa000000           jmp 0x7b9e15
// 007b9d6b  3b7108               cmp esi, dword ptr [ecx + 8]
// 007b9d6e  750a                 jne 0x7b9d7a
// 007b9d70  8bf1                 mov esi, ecx
// 007b9d72  56                   push esi
// 007b9d73  8bcf                 mov ecx, edi
// 007b9d75  e8c6d3ffff           call 0x7b7140
// 007b9d7a  8b4604               mov eax, dword ptr [esi + 4]
// 007b9d7d  885810               mov byte ptr [eax + 0x10], bl
// 007b9d80  8b4e04               mov ecx, dword ptr [esi + 4]
// 007b9d83  8b5104               mov edx, dword ptr [ecx + 4]
// 007b9d86  c6421000             mov byte ptr [edx + 0x10], 0
// 007b9d8a  8b4604               mov eax, dword ptr [esi + 4]
// 007b9d8d  8b4804               mov ecx, dword ptr [eax + 4]
// 007b9d90  51                   push ecx
// 007b9d91  8bcf                 mov ecx, edi
// 007b9d93  e8e805f6ff           call 0x71a380
// 007b9d98  eb7b                 jmp 0x7b9e15
// 007b9d9a  8b12                 mov edx, dword ptr [edx]
// 007b9d9c  807a1000             cmp byte ptr [edx + 0x10], 0
// 007b9da0  7516                 jne 0x7b9db8
// 007b9da2  885910               mov byte ptr [ecx + 0x10], bl
// 007b9da5  885a10               mov byte ptr [edx + 0x10], bl
// 007b9da8  8b10                 mov edx, dword ptr [eax]
// 007b9daa  8b4a04               mov ecx, dword ptr [edx + 4]
// 007b9dad  c6411000             mov byte ptr [ecx + 0x10], 0
// 007b9db1  8b10                 mov edx, dword ptr [eax]
// 007b9db3  8b7204               mov esi, dword ptr [edx + 4]
// 007b9db6  eb5d                 jmp 0x7b9e15
// 007b9db8  3b31                 cmp esi, dword ptr [ecx]
// 007b9dba  750a                 jne 0x7b9dc6
// 007b9dbc  8bf1                 mov esi, ecx
// 007b9dbe  56                   push esi
// 007b9dbf  8bcf                 mov ecx, edi
// 007b9dc1  e8ba05f6ff           call 0x71a380
// 007b9dc6  8b4604               mov eax, dword ptr [esi + 4]
// 007b9dc9  885810               mov byte ptr [eax + 0x10], bl
// 007b9dcc  8b4e04               mov ecx, dword ptr [esi + 4]
// 007b9dcf  8b5104               mov edx, dword ptr [ecx + 4]
// 007b9dd2  c6421000             mov byte ptr [edx + 0x10], 0
// 007b9dd6  8b4604               mov eax, dword ptr [esi + 4]
// 007b9dd9  8b4004               mov eax, dword ptr [eax + 4]
// 007b9ddc  8b4808               mov ecx, dword ptr [eax + 8]
// 007b9ddf  8b11                 mov edx, dword ptr [ecx]
// 007b9de1  895008               mov dword ptr [eax + 8], edx
// 007b9de4  8b11                 mov edx, dword ptr [ecx]
// 007b9de6  807a1100             cmp byte ptr [edx + 0x11], 0
// 007b9dea  7503                 jne 0x7b9def
// 007b9dec  894204               mov dword ptr [edx + 4], eax
// 007b9def  8b5004               mov edx, dword ptr [eax + 4]
// 007b9df2  895104               mov dword ptr [ecx + 4], edx
// 007b9df5  8b5718               mov edx, dword ptr [edi + 0x18]
// 007b9df8  3b4204               cmp eax, dword ptr [edx + 4]
// 007b9dfb  7505                 jne 0x7b9e02
// 007b9dfd  894a04               mov dword ptr [edx + 4], ecx
// 007b9e00  eb0e                 jmp 0x7b9e10
// 007b9e02  8b5004               mov edx, dword ptr [eax + 4]
// 007b9e05  3b02                 cmp eax, dword ptr [edx]
// 007b9e07  7504                 jne 0x7b9e0d
// 007b9e09  890a                 mov dword ptr [edx], ecx
// 007b9e0b  eb03                 jmp 0x7b9e10
// 007b9e0d  894a08               mov dword ptr [edx + 8], ecx
// 007b9e10  8901                 mov dword ptr [ecx], eax
// 007b9e12  894804               mov dword ptr [eax + 4], ecx
// 007b9e15  8b4e04               mov ecx, dword ptr [esi + 4]
// 007b9e18  80791000             cmp byte ptr [ecx + 0x10], 0
// 007b9e1c  8d4604               lea eax, [esi + 4]
// 007b9e1f  0f841bffffff         je 0x7b9d40
// 007b9e25  8b5718               mov edx, dword ptr [edi + 0x18]
// 007b9e28  8b4204               mov eax, dword ptr [edx + 4]
// 007b9e2b  885810               mov byte ptr [eax + 0x10], bl
// 007b9e2e  8b442464             mov eax, dword ptr [esp + 0x64]
// 007b9e32  8b0f                 mov ecx, dword ptr [edi]
// 007b9e34  5e                   pop esi
// 007b9e35  896804               mov dword ptr [eax + 4], ebp
// 007b9e38  5d                   pop ebp
// 007b9e39  8908                 mov dword ptr [eax], ecx
// 007b9e3b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007b9e3f  5b                   pop ebx
// 007b9e40  5f                   pop edi
// 007b9e41  64890d00000000       mov dword ptr fs:[0], ecx
// 007b9e48  83c450               add esp, 0x50
// 007b9e4b  c21000               ret 0x10
// library openrbx-client/App\v8world\ContactManager.cpp (function ?_Insert@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@2@ABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
