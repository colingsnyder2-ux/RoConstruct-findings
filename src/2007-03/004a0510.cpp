// roc 2007-03 004a0510  unit: seg_004a0000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a0510
//
// 004a0510  8b5104               mov edx, dword ptr [ecx + 4]
// 004a0513  8b4204               mov eax, dword ptr [edx + 4]
// 004a0516  80781500             cmp byte ptr [eax + 0x15], 0
// 004a051a  56                   push esi
// 004a051b  57                   push edi
// 004a051c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a0520  7517                 jne 0x4a0539
// 004a0522  8b7704               mov esi, dword ptr [edi + 4]
// 004a0525  3b7010               cmp esi, dword ptr [eax + 0x10]
// 004a0528  7306                 jae 0x4a0530
// 004a052a  8bd0                 mov edx, eax
// 004a052c  8b00                 mov eax, dword ptr [eax]
// 004a052e  eb03                 jmp 0x4a0533
// 004a0530  8b4008               mov eax, dword ptr [eax + 8]
// 004a0533  80781500             cmp byte ptr [eax + 0x15], 0
// 004a0537  74ec                 je 0x4a0525
// 004a0539  8b7104               mov esi, dword ptr [ecx + 4]
// 004a053c  8b4604               mov eax, dword ptr [esi + 4]
// 004a053f  80781500             cmp byte ptr [eax + 0x15], 0
// 004a0543  7517                 jne 0x4a055c
// 004a0545  8b7f04               mov edi, dword ptr [edi + 4]
// 004a0548  397810               cmp dword ptr [eax + 0x10], edi
// 004a054b  7305                 jae 0x4a0552
// 004a054d  8b4008               mov eax, dword ptr [eax + 8]
// 004a0550  eb04                 jmp 0x4a0556
// 004a0552  8bf0                 mov esi, eax
// 004a0554  8b00                 mov eax, dword ptr [eax]
// 004a0556  80781500             cmp byte ptr [eax + 0x15], 0
// 004a055a  74ec                 je 0x4a0548
// 004a055c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004a0560  5f                   pop edi
// 004a0561  897004               mov dword ptr [eax + 4], esi
// 004a0564  8908                 mov dword ptr [eax], ecx
// 004a0566  894808               mov dword ptr [eax + 8], ecx
// 004a0569  89500c               mov dword ptr [eax + 0xc], edx
// 004a056c  5e                   pop esi
// 004a056d  c20800               ret 8
// library rbxgs-render/AggregatingSceneManager.cpp (function ?equal_range@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@QAE?AU?$pair@Viterator@?$_Tree@V?$_Tset_traits@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@U?$less@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@std@@V?$allocator@V?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@4@$0A@@std@@@std@@V123@@2@ABV?$WeakReferenceCountedPointer@VChunk@Render@RBX@@@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
