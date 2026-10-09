// roc 2009-06 004e64c0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 510 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e64c0
//
// 004e64c0  64a100000000         mov eax, dword ptr fs:[0]
// 004e64c6  6aff                 push -1
// 004e64c8  68b2db8500           push 0x85dbb2
// 004e64cd  50                   push eax
// 004e64ce  64892500000000       mov dword ptr fs:[0], esp
// 004e64d5  83ec44               sub esp, 0x44
// 004e64d8  57                   push edi
// 004e64d9  8bf9                 mov edi, ecx
// 004e64db  817f1cfeffff3f       cmp dword ptr [edi + 0x1c], 0x3ffffffe
// 004e64e2  7259                 jb 0x4e653d
// 004e64e4  68c0c98a00           push 0x8ac9c0
// 004e64e9  8d4c2408             lea ecx, [esp + 8]
// 004e64ed  ff15b4e48900         call dword ptr [0x89e4b4]
// 004e64f3  8d4c2420             lea ecx, [esp + 0x20]
// 004e64f7  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004e64ff  ff15b8e98900         call dword ptr [0x89e9b8]
// 004e6505  8d442404             lea eax, [esp + 4]
// 004e6509  50                   push eax
// 004e650a  8d4c2430             lea ecx, [esp + 0x30]
// 004e650e  c644245401           mov byte ptr [esp + 0x54], 1
// 004e6513  c744242444c98a00     mov dword ptr [esp + 0x24], 0x8ac944
// 004e651b  ff15b8e48900         call dword ptr [0x89e4b8]
// 004e6521  6834929700           push 0x979234
// 004e6526  8d4c2424             lea ecx, [esp + 0x24]
// 004e652a  51                   push ecx
// 004e652b  c644245800           mov byte ptr [esp + 0x58], 0
// 004e6530  c744242850c98a00     mov dword ptr [esp + 0x28], 0x8ac950
// 004e6538  e80d352300           call 0x719a4a
// 004e653d  8b542464             mov edx, dword ptr [esp + 0x64]
// 004e6541  8b4718               mov eax, dword ptr [edi + 0x18]
// 004e6544  53                   push ebx
// 004e6545  55                   push ebp
// 004e6546  56                   push esi
// 004e6547  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 004e654b  6a00                 push 0
// 004e654d  52                   push edx
// 004e654e  50                   push eax
// 004e654f  56                   push esi
// 004e6550  50                   push eax
// 004e6551  e8aa861900           call 0x67ec00
// 004e6556  8be8                 mov ebp, eax
// 004e6558  8b4718               mov eax, dword ptr [edi + 0x18]
// 004e655b  bb01000000           mov ebx, 1
// 004e6560  015f1c               add dword ptr [edi + 0x1c], ebx
// 004e6563  3bf0                 cmp esi, eax
// 004e6565  7510                 jne 0x4e6577
// 004e6567  896804               mov dword ptr [eax + 4], ebp
// 004e656a  8b4718               mov eax, dword ptr [edi + 0x18]
// 004e656d  8928                 mov dword ptr [eax], ebp
// 004e656f  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 004e6572  896908               mov dword ptr [ecx + 8], ebp
// 004e6575  eb22                 jmp 0x4e6599
// 004e6577  807c246800           cmp byte ptr [esp + 0x68], 0
// 004e657c  740d                 je 0x4e658b
// 004e657e  892e                 mov dword ptr [esi], ebp
// 004e6580  8b4718               mov eax, dword ptr [edi + 0x18]
// 004e6583  3b30                 cmp esi, dword ptr [eax]
// 004e6585  7512                 jne 0x4e6599
// 004e6587  8928                 mov dword ptr [eax], ebp
// 004e6589  eb0e                 jmp 0x4e6599
// 004e658b  896e08               mov dword ptr [esi + 8], ebp
// 004e658e  8b4718               mov eax, dword ptr [edi + 0x18]
// 004e6591  3b7008               cmp esi, dword ptr [eax + 8]
// 004e6594  7503                 jne 0x4e6599
// 004e6596  896808               mov dword ptr [eax + 8], ebp
// 004e6599  8b5504               mov edx, dword ptr [ebp + 4]
// 004e659c  807a1000             cmp byte ptr [edx + 0x10], 0
// 004e65a0  8d4504               lea eax, [ebp + 4]
// 004e65a3  8bf5                 mov esi, ebp
// 004e65a5  0f85ea000000         jne 0x4e6695
// 004e65ab  eb03                 jmp 0x4e65b0
// 004e65ad  8d4900               lea ecx, [ecx]
// 004e65b0  8b08                 mov ecx, dword ptr [eax]
// 004e65b2  8b5104               mov edx, dword ptr [ecx + 4]
// 004e65b5  3b0a                 cmp ecx, dword ptr [edx]
// 004e65b7  7551                 jne 0x4e660a
// 004e65b9  8b5208               mov edx, dword ptr [edx + 8]
// 004e65bc  807a1000             cmp byte ptr [edx + 0x10], 0
// 004e65c0  7519                 jne 0x4e65db
// 004e65c2  885910               mov byte ptr [ecx + 0x10], bl
// 004e65c5  885a10               mov byte ptr [edx + 0x10], bl
// 004e65c8  8b10                 mov edx, dword ptr [eax]
// 004e65ca  8b4a04               mov ecx, dword ptr [edx + 4]
// 004e65cd  c6411000             mov byte ptr [ecx + 0x10], 0
// 004e65d1  8b10                 mov edx, dword ptr [eax]
// 004e65d3  8b7204               mov esi, dword ptr [edx + 4]
// 004e65d6  e9aa000000           jmp 0x4e6685
// 004e65db  3b7108               cmp esi, dword ptr [ecx + 8]
// 004e65de  750a                 jne 0x4e65ea
// 004e65e0  8bf1                 mov esi, ecx
// 004e65e2  56                   push esi
// 004e65e3  8bcf                 mov ecx, edi
// 004e65e5  e8f671f3ff           call 0x41d7e0
// 004e65ea  8b4604               mov eax, dword ptr [esi + 4]
// 004e65ed  885810               mov byte ptr [eax + 0x10], bl
// 004e65f0  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e65f3  8b5104               mov edx, dword ptr [ecx + 4]
// 004e65f6  c6421000             mov byte ptr [edx + 0x10], 0
// 004e65fa  8b4604               mov eax, dword ptr [esi + 4]
// 004e65fd  8b4804               mov ecx, dword ptr [eax + 4]
// 004e6600  51                   push ecx
// 004e6601  8bcf                 mov ecx, edi
// 004e6603  e818bbf4ff           call 0x432120
// 004e6608  eb7b                 jmp 0x4e6685
// 004e660a  8b12                 mov edx, dword ptr [edx]
// 004e660c  807a1000             cmp byte ptr [edx + 0x10], 0
// 004e6610  7516                 jne 0x4e6628
// 004e6612  885910               mov byte ptr [ecx + 0x10], bl
// 004e6615  885a10               mov byte ptr [edx + 0x10], bl
// 004e6618  8b10                 mov edx, dword ptr [eax]
// 004e661a  8b4a04               mov ecx, dword ptr [edx + 4]
// 004e661d  c6411000             mov byte ptr [ecx + 0x10], 0
// 004e6621  8b10                 mov edx, dword ptr [eax]
// 004e6623  8b7204               mov esi, dword ptr [edx + 4]
// 004e6626  eb5d                 jmp 0x4e6685
// 004e6628  3b31                 cmp esi, dword ptr [ecx]
// 004e662a  750a                 jne 0x4e6636
// 004e662c  8bf1                 mov esi, ecx
// 004e662e  56                   push esi
// 004e662f  8bcf                 mov ecx, edi
// 004e6631  e8eabaf4ff           call 0x432120
// 004e6636  8b4604               mov eax, dword ptr [esi + 4]
// 004e6639  885810               mov byte ptr [eax + 0x10], bl
// 004e663c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e663f  8b5104               mov edx, dword ptr [ecx + 4]
// 004e6642  c6421000             mov byte ptr [edx + 0x10], 0
// 004e6646  8b4604               mov eax, dword ptr [esi + 4]
// 004e6649  8b4004               mov eax, dword ptr [eax + 4]
// 004e664c  8b4808               mov ecx, dword ptr [eax + 8]
// 004e664f  8b11                 mov edx, dword ptr [ecx]
// 004e6651  895008               mov dword ptr [eax + 8], edx
// 004e6654  8b11                 mov edx, dword ptr [ecx]
// 004e6656  807a1100             cmp byte ptr [edx + 0x11], 0
// 004e665a  7503                 jne 0x4e665f
// 004e665c  894204               mov dword ptr [edx + 4], eax
// 004e665f  8b5004               mov edx, dword ptr [eax + 4]
// 004e6662  895104               mov dword ptr [ecx + 4], edx
// 004e6665  8b5718               mov edx, dword ptr [edi + 0x18]
// 004e6668  3b4204               cmp eax, dword ptr [edx + 4]
// 004e666b  7505                 jne 0x4e6672
// 004e666d  894a04               mov dword ptr [edx + 4], ecx
// 004e6670  eb0e                 jmp 0x4e6680
// 004e6672  8b5004               mov edx, dword ptr [eax + 4]
// 004e6675  3b02                 cmp eax, dword ptr [edx]
// 004e6677  7504                 jne 0x4e667d
// 004e6679  890a                 mov dword ptr [edx], ecx
// 004e667b  eb03                 jmp 0x4e6680
// 004e667d  894a08               mov dword ptr [edx + 8], ecx
// 004e6680  8901                 mov dword ptr [ecx], eax
// 004e6682  894804               mov dword ptr [eax + 4], ecx
// 004e6685  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e6688  80791000             cmp byte ptr [ecx + 0x10], 0
// 004e668c  8d4604               lea eax, [esi + 4]
// 004e668f  0f841bffffff         je 0x4e65b0
// 004e6695  8b5718               mov edx, dword ptr [edi + 0x18]
// 004e6698  8b4204               mov eax, dword ptr [edx + 4]
// 004e669b  885810               mov byte ptr [eax + 0x10], bl
// 004e669e  8b442464             mov eax, dword ptr [esp + 0x64]
// 004e66a2  8b0f                 mov ecx, dword ptr [edi]
// 004e66a4  5e                   pop esi
// 004e66a5  896804               mov dword ptr [eax + 4], ebp
// 004e66a8  5d                   pop ebp
// 004e66a9  8908                 mov dword ptr [eax], ecx
// 004e66ab  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004e66af  5b                   pop ebx
// 004e66b0  5f                   pop edi
// 004e66b1  64890d00000000       mov dword ptr fs:[0], ecx
// 004e66b8  83c450               add esp, 0x50
// 004e66bb  c21000               ret 0x10
// library openrbx-client/App\v8world\ContactManager.cpp (function ?_Insert@?$_Tree@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@$0A@@std@@@2@ABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
