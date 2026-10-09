// roc 2010-06 006f46b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 510 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f46b0
//
// 006f46b0  64a100000000         mov eax, dword ptr fs:[0]
// 006f46b6  6aff                 push -1
// 006f46b8  68e22f9a00           push 0x9a2fe2
// 006f46bd  50                   push eax
// 006f46be  64892500000000       mov dword ptr fs:[0], esp
// 006f46c5  83ec44               sub esp, 0x44
// 006f46c8  57                   push edi
// 006f46c9  8bf9                 mov edi, ecx
// 006f46cb  817f1cfeffff3f       cmp dword ptr [edi + 0x1c], 0x3ffffffe
// 006f46d2  7259                 jb 0x6f472d
// 006f46d4  68a800a000           push 0xa000a8
// 006f46d9  8d4c2408             lea ecx, [esp + 8]
// 006f46dd  ff1510a49e00         call dword ptr [0x9ea410]
// 006f46e3  8d4c2420             lea ecx, [esp + 0x20]
// 006f46e7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 006f46ef  ff1518a99e00         call dword ptr [0x9ea918]
// 006f46f5  8d442404             lea eax, [esp + 4]
// 006f46f9  50                   push eax
// 006f46fa  8d4c2430             lea ecx, [esp + 0x30]
// 006f46fe  c644245401           mov byte ptr [esp + 0x54], 1
// 006f4703  c74424242c00a000     mov dword ptr [esp + 0x24], 0xa0002c
// 006f470b  ff150ca49e00         call dword ptr [0x9ea40c]
// 006f4711  68601bb000           push 0xb01b60
// 006f4716  8d4c2424             lea ecx, [esp + 0x24]
// 006f471a  51                   push ecx
// 006f471b  c644245800           mov byte ptr [esp + 0x58], 0
// 006f4720  c74424283800a000     mov dword ptr [esp + 0x28], 0xa00038
// 006f4728  e885420b00           call 0x7a89b2
// 006f472d  8b542464             mov edx, dword ptr [esp + 0x64]
// 006f4731  8b4718               mov eax, dword ptr [edi + 0x18]
// 006f4734  53                   push ebx
// 006f4735  55                   push ebp
// 006f4736  56                   push esi
// 006f4737  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 006f473b  6a00                 push 0
// 006f473d  52                   push edx
// 006f473e  50                   push eax
// 006f473f  56                   push esi
// 006f4740  50                   push eax
// 006f4741  e83aa0d2ff           call 0x41e780
// 006f4746  8be8                 mov ebp, eax
// 006f4748  8b4718               mov eax, dword ptr [edi + 0x18]
// 006f474b  bb01000000           mov ebx, 1
// 006f4750  015f1c               add dword ptr [edi + 0x1c], ebx
// 006f4753  3bf0                 cmp esi, eax
// 006f4755  7510                 jne 0x6f4767
// 006f4757  896804               mov dword ptr [eax + 4], ebp
// 006f475a  8b4718               mov eax, dword ptr [edi + 0x18]
// 006f475d  8928                 mov dword ptr [eax], ebp
// 006f475f  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 006f4762  896908               mov dword ptr [ecx + 8], ebp
// 006f4765  eb22                 jmp 0x6f4789
// 006f4767  807c246800           cmp byte ptr [esp + 0x68], 0
// 006f476c  740d                 je 0x6f477b
// 006f476e  892e                 mov dword ptr [esi], ebp
// 006f4770  8b4718               mov eax, dword ptr [edi + 0x18]
// 006f4773  3b30                 cmp esi, dword ptr [eax]
// 006f4775  7512                 jne 0x6f4789
// 006f4777  8928                 mov dword ptr [eax], ebp
// 006f4779  eb0e                 jmp 0x6f4789
// 006f477b  896e08               mov dword ptr [esi + 8], ebp
// 006f477e  8b4718               mov eax, dword ptr [edi + 0x18]
// 006f4781  3b7008               cmp esi, dword ptr [eax + 8]
// 006f4784  7503                 jne 0x6f4789
// 006f4786  896808               mov dword ptr [eax + 8], ebp
// 006f4789  8b5504               mov edx, dword ptr [ebp + 4]
// 006f478c  807a1000             cmp byte ptr [edx + 0x10], 0
// 006f4790  8d4504               lea eax, [ebp + 4]
// 006f4793  8bf5                 mov esi, ebp
// 006f4795  0f85ea000000         jne 0x6f4885
// 006f479b  eb03                 jmp 0x6f47a0
// 006f479d  8d4900               lea ecx, [ecx]
// 006f47a0  8b08                 mov ecx, dword ptr [eax]
// 006f47a2  8b5104               mov edx, dword ptr [ecx + 4]
// 006f47a5  3b0a                 cmp ecx, dword ptr [edx]
// 006f47a7  7551                 jne 0x6f47fa
// 006f47a9  8b5208               mov edx, dword ptr [edx + 8]
// 006f47ac  807a1000             cmp byte ptr [edx + 0x10], 0
// 006f47b0  7519                 jne 0x6f47cb
// 006f47b2  885910               mov byte ptr [ecx + 0x10], bl
// 006f47b5  885a10               mov byte ptr [edx + 0x10], bl
// 006f47b8  8b10                 mov edx, dword ptr [eax]
// 006f47ba  8b4a04               mov ecx, dword ptr [edx + 4]
// 006f47bd  c6411000             mov byte ptr [ecx + 0x10], 0
// 006f47c1  8b10                 mov edx, dword ptr [eax]
// 006f47c3  8b7204               mov esi, dword ptr [edx + 4]
// 006f47c6  e9aa000000           jmp 0x6f4875
// 006f47cb  3b7108               cmp esi, dword ptr [ecx + 8]
// 006f47ce  750a                 jne 0x6f47da
// 006f47d0  8bf1                 mov esi, ecx
// 006f47d2  56                   push esi
// 006f47d3  8bcf                 mov ecx, edi
// 006f47d5  e8f6a60600           call 0x75eed0
// 006f47da  8b4604               mov eax, dword ptr [esi + 4]
// 006f47dd  885810               mov byte ptr [eax + 0x10], bl
// 006f47e0  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f47e3  8b5104               mov edx, dword ptr [ecx + 4]
// 006f47e6  c6421000             mov byte ptr [edx + 0x10], 0
// 006f47ea  8b4604               mov eax, dword ptr [esi + 4]
// 006f47ed  8b4804               mov ecx, dword ptr [eax + 4]
// 006f47f0  51                   push ecx
// 006f47f1  8bcf                 mov ecx, edi
// 006f47f3  e8e8cef0ff           call 0x6016e0
// 006f47f8  eb7b                 jmp 0x6f4875
// 006f47fa  8b12                 mov edx, dword ptr [edx]
// 006f47fc  807a1000             cmp byte ptr [edx + 0x10], 0
// 006f4800  7516                 jne 0x6f4818
// 006f4802  885910               mov byte ptr [ecx + 0x10], bl
// 006f4805  885a10               mov byte ptr [edx + 0x10], bl
// 006f4808  8b10                 mov edx, dword ptr [eax]
// 006f480a  8b4a04               mov ecx, dword ptr [edx + 4]
// 006f480d  c6411000             mov byte ptr [ecx + 0x10], 0
// 006f4811  8b10                 mov edx, dword ptr [eax]
// 006f4813  8b7204               mov esi, dword ptr [edx + 4]
// 006f4816  eb5d                 jmp 0x6f4875
// 006f4818  3b31                 cmp esi, dword ptr [ecx]
// 006f481a  750a                 jne 0x6f4826
// 006f481c  8bf1                 mov esi, ecx
// 006f481e  56                   push esi
// 006f481f  8bcf                 mov ecx, edi
// 006f4821  e8bacef0ff           call 0x6016e0
// 006f4826  8b4604               mov eax, dword ptr [esi + 4]
// 006f4829  885810               mov byte ptr [eax + 0x10], bl
// 006f482c  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f482f  8b5104               mov edx, dword ptr [ecx + 4]
// 006f4832  c6421000             mov byte ptr [edx + 0x10], 0
// 006f4836  8b4604               mov eax, dword ptr [esi + 4]
// 006f4839  8b4004               mov eax, dword ptr [eax + 4]
// 006f483c  8b4808               mov ecx, dword ptr [eax + 8]
// 006f483f  8b11                 mov edx, dword ptr [ecx]
// 006f4841  895008               mov dword ptr [eax + 8], edx
// 006f4844  8b11                 mov edx, dword ptr [ecx]
// 006f4846  807a1100             cmp byte ptr [edx + 0x11], 0
// 006f484a  7503                 jne 0x6f484f
// 006f484c  894204               mov dword ptr [edx + 4], eax
// 006f484f  8b5004               mov edx, dword ptr [eax + 4]
// 006f4852  895104               mov dword ptr [ecx + 4], edx
// 006f4855  8b5718               mov edx, dword ptr [edi + 0x18]
// 006f4858  3b4204               cmp eax, dword ptr [edx + 4]
// 006f485b  7505                 jne 0x6f4862
// 006f485d  894a04               mov dword ptr [edx + 4], ecx
// 006f4860  eb0e                 jmp 0x6f4870
// 006f4862  8b5004               mov edx, dword ptr [eax + 4]
// 006f4865  3b02                 cmp eax, dword ptr [edx]
// 006f4867  7504                 jne 0x6f486d
// 006f4869  890a                 mov dword ptr [edx], ecx
// 006f486b  eb03                 jmp 0x6f4870
// 006f486d  894a08               mov dword ptr [edx + 8], ecx
// 006f4870  8901                 mov dword ptr [ecx], eax
// 006f4872  894804               mov dword ptr [eax + 4], ecx
// 006f4875  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f4878  80791000             cmp byte ptr [ecx + 0x10], 0
// 006f487c  8d4604               lea eax, [esi + 4]
// 006f487f  0f841bffffff         je 0x6f47a0
// 006f4885  8b5718               mov edx, dword ptr [edi + 0x18]
// 006f4888  8b4204               mov eax, dword ptr [edx + 4]
// 006f488b  885810               mov byte ptr [eax + 0x10], bl
// 006f488e  8b442464             mov eax, dword ptr [esp + 0x64]
// 006f4892  8b0f                 mov ecx, dword ptr [edi]
// 006f4894  5e                   pop esi
// 006f4895  896804               mov dword ptr [eax + 4], ebp
// 006f4898  5d                   pop ebp
// 006f4899  8908                 mov dword ptr [eax], ecx
// 006f489b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 006f489f  5b                   pop ebx
// 006f48a0  5f                   pop edi
// 006f48a1  64890d00000000       mov dword ptr fs:[0], ecx
// 006f48a8  83c450               add esp, 0x50
// 006f48ab  c21000               ret 0x10
// library openrbx-client/App\v8world\ContactManager.cpp (function ?_Insert@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@2@ABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
