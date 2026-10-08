// roc 2007-08 004ef620  unit: RBX::Render::SceneManager  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ef620
//
// 004ef620  8b4104               mov eax, dword ptr [ecx + 4]
// 004ef623  8b4804               mov ecx, dword ptr [eax + 4]
// 004ef626  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 004ef62a  53                   push ebx
// 004ef62b  8bd8                 mov ebx, eax
// 004ef62d  7556                 jne 0x4ef685
// 004ef62f  56                   push esi
// 004ef630  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004ef634  57                   push edi
// 004ef635  8b7e08               mov edi, dword ptr [esi + 8]
// 004ef638  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004ef63b  3bc7                 cmp eax, edi
// 004ef63d  7233                 jb 0x4ef672
// 004ef63f  7736                 ja 0x4ef677
// 004ef641  8a410c               mov al, byte ptr [ecx + 0xc]
// 004ef644  8a16                 mov dl, byte ptr [esi]
// 004ef646  3ac2                 cmp al, dl
// 004ef648  7228                 jb 0x4ef672
// 004ef64a  772b                 ja 0x4ef677
// 004ef64c  d94110               fld dword ptr [ecx + 0x10]
// 004ef64f  d94604               fld dword ptr [esi + 4]
// 004ef652  ded9                 fcompp 
// 004ef654  dfe0                 fnstsw ax
// 004ef656  f6c441               test ah, 0x41
// 004ef659  7417                 je 0x4ef672
// 004ef65b  d94110               fld dword ptr [ecx + 0x10]
// 004ef65e  d94604               fld dword ptr [esi + 4]
// 004ef661  ded9                 fcompp 
// 004ef663  dfe0                 fnstsw ax
// 004ef665  f6c405               test ah, 5
// 004ef668  7b0d                 jnp 0x4ef677
// 004ef66a  8a410d               mov al, byte ptr [ecx + 0xd]
// 004ef66d  3a4601               cmp al, byte ptr [esi + 1]
// 004ef670  7305                 jae 0x4ef677
// 004ef672  8b4908               mov ecx, dword ptr [ecx + 8]
// 004ef675  eb04                 jmp 0x4ef67b
// 004ef677  8bd9                 mov ebx, ecx
// 004ef679  8b09                 mov ecx, dword ptr [ecx]
// 004ef67b  80791d00             cmp byte ptr [ecx + 0x1d], 0
// 004ef67f  74b7                 je 0x4ef638
// 004ef681  5f                   pop edi
// 004ef682  8bc3                 mov eax, ebx
// 004ef684  5e                   pop esi
// 004ef685  5b                   pop ebx
// 004ef686  c20400               ret 4
// library rbxgs-render/AggregatingSceneManager.cpp (function ?_Lbound@?$_Tree@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@std@@IBEPAU_Node@?$_Tree_nod@V?$_Tmap_traits@UBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@U?$less@UBucketKey@AggregatingSceneManager@Render@RBX@@@std@@V?$allocator@U?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@@8@$0A@@std@@@2@ABUBucketKey@AggregatingSceneManager@Render@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
